/**
 * @file  MC/SwellGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SwellGoal.
 *
 */
class SwellGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWELLGOAL
public:
    class SwellGoal& operator=(class SwellGoal const &) = delete;
    SwellGoal(class SwellGoal const &) = delete;
    SwellGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SwellGoal();
    /**
     * @hash   -1521372388
     * @vftbl  1
     * @symbol ?canUse@SwellGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   106482021
     * @vftbl  4
     * @symbol ?start@SwellGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1843186827
     * @vftbl  5
     * @symbol ?stop@SwellGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1125954688
     * @vftbl  6
     * @symbol ?tick@SwellGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -246991628
     * @vftbl  7
     * @symbol ?appendDebugInfo@SwellGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1673114378
     * @symbol ??0SwellGoal@@QEAA@PEAVCreeper@@MM@Z
     */
    MCAPI SwellGoal(class Creeper *, float, float);

};