/**
 * @file  MC/SelectorDefinition.hpp
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
 * @brief MC class SelectorDefinition.
 *
 */
class SelectorDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SELECTORDEFINITION
public:
    class SelectorDefinition& operator=(class SelectorDefinition const &) = delete;
    SelectorDefinition(class SelectorDefinition const &) = delete;
    SelectorDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SelectorDefinition();
    /**
     * @hash   -1485227006
     * @vftbl  1
     * @symbol ?load@SelectorDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};