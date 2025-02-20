/**
 * @file  MC/NullLogger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NullLogger.
 *
 */
class NullLogger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLLOGGER
public:
    class NullLogger& operator=(class NullLogger const &) = delete;
    NullLogger(class NullLogger const &) = delete;
    NullLogger() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NullLogger();
    /**
     * @hash   -1016232635
     * @vftbl  1
     * @symbol ?Logv@NullLogger@@UEAAXPEBDPEAD@Z
     */
    virtual void Logv(char const *, char *);
    /**
     * @hash   65295151
     * @symbol ?instance@NullLogger@@2V1@A
     */
    MCAPI static class NullLogger instance;

};