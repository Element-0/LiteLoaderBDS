/**
 * @file  MC/TeleportDescription.hpp
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
 * @brief MC class TeleportDescription.
 *
 */
class TeleportDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTDESCRIPTION
public:
    class TeleportDescription& operator=(class TeleportDescription const &) = delete;
    TeleportDescription(class TeleportDescription const &) = delete;
#endif

public:
    /**
     * @hash   -1339446541
     * @vftbl  0
     * @symbol ?getJsonName@TeleportDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~TeleportDescription();
    /**
     * @hash   1421233136
     * @vftbl  2
     * @symbol ?deserializeData@TeleportDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   1535580586
     * @vftbl  3
     * @symbol ?serializeData@TeleportDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @hash   -1690397907
     * @symbol ??0TeleportDescription@@QEAA@XZ
     */
    MCAPI TeleportDescription();

};