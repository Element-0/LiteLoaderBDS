/**
 * @file  MC/SHStairsDown.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SHStairsDown.
 *
 */
class SHStairsDown : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHSTAIRSDOWN
public:
    class SHStairsDown& operator=(class SHStairsDown const &) = delete;
    SHStairsDown(class SHStairsDown const &) = delete;
    SHStairsDown() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SHStairsDown();
    /**
     * @hash   741586346
     * @vftbl  2
     * @symbol ?getType@SHStairsDown@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   653028390
     * @vftbl  3
     * @symbol ?addChildren@SHStairsDown@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @hash   -1563146834
     * @vftbl  4
     * @symbol ?postProcess@SHStairsDown@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};