/**
 * @file  MC/DouseFireSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DouseFireSubcomponent.
 *
 */
class DouseFireSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOUSEFIRESUBCOMPONENT
public:
    class DouseFireSubcomponent& operator=(class DouseFireSubcomponent const &) = delete;
    DouseFireSubcomponent(class DouseFireSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DouseFireSubcomponent();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   -546774477
     * @vftbl  3
     * @symbol ?doOnHitEffect@DouseFireSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   -937197506
     * @vftbl  4
     * @symbol ?getName@DouseFireSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOUSEFIRESUBCOMPONENT
    /**
     * @hash   1857396825
     * @symbol ?readfromJSON@DouseFireSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    MCVAPI void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -572769472
     * @symbol ?writetoJSON@DouseFireSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    MCVAPI void writetoJSON(class Json::Value &) const;
#endif
    /**
     * @hash   -246234997
     * @symbol ??0DouseFireSubcomponent@@QEAA@XZ
     */
    MCAPI DouseFireSubcomponent();
    /**
     * @hash   -325922806
     * @symbol ?douseFire@DouseFireSubcomponent@@QEAAXAEAVActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void douseFire(class Actor &, class BlockSource &, class BlockPos const &);

};