/**
 * @file  MC/BlockPileFeature.hpp
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
 * @brief MC class BlockPileFeature.
 *
 */
class BlockPileFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPILEFEATURE
public:
    class BlockPileFeature& operator=(class BlockPileFeature const &) = delete;
    BlockPileFeature(class BlockPileFeature const &) = delete;
    BlockPileFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockPileFeature();
    /**
     * @hash   71831121
     * @vftbl  3
     * @symbol ?place@BlockPileFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -149315232
     * @vftbl  4
     * @symbol ?getBlockToPlace@BlockPileFeature@@MEBAAEBVBlock@@AEAVRandom@@@Z
     */
    virtual class Block const & getBlockToPlace(class Random &) const;
    /**
     * @hash   -698900488
     * @symbol ??0BlockPileFeature@@QEAA@AEBVBlock@@@Z
     */
    MCAPI BlockPileFeature(class Block const &);

};