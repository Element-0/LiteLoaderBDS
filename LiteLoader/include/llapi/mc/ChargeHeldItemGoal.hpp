/**
 * @file  MC/ChargeHeldItemGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChargeHeldItemGoal.
 *
 */
class ChargeHeldItemGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHARGEHELDITEMGOAL
public:
    class ChargeHeldItemGoal& operator=(class ChargeHeldItemGoal const &) = delete;
    ChargeHeldItemGoal(class ChargeHeldItemGoal const &) = delete;
    ChargeHeldItemGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ChargeHeldItemGoal();
    /**
     * @hash   -880142207
     * @vftbl  1
     * @symbol ?canUse@ChargeHeldItemGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1397341327
     * @vftbl  2
     * @symbol ?canContinueToUse@ChargeHeldItemGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1059851162
     * @vftbl  4
     * @symbol ?start@ChargeHeldItemGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1979575350
     * @vftbl  5
     * @symbol ?stop@ChargeHeldItemGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   138743797
     * @vftbl  6
     * @symbol ?tick@ChargeHeldItemGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -213897505
     * @vftbl  7
     * @symbol ?appendDebugInfo@ChargeHeldItemGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   603924942
     * @symbol ??0ChargeHeldItemGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI ChargeHeldItemGoal(class Mob &);

};