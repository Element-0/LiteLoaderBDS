/**
 * @file  MC/ToolRecipes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ToolRecipes.
 *
 */
class ToolRecipes {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TOOLRECIPES
public:
    class ToolRecipes& operator=(class ToolRecipes const &) = delete;
    ToolRecipes(class ToolRecipes const &) = delete;
    ToolRecipes() = delete;
#endif

public:
    /**
     * @hash   459123530
     * @symbol ?addRecipes@ToolRecipes@@SAXAEAVRecipes@@@Z
     */
    MCAPI static void addRecipes(class Recipes &);

};