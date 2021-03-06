#ifndef SKYLOADER_DAGGERFALL_H
#define SKYLOADER_DAGGERFALL_H

#include "SkyLoader.h"
#include "TextureLoader.h"

struct SkyData
{
    bool          bLoaded;
    TextureHandle ahTexEast[32];
    TextureHandle ahTexWest[32];
    Palette_24    aPalettes[32];
    Colormap      aColormaps[32];
};

class SkyLoader_Daggerfall : public SkyLoader
{
public:
    SkyLoader_Daggerfall();
    virtual ~SkyLoader_Daggerfall();

    bool LoadSky(int32_t regionID) override;
    void *GetSkyData(int32_t regionID) override;

private:
    enum
    {
        MAX_REGION_COUNT = 32
    };
    SkyData m_aSkyData[MAX_REGION_COUNT];
};

#endif //SKYLOADER_DAGGERFALL_H