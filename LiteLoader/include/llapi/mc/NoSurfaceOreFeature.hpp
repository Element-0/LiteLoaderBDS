/**
 * @file  MC/NoSurfaceOreFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NoSurfaceOreFeature.
 *
 */
class NoSurfaceOreFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NOSURFACEOREFEATURE
public:
    class NoSurfaceOreFeature& operator=(class NoSurfaceOreFeature const &) = delete;
    NoSurfaceOreFeature(class NoSurfaceOreFeature const &) = delete;
    NoSurfaceOreFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NoSurfaceOreFeature();
    /**
     * @hash   826975933
     * @vftbl  1
     * @symbol ?place@NoSurfaceOreFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @hash   -2144294546
     * @symbol ??0NoSurfaceOreFeature@@QEAA@UIntRange@@AEBVBlockDescriptor@@11@Z
     */
    MCAPI NoSurfaceOreFeature(struct IntRange, class BlockDescriptor const &, class BlockDescriptor const &, class BlockDescriptor const &);

};