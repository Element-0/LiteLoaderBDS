/**
 * @file  MC/CrashDumpAssertData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CrashDumpAssertData.
 *
 */
class CrashDumpAssertData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPASSERTDATA
public:
    class CrashDumpAssertData& operator=(class CrashDumpAssertData const &) = delete;
    CrashDumpAssertData(class CrashDumpAssertData const &) = delete;
    CrashDumpAssertData() = delete;
#endif

public:
    /**
     * @hash   599924531
     * @symbol ?kFormat@CrashDumpAssertData@@2QBUCrashDumpFormatEntryImpl@@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

};