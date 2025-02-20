/**
 * @file  MC/SittableDefinition.hpp
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
 * @brief MC class SittableDefinition.
 *
 */
class SittableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SITTABLEDEFINITION
public:
    class SittableDefinition& operator=(class SittableDefinition const &) = delete;
    SittableDefinition(class SittableDefinition const &) = delete;
    SittableDefinition() = delete;
#endif

public:
    /**
     * @hash   -687160591
     * @symbol ?uninitialize@SittableDefinition@@QEAAXAEAVEntityContext@@AEAVSitComponent@@@Z
     */
    MCAPI void uninitialize(class EntityContext &, class SitComponent &);
    /**
     * @hash   356666998
     * @symbol ?buildSchema@SittableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSittableDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SittableDefinition>> &);

};