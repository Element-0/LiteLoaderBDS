/**
 * @file  MC/HugeFungusFeature.hpp
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
 * @brief MC class HugeFungusFeature.
 *
 */
class HugeFungusFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUGEFUNGUSFEATURE
public:
    class HugeFungusFeature& operator=(class HugeFungusFeature const &) = delete;
    HugeFungusFeature(class HugeFungusFeature const &) = delete;
    HugeFungusFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~HugeFungusFeature();
    /**
     * @hash   1330790991
     * @vftbl  3
     * @symbol ?place@HugeFungusFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -533535926
     * @symbol ??0HugeFungusFeature@@QEAA@_N@Z
     */
    MCAPI HugeFungusFeature(bool);

};