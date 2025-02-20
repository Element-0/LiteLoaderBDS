/**
 * @file  MC/JigsawEditorData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JigsawEditorData.
 *
 */
class JigsawEditorData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWEDITORDATA
public:
    class JigsawEditorData& operator=(class JigsawEditorData const &) = delete;
    JigsawEditorData(class JigsawEditorData const &) = delete;
#endif

public:
    /**
     * @hash   -446001020
     * @symbol ??0JigsawEditorData@@QEAA@XZ
     */
    MCAPI JigsawEditorData();
    /**
     * @hash   1522946338
     * @symbol ??0JigsawEditorData@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000W4JigsawJointType@@@Z
     */
    MCAPI JigsawEditorData(std::string const &, std::string const &, std::string const &, std::string const &, enum JigsawJointType);
    /**
     * @hash   2140627929
     * @symbol ??0JigsawEditorData@@QEAA@$$QEAV0@@Z
     */
    MCAPI JigsawEditorData(class JigsawEditorData &&);
    /**
     * @hash   -1971718724
     * @symbol ?getFinalBlock@JigsawEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getFinalBlock() const;
    /**
     * @hash   664262234
     * @symbol ?getJointType@JigsawEditorData@@QEBAAEBW4JigsawJointType@@XZ
     */
    MCAPI enum JigsawJointType const & getJointType() const;
    /**
     * @hash   -1138604100
     * @symbol ?getName@JigsawEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   972308380
     * @symbol ?getTarget@JigsawEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getTarget() const;
    /**
     * @hash   855281836
     * @symbol ?getTargetPool@JigsawEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getTargetPool() const;
    /**
     * @hash   1337435845
     * @symbol ?load@JigsawEditorData@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -208544538
     * @symbol ?save@JigsawEditorData@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @hash   262814862
     * @symbol ?setFinalBlock@JigsawEditorData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setFinalBlock(std::string const &);
    /**
     * @hash   -696188774
     * @symbol ?setJointType@JigsawEditorData@@QEAAXAEBW4JigsawJointType@@@Z
     */
    MCAPI void setJointType(enum JigsawJointType const &);
    /**
     * @hash   1377501486
     * @symbol ?setName@JigsawEditorData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setName(std::string const &);
    /**
     * @hash   881184286
     * @symbol ?setTarget@JigsawEditorData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setTarget(std::string const &);
    /**
     * @hash   -91745986
     * @symbol ?setTargetPool@JigsawEditorData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setTargetPool(std::string const &);
    /**
     * @hash   1258346178
     * @symbol ??1JigsawEditorData@@QEAA@XZ
     */
    MCAPI ~JigsawEditorData();

//private:

private:
    /**
     * @hash   1684829556
     * @symbol ?JOINT_TYPE_TO_NAME@JigsawEditorData@@0V?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@B
     */
    MCAPI static class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const JOINT_TYPE_TO_NAME;

};