/**
 * @file  MC/EnchantRandomlyFunction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantRandomlyFunction.
 *
 */
class EnchantRandomlyFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTRANDOMLYFUNCTION
public:
    class EnchantRandomlyFunction& operator=(class EnchantRandomlyFunction const &) = delete;
    EnchantRandomlyFunction(class EnchantRandomlyFunction const &) = delete;
    EnchantRandomlyFunction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EnchantRandomlyFunction();
    /**
     * @hash   -1249775107
     * @vftbl  1
     * @symbol ?apply@EnchantRandomlyFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @hash   -1678108590
     * @vftbl  3
     * @symbol ?apply@EnchantRandomlyFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @hash   1949803839
     * @symbol ?deserialize@EnchantRandomlyFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

};