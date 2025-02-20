/**
 * @file  MC/RopeAABB.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RopeAABB.
 *
 */
class RopeAABB {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROPEAABB
public:
    class RopeAABB& operator=(class RopeAABB const &) = delete;
    RopeAABB(class RopeAABB const &) = delete;
    RopeAABB() = delete;
#endif

public:
    /**
     * @hash   102253645
     * @symbol ?getContactPoint@RopeAABB@@QEBA_NAEBVVec3@@MAEAUAABBContactPoint@@@Z
     */
    MCAPI bool getContactPoint(class Vec3 const &, float, struct AABBContactPoint &) const;

};