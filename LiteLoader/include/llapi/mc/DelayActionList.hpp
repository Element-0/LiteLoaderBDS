/**
 * @file  MC/DelayActionList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DelayActionList.
 *
 */
class DelayActionList {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DELAYACTIONLIST
public:
    class DelayActionList& operator=(class DelayActionList const &) = delete;
    DelayActionList(class DelayActionList const &) = delete;
#endif

public:
    /**
     * @hash   -802984301
     * @symbol ??0DelayActionList@@QEAA@XZ
     */
    MCAPI DelayActionList();
    /**
     * @hash   1869724186
     * @symbol ?queueRequestOrExecuteAction@DelayActionList@@QEAA?AW4QueueRequestResult@@VDelayRequest@@AEAVServerLevel@@AEAVDimension@@_K_N@Z
     */
    MCAPI enum QueueRequestResult queueRequestOrExecuteAction(class DelayRequest, class ServerLevel &, class Dimension &, unsigned __int64, bool);
    /**
     * @hash   -675410779
     * @symbol ?tick@DelayActionList@@QEAAXAEAVServerLevel@@AEAVDimension@@_K@Z
     */
    MCAPI void tick(class ServerLevel &, class Dimension &, unsigned __int64);

};