/**
 * @file  MC/GroundedConstraint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GroundedConstraint.
 *
 */
class GroundedConstraint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUNDEDCONSTRAINT
public:
    class GroundedConstraint& operator=(class GroundedConstraint const &) = delete;
    GroundedConstraint(class GroundedConstraint const &) = delete;
    GroundedConstraint() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~GroundedConstraint();
    /**
     * @hash   -439737780
     * @vftbl  1
     * @symbol ?isSatisfied@GroundedConstraint@@UEBA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBW4Rotation@@@Z
     */
    virtual bool isSatisfied(class IBlockWorldGenAPI const &, class BlockPos const &, enum Rotation const &) const;
    /**
     * @hash   231295024
     * @symbol ??0GroundedConstraint@@QEAA@AEAVStructureTemplate@@@Z
     */
    MCAPI GroundedConstraint(class StructureTemplate &);

};