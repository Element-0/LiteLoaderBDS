/**
 * @file  MC/ActorAnimationEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorAnimationEvent.
 *
 */
class ActorAnimationEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONEVENT
public:
    class ActorAnimationEvent& operator=(class ActorAnimationEvent const &) = delete;
    ActorAnimationEvent(class ActorAnimationEvent const &) = delete;
    ActorAnimationEvent() = delete;
#endif

public:
    /**
     * @hash   2124654053
     * @symbol ??0ActorAnimationEvent@@QEAA@MAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CurrentCmdVersion@@W4MolangVersion@@@Z
     */
    MCAPI ActorAnimationEvent(float, std::string const &, enum CurrentCmdVersion, enum MolangVersion);
    /**
     * @hash   898616975
     * @symbol ??0ActorAnimationEvent@@QEAA@$$QEAV0@@Z
     */
    MCAPI ActorAnimationEvent(class ActorAnimationEvent &&);
    /**
     * @hash   -482839156
     * @symbol ?fire@ActorAnimationEvent@@QEBAXAEAVRenderParams@@PEAVActor@@@Z
     */
    MCAPI void fire(class RenderParams &, class Actor *) const;
    /**
     * @hash   -779729257
     * @symbol ??1ActorAnimationEvent@@QEAA@XZ
     */
    MCAPI ~ActorAnimationEvent();

};