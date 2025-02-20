/**
 * @file  MC/HumanoidMonster.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HumanoidMonster.
 *
 */
class HumanoidMonster : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUMANOIDMONSTER
public:
    class HumanoidMonster& operator=(class HumanoidMonster const &) = delete;
    HumanoidMonster(class HumanoidMonster const &) = delete;
    HumanoidMonster() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~HumanoidMonster();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   2099476830
     * @vftbl  48
     * @symbol ?normalTick@HumanoidMonster@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @symbol __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  221
     * @symbol __unk_vfn_221
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   -283169709
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@HumanoidMonster@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -368053670
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@HumanoidMonster@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -84892272
     * @vftbl  308
     * @symbol ?getItemUseDuration@HumanoidMonster@@UEBAHXZ
     */
    virtual int getItemUseDuration() const;
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @hash   -1142511695
     * @vftbl  316
     * @symbol ?doHurtTarget@HumanoidMonster@@UEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
     */
    virtual bool doHurtTarget(class Actor *, enum ActorDamageCause const &);
    /**
     * @vftbl  317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @hash   -1877476407
     * @symbol ??0HumanoidMonster@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI HumanoidMonster(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

//private:

private:
    /**
     * @hash   -513944800
     * @symbol ?MAX_ENCHANTED_ARMOR_CHANCE@HumanoidMonster@@0MB
     */
    MCAPI static float const MAX_ENCHANTED_ARMOR_CHANCE;
    /**
     * @hash   -1865302045
     * @symbol ?MAX_ENCHANTED_WEAPON_CHANCE@HumanoidMonster@@0MB
     */
    MCAPI static float const MAX_ENCHANTED_WEAPON_CHANCE;
    /**
     * @hash   -1682576311
     * @symbol ?MAX_PICKUP_LOOT_CHANCE@HumanoidMonster@@0MB
     */
    MCAPI static float const MAX_PICKUP_LOOT_CHANCE;
    /**
     * @hash   -261871795
     * @symbol ?MAX_WEARING_ARMOR_CHANCE@HumanoidMonster@@0MB
     */
    MCAPI static float const MAX_WEARING_ARMOR_CHANCE;

};