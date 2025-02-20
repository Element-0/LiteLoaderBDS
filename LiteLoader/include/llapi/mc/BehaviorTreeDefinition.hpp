/**
 * @file  MC/BehaviorTreeDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BehaviorTreeDefinition.
 *
 */
class BehaviorTreeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORTREEDEFINITION
public:
    class BehaviorTreeDefinition& operator=(class BehaviorTreeDefinition const &) = delete;
    BehaviorTreeDefinition(class BehaviorTreeDefinition const &) = delete;
    BehaviorTreeDefinition() = delete;
#endif

public:
    /**
     * @hash   -2105675721
     * @symbol ?getRoot@BehaviorTreeDefinition@@QEBAPEBVBehaviorDefinition@@XZ
     */
    MCAPI class BehaviorDefinition const * getRoot() const;

};