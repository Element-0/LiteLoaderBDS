/**
 * @file  MC/AgeableDefinition.hpp
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
 * @brief MC class AgeableDefinition.
 *
 */
class AgeableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGEABLEDEFINITION
public:
    class AgeableDefinition& operator=(class AgeableDefinition const &) = delete;
    AgeableDefinition(class AgeableDefinition const &) = delete;
    AgeableDefinition() = delete;
#endif

public:
    /**
     * @hash   -119146482
     * @symbol ?addDropItem@AgeableDefinition@@QEAAXAEBVItemDescriptor@@@Z
     */
    MCAPI void addDropItem(class ItemDescriptor const &);
    /**
     * @hash   1668487436
     * @symbol ?addFeedItem@AgeableDefinition@@QEAAXAEBUActorDefinitionFeedItem@@@Z
     */
    MCAPI void addFeedItem(struct ActorDefinitionFeedItem const &);
    /**
     * @hash   1213067908
     * @symbol ?addFeedItemByName@AgeableDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void addFeedItemByName(std::string const &);
    /**
     * @hash   -1507512714
     * @symbol ?canGrowUp@AgeableDefinition@@QEBA_NXZ
     */
    MCAPI bool canGrowUp() const;
    /**
     * @hash   -1784965658
     * @symbol ?getTicksAsBaby@AgeableDefinition@@QEBAHXZ
     */
    MCAPI int getTicksAsBaby() const;
    /**
     * @hash   494875173
     * @symbol ?initialize@AgeableDefinition@@QEAAXAEAVEntityContext@@AEAVAgeableComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class AgeableComponent &);
    /**
     * @hash   -2071099510
     * @symbol ?buildSchema@AgeableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VAgeableDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AgeableDefinition>> &);

};