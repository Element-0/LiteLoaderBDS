/**
 * @file  MC/FlowerPotBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlowerPotBlock.
 *
 */
class FlowerPotBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOWERPOTBLOCK
public:
    class FlowerPotBlock& operator=(class FlowerPotBlock const &) = delete;
    FlowerPotBlock(class FlowerPotBlock const &) = delete;
    FlowerPotBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FlowerPotBlock();
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   1617120793
     * @vftbl  55
     * @symbol ?isValidAuxValue@FlowerPotBlock@@UEBA_NH@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   -1889588283
     * @vftbl  62
     * @symbol ?canContainLiquid@FlowerPotBlock@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   1513180718
     * @vftbl  90
     * @symbol ?mayPlace@FlowerPotBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   501494381
     * @vftbl  91
     * @symbol ?mayPlace@FlowerPotBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1455411945
     * @vftbl  97
     * @symbol ?playerWillDestroy@FlowerPotBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   397549813
     * @vftbl  99
     * @symbol ?neighborChanged@FlowerPotBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   633495537
     * @vftbl  102
     * @symbol ?getResourceItem@FlowerPotBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -1773696042
     * @vftbl  103
     * @symbol ?asItemInstance@FlowerPotBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl  124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @hash   -1244879924
     * @vftbl  165
     * @symbol ?onRemove@FlowerPotBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   -1525919879
     * @vftbl  174
     * @symbol ?tick@FlowerPotBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   880553400
     * @vftbl  179
     * @symbol ?use@FlowerPotBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   1346800173
     * @vftbl  180
     * @symbol ?canSurvive@FlowerPotBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLOWERPOTBLOCK
    /**
     * @hash   -1981375110
     * @symbol ?isInteractiveBlock@FlowerPotBlock@@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
    /**
     * @hash   -1673033012
     * @symbol ?waterSpreadCausesSpawn@FlowerPotBlock@@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @hash   -1429801583
     * @symbol ??0FlowerPotBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI FlowerPotBlock(std::string const &, int);
    /**
     * @hash   1487164535
     * @symbol ?getFlowerPotEntity@FlowerPotBlock@@QEBAPEAVFlowerPotBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI class FlowerPotBlockActor * getFlowerPotEntity(class BlockSource &, class BlockPos const &) const;

//private:
    /**
     * @hash   -735863377
     * @symbol ?_tryPlaceFlower@FlowerPotBlock@@AEBA_NAEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI bool _tryPlaceFlower(class Player &, class BlockPos const &) const;
    /**
     * @hash   1578717975
     * @symbol ?_tryTakeFlower@FlowerPotBlock@@AEBA_NAEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI bool _tryTakeFlower(class Player &, class BlockPos const &) const;
    /**
     * @hash   -2130035976
     * @symbol ?_updateFlowerPotEntity@FlowerPotBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVFlowerPotBlockActor@@PEBVBlock@@AEAVActor@@@Z
     */
    MCAPI void _updateFlowerPotEntity(class BlockSource &, class BlockPos const &, class FlowerPotBlockActor *, class Block const *, class Actor &) const;
    /**
     * @hash   -545708353
     * @symbol ?isSupportedBlock@FlowerPotBlock@@AEBA_NAEBVBlock@@@Z
     */
    MCAPI bool isSupportedBlock(class Block const &) const;

private:

};