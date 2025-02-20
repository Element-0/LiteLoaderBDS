/**
 * @file  MC/TickEndResetSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TickEndResetSystem.
 *
 */
class TickEndResetSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKENDRESETSYSTEM
public:
    class TickEndResetSystem& operator=(class TickEndResetSystem const &) = delete;
    TickEndResetSystem(class TickEndResetSystem const &) = delete;
    TickEndResetSystem() = delete;
#endif

public:
    /**
     * @hash   2068760338
     * @symbol ?createSystem@TickEndResetSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};