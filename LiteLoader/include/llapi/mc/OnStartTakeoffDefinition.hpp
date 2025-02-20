/**
 * @file  MC/OnStartTakeoffDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure OnStartTakeoffDefinition.
 *
 */
struct OnStartTakeoffDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONSTARTTAKEOFFDEFINITION
public:
    struct OnStartTakeoffDefinition& operator=(struct OnStartTakeoffDefinition const &) = delete;
    OnStartTakeoffDefinition(struct OnStartTakeoffDefinition const &) = delete;
    OnStartTakeoffDefinition() = delete;
#endif

public:
    /**
     * @hash   90520570
     * @symbol ?buildSchema@OnStartTakeoffDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UOnStartTakeoffDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnStartTakeoffDefinition>> &);

};