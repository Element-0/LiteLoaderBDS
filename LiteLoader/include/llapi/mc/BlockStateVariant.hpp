/**
 * @file  MC/BlockStateVariant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockStateVariant.
 *
 */
class BlockStateVariant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEVARIANT
public:
    class BlockStateVariant& operator=(class BlockStateVariant const &) = delete;
    BlockStateVariant(class BlockStateVariant const &) = delete;
    BlockStateVariant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockStateVariant();
    /**
     * @hash   -1904911076
     * @vftbl  1
     * @symbol ?toNBT@BlockStateVariant@@UEBAXAEAVCompoundTag@@H@Z
     */
    virtual void toNBT(class CompoundTag &, int) const;
    /**
     * @hash   -1063337888
     * @vftbl  2
     * @symbol ?fromNBT@BlockStateVariant@@UEBA_NAEBVCompoundTag@@AEAH@Z
     */
    virtual bool fromNBT(class CompoundTag const &, int &) const;

};