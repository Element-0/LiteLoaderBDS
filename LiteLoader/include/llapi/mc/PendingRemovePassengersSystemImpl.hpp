/**
 * @file  MC/PendingRemovePassengersSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PendingRemovePassengersSystemImpl.
 *
 */
class PendingRemovePassengersSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PENDINGREMOVEPASSENGERSSYSTEMIMPL
public:
    class PendingRemovePassengersSystemImpl& operator=(class PendingRemovePassengersSystemImpl const &) = delete;
    PendingRemovePassengersSystemImpl(class PendingRemovePassengersSystemImpl const &) = delete;
    PendingRemovePassengersSystemImpl() = delete;
#endif

public:
    /**
     * @hash   218206999
     * @symbol ?_pendingRemovePassengersSystem@PendingRemovePassengersSystemImpl@@SAXAEAV?$ViewedEntityContextT@VStrictEntityContext@@$$CBUVehicleComponent@@$$CBUPendingRemovePassengersComponent@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UPendingRemovePassengersComponent@@URemovePassengersComponent@@@@@Z
     */
    MCAPI static void _pendingRemovePassengersSystem(class ViewedEntityContextT<class StrictEntityContext, struct VehicleComponent const, struct PendingRemovePassengersComponent const> &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PendingRemovePassengersComponent, struct RemovePassengersComponent>);

};