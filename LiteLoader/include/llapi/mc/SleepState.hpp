/**
 * @file  MC/SleepState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SleepState.
 *
 */
class SleepState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLEEPSTATE
public:
    class SleepState& operator=(class SleepState const &) = delete;
    SleepState(class SleepState const &) = delete;
    SleepState() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SleepState();
    /**
     * @hash   2108898314
     * @vftbl  1
     * @symbol ?tick@SleepState@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   1270645727
     * @vftbl  3
     * @symbol ?stop@SleepState@@UEAAXXZ
     */
    virtual void stop();

};