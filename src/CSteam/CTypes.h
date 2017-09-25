#ifndef CTYPES_H
#define CTYPES_H

#include <steam/steam_api.h>

// used to store a LeaderboardEntry_t in combination with any possible details
class LeaderboardEntry {
public:
    explicit LeaderboardEntry(int maxDetails) :
        max_details(maxDetails),
        details(nullptr)
    {
        if (max_details) details = new int32[max_details];
    }

    LeaderboardEntry(const LeaderboardEntry& other) :
        entry(other.entry),
        max_details(other.max_details),
        details(nullptr)
    {
        if (max_details) {
            details = new int32[max_details];
            std::copy(other.details, other.details + max_details, details);
        }
    }

    LeaderboardEntry& operator=(LeaderboardEntry other) {
        std::swap(entry, other.entry);
        std::swap(max_details, other.max_details);
        std::swap(details, other.details);

        return *this;
    }

    ~LeaderboardEntry() {
        delete[] details;
    }

    LeaderboardEntry_t entry;
    int max_details;
    int32 *details;
};

struct Image {
    Image(uint32 image_width, uint32 image_height)
        : width(image_width)
        , height(image_height)
        , data(width * height * 4)
    {
        /* empty */
    }

    uint32 width;
    uint32 height;
    std::vector<uint8> data;
};

#endif // CTYPES_H
