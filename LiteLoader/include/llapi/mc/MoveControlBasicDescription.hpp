/**
 * @file  MC/MoveControlBasicDescription.hpp
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
 * @brief MC class MoveControlBasicDescription.
 *
 */
class MoveControlBasicDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLBASICDESCRIPTION
public:
    class MoveControlBasicDescription& operator=(class MoveControlBasicDescription const &) = delete;
    MoveControlBasicDescription(class MoveControlBasicDescription const &) = delete;
    MoveControlBasicDescription() = delete;
#endif

public:
    /**
     * @hash   1004391306
     * @vftbl  0
     * @symbol ?getJsonName@MoveControlBasicDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~MoveControlBasicDescription();
    /**
     * @hash   -153609047
     * @vftbl  2
     * @symbol ?deserializeData@MoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -1252427981
     * @vftbl  3
     * @symbol ?serializeData@MoveControlDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;

};