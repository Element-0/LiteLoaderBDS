/**
 * @file  MC/RepeatUntilSuccessDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RepeatUntilSuccessDefinition.
 *
 */
class RepeatUntilSuccessDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPEATUNTILSUCCESSDEFINITION
public:
    class RepeatUntilSuccessDefinition& operator=(class RepeatUntilSuccessDefinition const &) = delete;
    RepeatUntilSuccessDefinition(class RepeatUntilSuccessDefinition const &) = delete;
    RepeatUntilSuccessDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RepeatUntilSuccessDefinition();
    /**
     * @hash   2112132401
     * @vftbl  1
     * @symbol ?load@RepeatUntilSuccessDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};