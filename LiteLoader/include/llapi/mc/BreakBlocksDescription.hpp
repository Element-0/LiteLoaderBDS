/**
 * @file  MC/BreakBlocksDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreakBlocksDescription.
 *
 */
class BreakBlocksDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKSDESCRIPTION
public:
    class BreakBlocksDescription& operator=(class BreakBlocksDescription const &) = delete;
    BreakBlocksDescription(class BreakBlocksDescription const &) = delete;
#endif

public:
    /**
     * @hash   679220317
     * @vftbl  0
     * @symbol ?getJsonName@BreakBlocksDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~BreakBlocksDescription();
    /**
     * @hash   -411136282
     * @vftbl  2
     * @symbol ?deserializeData@BreakBlocksDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -998732192
     * @vftbl  3
     * @symbol ?serializeData@BreakBlocksDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @hash   449804179
     * @symbol ??0BreakBlocksDescription@@QEAA@XZ
     */
    MCAPI BreakBlocksDescription();

};