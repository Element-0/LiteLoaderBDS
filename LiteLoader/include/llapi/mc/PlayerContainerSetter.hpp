/**
 * @file  MC/PlayerContainerSetter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerContainerSetter.
 *
 */
class PlayerContainerSetter {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERCONTAINERSETTER
public:
    class PlayerContainerSetter& operator=(class PlayerContainerSetter const &) = delete;
    PlayerContainerSetter(class PlayerContainerSetter const &) = delete;
    PlayerContainerSetter() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PlayerContainerSetter();
    /**
     * @hash   1882951034
     * @vftbl  1
     * @symbol ?setArmor@PlayerContainerSetter@@UEAAXHAEBVItemStack@@@Z
     */
    virtual void setArmor(int, class ItemStack const &);
    /**
     * @hash   -1045648014
     * @vftbl  2
     * @symbol ?setOffhandSlot@PlayerContainerSetter@@UEAAXAEBVItemStack@@@Z
     */
    virtual void setOffhandSlot(class ItemStack const &);
    /**
     * @hash   730721127
     * @vftbl  3
     * @symbol ?setPlayerUIItem@PlayerContainerSetter@@UEAAXHAEBVItemStack@@@Z
     */
    virtual void setPlayerUIItem(int, class ItemStack const &);
    /**
     * @hash   1962377616
     * @symbol ??0PlayerContainerSetter@@QEAA@AEAVPlayer@@@Z
     */
    MCAPI PlayerContainerSetter(class Player &);

};