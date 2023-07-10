#!/bin/sh
set -xe
[ ! -e ../config.sh ] && die "FRESteamWorks/config.sh is not set up!"
. ../config.sh

die() {
	echo "$@"
	exit 1
}

if [ -n "$1" ]; then
	target="$1"
else
	target="$(git describe --tags --always)"
fi

for type in Debug Release; do
	dir="$target/$type"
	[ ! -d "$dir" ] && die "Build directory $dir missing"
	pushd "$dir"

	[ ! -d "FRESteamWorks.framework" ] && die "$dir/FRESteamWorks.framework missing"
	[ ! -f "FRESteamWorks.dll" ] && die "$dir/FRESteamWorks.dll missing"
	[ ! -f "FRESteamWorks.so" ] && die "$dir/FRESteamWorks.so missing"

	if [ "$type" = "Debug" ]; then
		compc_flags="-debug=true"
	else
		compc_flags="-debug=false -optimize"
	fi

	"$FLEX_SDK/bin/compc" +configname=air -source-path ../../../lib/src \
	                      -include-sources ../../../lib/src/ \
	                      -swf-version=11 -output FRESteamWorksLib.swc \
	                      ${compc_flags}

	unzip -o FRESteamWorksLib.swc

	cp ../../../lib/bin/descriptor.xml .
	version="$(git describe --long --always --tags "$target" | sed 's/-g.*//;s/-/./')"
	sed -E -i "" -e "s/<versionNumber>[^<]+/<versionNumber>${version##v}/" descriptor.xml

	"$AIR_SDK"/bin/adt -package -target ane FRESteamWorks.ane descriptor.xml \
	                   -swc FRESteamWorksLib.swc \
	                   -platform Windows-x86 library.swf FRESteamWorks.dll \
	                   -platform MacOS-x86-64 library.swf FRESteamWorks.framework \
	                   -platform Linux-x86-64 library.swf FRESteamWorks.so \
	                   -platform default library.swf

	rm -f library.swf catalog.xml
	popd
done

pushd "$target"

steam_sdk_version=$(grep -m1 -F v1. "$STEAM_SDK/Readme.txt")
air_sdk_version=$(head -n1 "$AIR_SDK/AIR SDK Readme.txt")
cat <<EOD > README.txt
FRESteamWorks ${target}

https://github.com/Ventero/FRESteamWorks/commits/${target}

Built against Steam SDK ${steam_sdk_version} and ${air_sdk_version}.
EOD

cp Debug/FRESteamWorks.ane FRESteamWorks-Debug.ane
cp Release/FRESteamWorks.ane FRESteamWorks.ane
popd


if [ -n "$UPLOAD_URL" ]; then
	curl --ftp-create-dirs -nT \
	     "{$target/FRESteamWorks-Debug.ane,$target/FRESteamWorks.ane,$target/FRESteamWorksLibLinux.swc,$target/README.txt}" \
	     "$UPLOAD_URL/$target/"
fi
