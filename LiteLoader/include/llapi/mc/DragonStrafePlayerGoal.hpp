/**
 * @file  MC/DragonStrafePlayerGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonStrafePlayerGoal.
 *
 */
class DragonStrafePlayerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONSTRAFEPLAYERGOAL
public:
    class DragonStrafePlayerGoal& operator=(class DragonStrafePlayerGoal const &) = delete;
    DragonStrafePlayerGoal(class DragonStrafePlayerGoal const &) = delete;
    DragonStrafePlayerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DragonStrafePlayerGoal();
    /**
     * @hash   -864256198
     * @vftbl  1
     * @symbol ?canUse@DragonStrafePlayerGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1838971752
     * @vftbl  2
     * @symbol ?canContinueToUse@DragonStrafePlayerGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1398130349
     * @vftbl  4
     * @symbol ?start@DragonStrafePlayerGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1199017427
     * @vftbl  5
     * @symbol ?stop@DragonStrafePlayerGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   472055918
     * @vftbl  6
     * @symbol ?tick@DragonStrafePlayerGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1275551546
     * @vftbl  7
     * @symbol ?appendDebugInfo@DragonStrafePlayerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -2026654665
     * @symbol ??0DragonStrafePlayerGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI DragonStrafePlayerGoal(class Mob &);

//private:
    /**
     * @hash   2002558284
     * @symbol ?navigateToNextPathNode@DragonStrafePlayerGoal@@AEAAXXZ
     */
    MCAPI void navigateToNextPathNode();
    /**
     * @hash   1630023418
     * @symbol ?setTarget@DragonStrafePlayerGoal@@AEAAXPEAVActor@@@Z
     */
    MCAPI void setTarget(class Actor *);

private:

};