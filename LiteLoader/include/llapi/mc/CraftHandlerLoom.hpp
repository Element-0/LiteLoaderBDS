/**
 * @file  MC/CraftHandlerLoom.hpp
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
 * @brief MC class CraftHandlerLoom.
 *
 */
class CraftHandlerLoom : public CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERLOOM
public:
    class CraftHandlerLoom& operator=(class CraftHandlerLoom const &) = delete;
    CraftHandlerLoom(class CraftHandlerLoom const &) = delete;
    CraftHandlerLoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CraftHandlerLoom();
    /**
     * @hash   1312434527
     * @vftbl  4
     * @symbol ?_handleCraftAction@CraftHandlerLoom@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
     */
    virtual enum ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @hash   1129745994
     * @symbol ??0CraftHandlerLoom@@QEAA@AEAVItemStackRequestActionCraftHandler@@@Z
     */
    MCAPI CraftHandlerLoom(class ItemStackRequestActionCraftHandler &);

};