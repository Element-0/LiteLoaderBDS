/**
 * @file  MC/CompoundTagUpdater.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompoundTagUpdater.
 *
 */
class CompoundTagUpdater {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAGUPDATER
public:
    class CompoundTagUpdater& operator=(class CompoundTagUpdater const &) = delete;
    CompoundTagUpdater(class CompoundTagUpdater const &) = delete;
    CompoundTagUpdater() = delete;
#endif

public:
    /**
     * @hash   -1635223603
     * @symbol ?update@CompoundTagUpdater@@QEBA_NAEAVCompoundTag@@@Z
     */
    MCAPI bool update(class CompoundTag &) const;
    /**
     * @hash   2136094836
     * @symbol ??1CompoundTagUpdater@@QEAA@XZ
     */
    MCAPI ~CompoundTagUpdater();

};