/**
 * @file  MC/ScriptDebuggerWatchdog.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptDebuggerWatchdog.
 *
 */
class ScriptDebuggerWatchdog {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEBUGGERWATCHDOG
public:
    class ScriptDebuggerWatchdog& operator=(class ScriptDebuggerWatchdog const &) = delete;
    ScriptDebuggerWatchdog(class ScriptDebuggerWatchdog const &) = delete;
    ScriptDebuggerWatchdog() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptDebuggerWatchdog();
    /**
     * @hash   -2119127470
     * @vftbl  1
     * @symbol ?requireClose@ScriptDebuggerWatchdog@@UEBA_NXZ
     */
    virtual bool requireClose() const;
    /**
     * @hash   -1557638858
     * @vftbl  2
     * @symbol ?startListenTimeout@ScriptDebuggerWatchdog@@UEAAXXZ
     */
    virtual void startListenTimeout();
    /**
     * @hash   1360871322
     * @vftbl  3
     * @symbol ?listenTimeoutExpired@ScriptDebuggerWatchdog@@UEBA_NXZ
     */
    virtual bool listenTimeoutExpired() const;
    /**
     * @hash   -1888141865
     * @symbol ??0ScriptDebuggerWatchdog@@QEAA@V?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@Z
     */
    MCAPI ScriptDebuggerWatchdog(class std::chrono::duration<int, struct std::ratio<60, 1>>);
    /**
     * @hash   138261413
     * @symbol ?startLeaveGame@ScriptDebuggerWatchdog@@QEAAXXZ
     */
    MCAPI void startLeaveGame();

};