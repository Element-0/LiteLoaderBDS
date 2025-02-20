/**
 * @file  MC/AddLocalPlayerEntityMovedSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class AddLocalPlayerEntityMovedSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDLOCALPLAYERENTITYMOVEDSYSTEM
public:
    class AddLocalPlayerEntityMovedSystem& operator=(class AddLocalPlayerEntityMovedSystem const &) = delete;
    AddLocalPlayerEntityMovedSystem(class AddLocalPlayerEntityMovedSystem const &) = delete;
    AddLocalPlayerEntityMovedSystem() = delete;
#endif

public:
    /**
     * @symbol ?createAddLocalPlayerEntityMovedSystem@AddLocalPlayerEntityMovedSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAddLocalPlayerEntityMovedSystem();

};