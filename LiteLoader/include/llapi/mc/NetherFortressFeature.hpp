/**
 * @file  MC/NetherFortressFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetherFortressFeature.
 *
 */
class NetherFortressFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERFORTRESSFEATURE
public:
    class NetherFortressFeature& operator=(class NetherFortressFeature const &) = delete;
    NetherFortressFeature(class NetherFortressFeature const &) = delete;
    NetherFortressFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NetherFortressFeature();
    /**
     * @hash   -529874367
     * @vftbl  1
     * @symbol ?shouldAddHardcodedSpawnAreas@NetherFortressFeature@@UEBA_NXZ
     */
    virtual bool shouldAddHardcodedSpawnAreas() const;
    /**
     * @hash   -548099578
     * @vftbl  4
     * @symbol ?initMobSpawnTypes@NetherFortressFeature@@UEAAXAEAVHardcodedSpawnAreaRegistry@@@Z
     */
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry &);
    /**
     * @hash   -2077228735
     * @vftbl  5
     * @symbol ?isFeatureChunk@NetherFortressFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @hash   1632976073
     * @vftbl  6
     * @symbol ?createStructureStart@NetherFortressFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @hash   371290879
     * @symbol ??0NetherFortressFeature@@QEAA@AEAIAEBVBaseGameVersion@@@Z
     */
    MCAPI NetherFortressFeature(unsigned int &, class BaseGameVersion const &);

};