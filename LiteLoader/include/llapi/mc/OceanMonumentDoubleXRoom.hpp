/**
 * @file  MC/OceanMonumentDoubleXRoom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentDoubleXRoom.
 *
 */
class OceanMonumentDoubleXRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTDOUBLEXROOM
public:
    class OceanMonumentDoubleXRoom& operator=(class OceanMonumentDoubleXRoom const &) = delete;
    OceanMonumentDoubleXRoom(class OceanMonumentDoubleXRoom const &) = delete;
    OceanMonumentDoubleXRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OceanMonumentDoubleXRoom();
    /**
     * @hash   -1393881714
     * @vftbl  2
     * @symbol ?getType@OceanMonumentDoubleXRoom@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   -1924721430
     * @vftbl  4
     * @symbol ?postProcess@OceanMonumentDoubleXRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};