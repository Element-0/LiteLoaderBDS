/**
 * @file  MC/BannerRecipes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BannerRecipes.
 *
 */
class BannerRecipes {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERRECIPES
public:
    class BannerRecipes& operator=(class BannerRecipes const &) = delete;
    BannerRecipes(class BannerRecipes const &) = delete;
    BannerRecipes() = delete;
#endif

public:
    /**
     * @hash   -1869309558
     * @symbol ?addRecipes@BannerRecipes@@SAXAEAVRecipes@@@Z
     */
    MCAPI static void addRecipes(class Recipes &);

};