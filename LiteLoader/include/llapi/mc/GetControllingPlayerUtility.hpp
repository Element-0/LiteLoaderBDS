/**
 * @file  MC/GetControllingPlayerUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace GetControllingPlayerUtility.
 *
 */
namespace GetControllingPlayerUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   -1051786465
     * @symbol ?tryGetControllingPlayerContext@GetControllingPlayerUtility@@YA?AV?$optional@VStrictEntityContext@@@std@@VStrictEntityContext@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBV?$FlagComponent@ULocalPlayerComponentFlag@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBV?$FlagComponent@UServerPlayerComponentFlag@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UBoatFlag@@@@@@$$CBUVehicleComponent@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UHorseFlag@@@@@@$$CBUVehicleComponent@@$$CBUSynchedActorDataComponent@@@@@Z
     */
    MCAPI class std::optional<class StrictEntityContext> tryGetControllingPlayerContext(class StrictEntityContext, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct LocalPlayerComponentFlag> const> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct ServerPlayerComponentFlag> const> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct BoatFlag>>, struct VehicleComponent const> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct VehicleComponent const, struct SynchedActorDataComponent const> *);

};