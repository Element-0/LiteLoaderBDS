/**
 * @file  MC/StrongholdStart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StrongholdStart.
 *
 */
class StrongholdStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRONGHOLDSTART
public:
    class StrongholdStart& operator=(class StrongholdStart const &) = delete;
    StrongholdStart(class StrongholdStart const &) = delete;
    StrongholdStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StrongholdStart();
    /**
     * @hash   -1271846754
     * @vftbl  2
     * @symbol ?isValid@StrongholdStart@@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   -106673894
     * @symbol ??0StrongholdStart@@QEAA@AEAVDimension@@AEAVRandom@@HH@Z
     */
    MCAPI StrongholdStart(class Dimension &, class Random &, int, int);

//private:
    /**
     * @hash   1920833526
     * @symbol ?_initializePieceSet@StrongholdStart@@AEAAXAEAVRandom@@@Z
     */
    MCAPI void _initializePieceSet(class Random &);

private:

};