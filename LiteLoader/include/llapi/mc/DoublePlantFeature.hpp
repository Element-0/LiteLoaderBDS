/**
 * @file  MC/DoublePlantFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DoublePlantFeature.
 *
 */
class DoublePlantFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOUBLEPLANTFEATURE
public:
    class DoublePlantFeature& operator=(class DoublePlantFeature const &) = delete;
    DoublePlantFeature(class DoublePlantFeature const &) = delete;
    DoublePlantFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DoublePlantFeature();
    /**
     * @hash   1579993014
     * @vftbl  3
     * @symbol ?place@DoublePlantFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -36853028
     * @symbol ?place@DoublePlantFeature@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@W4DoublePlantType@@@Z
     */
    MCAPI bool place(class BlockSource &, class BlockPos const &, class Random &, enum DoublePlantType) const;

};