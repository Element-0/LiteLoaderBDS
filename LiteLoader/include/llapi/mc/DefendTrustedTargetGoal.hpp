/**
 * @file  MC/DefendTrustedTargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NearestAttackableTargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DefendTrustedTargetGoal.
 *
 */
class DefendTrustedTargetGoal : public NearestAttackableTargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFENDTRUSTEDTARGETGOAL
public:
    class DefendTrustedTargetGoal& operator=(class DefendTrustedTargetGoal const &) = delete;
    DefendTrustedTargetGoal(class DefendTrustedTargetGoal const &) = delete;
    DefendTrustedTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DefendTrustedTargetGoal();
    /**
     * @hash   -758978421
     * @vftbl  1
     * @symbol ?canUse@DefendTrustedTargetGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -597075420
     * @vftbl  4
     * @symbol ?start@DefendTrustedTargetGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1118885083
     * @vftbl  7
     * @symbol ?appendDebugInfo@DefendTrustedTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   -1960178769
     * @symbol ??0DefendTrustedTargetGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@MH_NHW4LevelSoundEvent@@AEBVActorDefinitionTrigger@@@Z
     */
    MCAPI DefendTrustedTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &, float, int, bool, int, enum LevelSoundEvent, class ActorDefinitionTrigger const &);

//private:
    /**
     * @hash   210124610
     * @symbol ?_findTrustedTarget@DefendTrustedTargetGoal@@AEAA?AUActorUniqueID@@AEBVTrustComponent@@@Z
     */
    MCAPI struct ActorUniqueID _findTrustedTarget(class TrustComponent const &);

private:

};