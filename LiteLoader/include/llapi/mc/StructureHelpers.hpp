/**
 * @file  MC/StructureHelpers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureHelpers.
 *
 */
class StructureHelpers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREHELPERS
public:
    class StructureHelpers& operator=(class StructureHelpers const &) = delete;
    StructureHelpers(class StructureHelpers const &) = delete;
    StructureHelpers() = delete;
#endif

public:
    /**
     * @hash   -1726760790
     * @symbol ?createChest@StructureHelpers@@SA_NAEAVStructurePiece@@AEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@HHHEAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool createChest(class StructurePiece &, class BlockSource &, class BoundingBox const &, class Random &, int, int, int, unsigned char, std::string const &);
    /**
     * @hash   1344489651
     * @symbol ?createDispenser@StructureHelpers@@SA_NAEAVStructurePiece@@AEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@HHHHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool createDispenser(class StructurePiece &, class BlockSource &, class BoundingBox const &, class Random &, int, int, int, int, std::string const &);
    /**
     * @hash   215972577
     * @symbol ?createMinecartChest@StructureHelpers@@SA_NAEAVStructurePiece@@AEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@HHHHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool createMinecartChest(class StructurePiece &, class BlockSource &, class BoundingBox const &, class Random &, int, int, int, int, std::string const &);
    /**
     * @hash   -1239649348
     * @symbol ?fillColumnDown@StructureHelpers@@SAXAEAVStructurePiece@@AEAVBlockSource@@AEBVBlock@@HHHAEBVBoundingBox@@@Z
     */
    MCAPI static void fillColumnDown(class StructurePiece &, class BlockSource &, class Block const &, int, int, int, class BoundingBox const &);
    /**
     * @hash   -434973585
     * @symbol ?getDirectionRotation@StructureHelpers@@SAHHG@Z
     */
    MCAPI static int getDirectionRotation(int, unsigned short);
    /**
     * @hash   1048220509
     * @symbol ?getDoorRotation@StructureHelpers@@SAHHG@Z
     */
    MCAPI static int getDoorRotation(int, unsigned short);
    /**
     * @hash   1630461999
     * @symbol ?getFacingDirectionRotation@StructureHelpers@@SAHHG@Z
     */
    MCAPI static int getFacingDirectionRotation(int, unsigned short);
    /**
     * @hash   -1396910419
     * @symbol ?getRailRotation@StructureHelpers@@SAHHG@Z
     */
    MCAPI static int getRailRotation(int, unsigned short);
    /**
     * @hash   -1989403025
     * @symbol ?getTorchRotation@StructureHelpers@@SAHHG@Z
     */
    MCAPI static int getTorchRotation(int, unsigned short);
    /**
     * @hash   508149871
     * @symbol ?getWeirdoDirectionRotation@StructureHelpers@@SAHHG@Z
     */
    MCAPI static int getWeirdoDirectionRotation(int, unsigned short);

};