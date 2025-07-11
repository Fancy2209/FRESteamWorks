# To set up your config on OS X or Linux, copy this file to config.sh and
# change the values below accordingly. All paths must be absolute paths!
# On Linux, remember to wrap all variables in ${}, so that they can
# be used in the Makefile.

# Path to the main AIR SDK directory, so that $AIR_SDK/bin/adt exists.
if [[ ! -v AIR_SDK ]]; then 
    AIR_SDK="${HOME}/SDKS/AIRSDK"
fi
# Path to the Flex SDK, so that $FLEX_SDK/bin/compc exists.
# Might be identical to AIR_SDK if you use an overlayed SDK.
if [[ ! -v FLEX_SDK ]]; then 
    FLEX_SDK="${HOME}/SDKS/AIRSDK"
fi
# Path to the Steam SDK, so that $STEAM_SDK/redistributable_bin exists.
if [[ ! -v STEAM_SDK ]]; then 
    STEAM_SDK="${HOME}/SDKS/SteamSDK"
if
# FTP path to upload the built binaries to when running builds/build.sh.
# Version number gets appended to the path. Binaries will not be uploaded
# if left commented or set to an empty value.
#UPLOAD_URL="ftp://example.org/FRESteamWorks"
