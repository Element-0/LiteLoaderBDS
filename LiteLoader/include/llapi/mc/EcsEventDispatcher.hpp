/**
 * @file  MC/EcsEventDispatcher.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EcsEventDispatcher.
 *
 */
class EcsEventDispatcher {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ECSEVENTDISPATCHER
public:
    class EcsEventDispatcher& operator=(class EcsEventDispatcher const &) = delete;
    EcsEventDispatcher(class EcsEventDispatcher const &) = delete;
    EcsEventDispatcher() = delete;
#endif

public:
    /**
     * @hash   1960889445
     * @symbol ?update@EcsEventDispatcher@@QEAAXXZ
     */
    MCAPI void update();

};