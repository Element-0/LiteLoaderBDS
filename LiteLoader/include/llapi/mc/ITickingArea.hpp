/**
 * @file  MC/ITickingArea.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ITickingArea.
 *
 */
class ITickingArea {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITICKINGAREA
public:
    class ITickingArea& operator=(class ITickingArea const &) = delete;
    ITickingArea(class ITickingArea const &) = delete;
    ITickingArea() = delete;
#endif

public:
    /**
     * @hash   1644210274
     * @symbol ?serialize@ITickingArea@@QEBA?AVCompoundTag@@XZ
     */
    MCAPI class CompoundTag serialize() const;

};