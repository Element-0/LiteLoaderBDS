/**
 * @file  MC/CraftHandlerEnchant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CraftHandlerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftHandlerEnchant.
 *
 */
class CraftHandlerEnchant : public CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERENCHANT
public:
    class CraftHandlerEnchant& operator=(class CraftHandlerEnchant const &) = delete;
    CraftHandlerEnchant(class CraftHandlerEnchant const &) = delete;
    CraftHandlerEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CraftHandlerEnchant();
    /**
     * @hash   2008081703
     * @vftbl  3
     * @symbol ?endRequestBatch@CraftHandlerEnchant@@MEAAXXZ
     */
    virtual void endRequestBatch();
    /**
     * @hash   796514675
     * @vftbl  4
     * @symbol ?_handleCraftAction@CraftHandlerEnchant@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
     */
    virtual enum ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @hash   1844279197
     * @vftbl  5
     * @symbol ?_postCraftRequest@CraftHandlerEnchant@@MEAAX_N@Z
     */
    virtual void _postCraftRequest(bool);
    /**
     * @hash   -1211321443
     * @symbol ??0CraftHandlerEnchant@@QEAA@AEAVPlayer@@AEAVItemStackRequestActionCraftHandler@@@Z
     */
    MCAPI CraftHandlerEnchant(class Player &, class ItemStackRequestActionCraftHandler &);

//private:
    /**
     * @hash   1073533219
     * @symbol ?_getEnchantingModel@CraftHandlerEnchant@@AEBAAEAVEnchantingContainerManagerModel@@XZ
     */
    MCAPI class EnchantingContainerManagerModel & _getEnchantingModel() const;
    /**
     * @hash   -1846484308
     * @symbol ?_handleEnchant@CraftHandlerEnchant@@AEAA?AW4ItemStackNetResult@@AEBV?$ItemStackRequestActionCraft@V?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@$0M@@@@Z
     */
    MCAPI enum ItemStackNetResult _handleEnchant(class ItemStackRequestActionCraft<class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>, 12> const &);

private:

};