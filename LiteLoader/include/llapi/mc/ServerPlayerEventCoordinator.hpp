/**
 * @file  MC/ServerPlayerEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerPlayerEventCoordinator.
 *
 */
class ServerPlayerEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYEREVENTCOORDINATOR
public:
    class ServerPlayerEventCoordinator& operator=(class ServerPlayerEventCoordinator const &) = delete;
    ServerPlayerEventCoordinator(class ServerPlayerEventCoordinator const &) = delete;
    ServerPlayerEventCoordinator() = delete;
#endif

public:
    /**
     * @hash   2039013942
     * @symbol ?sendPlayerAuthInputApplied@ServerPlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
     */
    MCAPI void sendPlayerAuthInputApplied(class Player &);
    /**
     * @hash   -2081609480
     * @symbol ?sendPlayerAuthInputReceived@ServerPlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
     */
    MCAPI void sendPlayerAuthInputReceived(class Player &);
    /**
     * @hash   1538646537
     * @symbol ?sendPlayerMovementAnomaly@ServerPlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVVec3@@MM@Z
     */
    MCAPI void sendPlayerMovementAnomaly(class Player &, class Vec3 const &, float, float);
    /**
     * @hash   -1071482903
     * @symbol ?sendPlayerMovementCorrected@ServerPlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVVec3@@MM@Z
     */
    MCAPI void sendPlayerMovementCorrected(class Player &, class Vec3 const &, float, float);
    /**
     * @hash   973871424
     * @symbol ?sendPlayerOnGround@ServerPlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
     */
    MCAPI void sendPlayerOnGround(class Player &);

};