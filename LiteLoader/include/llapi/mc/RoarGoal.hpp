/**
 * @file  MC/RoarGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RoarGoal.
 *
 */
class RoarGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROARGOAL
public:
    class RoarGoal& operator=(class RoarGoal const &) = delete;
    RoarGoal(class RoarGoal const &) = delete;
    RoarGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RoarGoal();
    /**
     * @hash   -2078216433
     * @vftbl  1
     * @symbol ?canUse@RoarGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   303489821
     * @vftbl  2
     * @symbol ?canContinueToUse@RoarGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   253114584
     * @vftbl  4
     * @symbol ?start@RoarGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1908616072
     * @vftbl  5
     * @symbol ?stop@RoarGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   480352355
     * @vftbl  6
     * @symbol ?tick@RoarGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   173976417
     * @vftbl  7
     * @symbol ?appendDebugInfo@RoarGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   14542684
     * @symbol ??0RoarGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI RoarGoal(class Mob &);

};