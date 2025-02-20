/**
 * @file  MC/BlockMapColorDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockMapColorDescription.
 *
 */
struct BlockMapColorDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMAPCOLORDESCRIPTION
public:
    struct BlockMapColorDescription& operator=(struct BlockMapColorDescription const &) = delete;
    BlockMapColorDescription(struct BlockMapColorDescription const &) = delete;
    BlockMapColorDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockMapColorDescription();
    /**
     * @hash   -1048535119
     * @vftbl  1
     * @symbol ?getName@BlockMapColorDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -1918643789
     * @vftbl  2
     * @symbol ?initializeComponent@BlockMapColorDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @hash   408125335
     * @symbol ?NameID@BlockMapColorDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -727995709
     * @symbol ?bindType@BlockMapColorDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1089411646
     * @symbol ?registerVersionUpgrades@BlockMapColorDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};