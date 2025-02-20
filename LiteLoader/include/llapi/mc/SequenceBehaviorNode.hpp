/**
 * @file  MC/SequenceBehaviorNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SequenceBehaviorNode.
 *
 */
class SequenceBehaviorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEQUENCEBEHAVIORNODE
public:
    class SequenceBehaviorNode& operator=(class SequenceBehaviorNode const &) = delete;
    SequenceBehaviorNode(class SequenceBehaviorNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SequenceBehaviorNode();
    /**
     * @hash   1366704978
     * @vftbl  1
     * @symbol ?tick@SequenceBehaviorNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @hash   170772815
     * @vftbl  2
     * @symbol ?initializeFromDefinition@SequenceBehaviorNode@@MEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   -1756028863
     * @symbol ??0SequenceBehaviorNode@@QEAA@XZ
     */
    MCAPI SequenceBehaviorNode();

};