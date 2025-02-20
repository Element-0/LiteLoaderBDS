/**
 * @file  MC/FertilizeFarmBlockGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FertilizeFarmBlockGoal.
 *
 */
class FertilizeFarmBlockGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FERTILIZEFARMBLOCKGOAL
public:
    class FertilizeFarmBlockGoal& operator=(class FertilizeFarmBlockGoal const &) = delete;
    FertilizeFarmBlockGoal(class FertilizeFarmBlockGoal const &) = delete;
    FertilizeFarmBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FertilizeFarmBlockGoal();
    /**
     * @hash   729952454
     * @vftbl  1
     * @symbol ?canUse@FertilizeFarmBlockGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -861802268
     * @vftbl  2
     * @symbol ?canContinueToUse@FertilizeFarmBlockGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -190018209
     * @vftbl  4
     * @symbol ?start@FertilizeFarmBlockGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1888083745
     * @vftbl  5
     * @symbol ?stop@FertilizeFarmBlockGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1679276250
     * @vftbl  6
     * @symbol ?tick@FertilizeFarmBlockGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -402177222
     * @vftbl  7
     * @symbol ?appendDebugInfo@FertilizeFarmBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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
     * @hash   -796426431
     * @vftbl  11
     * @symbol ?isValidTarget@FertilizeFarmBlockGoal@@MEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -1874832029
     * @symbol ??0FertilizeFarmBlockGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI FertilizeFarmBlockGoal(class Mob &);

//protected:
    /**
     * @hash   -1959881498
     * @symbol ?tryFertilizeCrop@FertilizeFarmBlockGoal@@IEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool tryFertilizeCrop(class BlockSource &, class BlockPos const &);

//private:
    /**
     * @hash   -354675434
     * @symbol ?_findFertilizer@FertilizeFarmBlockGoal@@AEAA_NXZ
     */
    MCAPI bool _findFertilizer();

protected:

private:

};