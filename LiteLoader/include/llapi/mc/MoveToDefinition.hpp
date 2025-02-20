/**
 * @file  MC/MoveToDefinition.hpp
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
 * @brief MC class MoveToDefinition.
 *
 */
class MoveToDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETODEFINITION
public:
    class MoveToDefinition& operator=(class MoveToDefinition const &) = delete;
    MoveToDefinition(class MoveToDefinition const &) = delete;
    MoveToDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MoveToDefinition();
    /**
     * @hash   554578213
     * @vftbl  1
     * @symbol ?load@MoveToDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};