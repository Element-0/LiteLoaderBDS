/**
 * @file  MC/LevelChunkTickingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelChunkTickingSystem.
 *
 */
class LevelChunkTickingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKTICKINGSYSTEM
public:
    class LevelChunkTickingSystem& operator=(class LevelChunkTickingSystem const &) = delete;
    LevelChunkTickingSystem(class LevelChunkTickingSystem const &) = delete;
    LevelChunkTickingSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LevelChunkTickingSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   237544443
     * @vftbl  2
     * @symbol ?tick@LevelChunkTickingSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @hash   393790594
     * @symbol ?_determineLevelChunksToTick@LevelChunkTickingSystem@@CAXAEBVActor@@AEAVBlockSource@@AEAVLoadedChunksComponent@@AEAV?$vector@V?$shared_ptr@VLevelChunk@@@std@@V?$allocator@V?$shared_ptr@VLevelChunk@@@std@@@2@@std@@3AEBUTick@@@Z
     */
    MCAPI static void _determineLevelChunksToTick(class Actor const &, class BlockSource &, class LoadedChunksComponent &, std::vector<class std::shared_ptr<class LevelChunk>> &, std::vector<class std::shared_ptr<class LevelChunk>> &, struct Tick const &);
    /**
     * @hash   327170018
     * @symbol ?_tickLevelChunksAroundActor@LevelChunkTickingSystem@@CAXAEAVActor@@AEAVBlockSource@@AEAVLoadedChunksComponent@@@Z
     */
    MCAPI static void _tickLevelChunksAroundActor(class Actor &, class BlockSource &, class LoadedChunksComponent &);
    /**
     * @hash   -2088653210
     * @symbol ?_tickLevelChunksAroundActorView@LevelChunkTickingSystem@@CAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorFlag@@@@VBlockSourceComponent@@VLoadedChunksComponent@@@@@Z
     */
    MCAPI static void _tickLevelChunksAroundActorView(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorFlag>, class BlockSourceComponent, class LoadedChunksComponent> &);

private:

};