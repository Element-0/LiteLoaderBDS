/**
 * @file  MC/ActorDefinitionGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinitionGroup.
 *
 */
class ActorDefinitionGroup {

#define AFTER_EXTRA
// Add Member There
public:
struct LoadActorResult {
    LoadActorResult() = delete;
    LoadActorResult(LoadActorResult const&) = delete;
    LoadActorResult(LoadActorResult const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONGROUP
public:
    class ActorDefinitionGroup& operator=(class ActorDefinitionGroup const &) = delete;
    ActorDefinitionGroup(class ActorDefinitionGroup const &) = delete;
    ActorDefinitionGroup() = delete;
#endif

public:
    /**
     * @hash   17819199
     * @symbol ??0ActorDefinitionGroup@@QEAA@AEAVLevel@@AEAVResourcePackManager@@AEAVIMinecraftEventing@@AEBVExperiments@@@Z
     */
    MCAPI ActorDefinitionGroup(class Level &, class ResourcePackManager &, class IMinecraftEventing &, class Experiments const &);
    /**
     * @hash   -158580133
     * @symbol ?buildActorEventList@ActorDefinitionGroup@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> buildActorEventList() const;
    /**
     * @hash   -1325939665
     * @symbol ?getComponentFactory@ActorDefinitionGroup@@QEAAPEAVActorComponentFactory@@XZ
     */
    MCAPI class ActorComponentFactory * getComponentFactory();
    /**
     * @hash   359171695
     * @symbol ?setComponentFactory@ActorDefinitionGroup@@QEAAXPEAVActorComponentFactory@@@Z
     */
    MCAPI void setComponentFactory(class ActorComponentFactory *);
    /**
     * @hash   88745963
     * @symbol ?tryGetDefinition@ActorDefinitionGroup@@QEAA?AVActorDefinitionPtr@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class ActorDefinitionPtr tryGetDefinition(std::string const &);
    /**
     * @hash   -2075066197
     * @symbol ?tryGetDefinitionGroup@ActorDefinitionGroup@@QEAA?AVActorDefinitionPtr@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI class ActorDefinitionPtr tryGetDefinitionGroup(std::string const &, std::string const &);
    /**
     * @hash   1660664847
     * @symbol ?loadActorDefinitionIdentifier@ActorDefinitionGroup@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool loadActorDefinitionIdentifier(class Json::Value const &, class SemVersion const &, std::string &);
    /**
     * @hash   1705892569
     * @symbol ?loadActorDefinitionRuntimeIdentifier@ActorDefinitionGroup@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool loadActorDefinitionRuntimeIdentifier(class Json::Value const &, class SemVersion const &, std::string &);
    /**
     * @hash   968431217
     * @symbol ?tryReadEntityResourceFile@ActorDefinitionGroup@@SA_NAEAVPackInstance@@AEBVPath@Core@@AEAVValue@Json@@@Z
     */
    MCAPI static bool tryReadEntityResourceFile(class PackInstance &, class Core::Path const &, class Json::Value &);

//protected:
    /**
     * @hash   -732640951
     * @symbol ?_addRef@ActorDefinitionGroup@@IEAAXAEAVActorDefinitionPtr@@@Z
     */
    MCAPI void _addRef(class ActorDefinitionPtr &);
    /**
     * @hash   580043898
     * @symbol ?_removeRef@ActorDefinitionGroup@@IEAAXAEAVActorDefinitionPtr@@@Z
     */
    MCAPI void _removeRef(class ActorDefinitionPtr &);

//private:
    /**
     * @hash   -2122246539
     * @symbol ?_getResources@ActorDefinitionGroup@@AEAAXAEAVLevel@@@Z
     */
    MCAPI void _getResources(class Level &);
    /**
     * @hash   -1714485030
     * @symbol ?_loadActorDefinition@ActorDefinitionGroup@@AEAA?AULoadActorResult@1@AEAVLevel@@AEBVSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBW4CurrentCmdVersion@@AEAVValue@Json@@AEAV?$unordered_set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@W4LogArea@@@Z
     */
    MCAPI struct ActorDefinitionGroup::LoadActorResult _loadActorDefinition(class Level &, class SemVersion const &, std::string const &, enum CurrentCmdVersion const &, class Json::Value &, class std::unordered_set<std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<std::string>> &, enum LogArea);
    /**
     * @hash   -43060394
     * @symbol ?_loadDefinitionFromJSON@ActorDefinitionGroup@@AEAA_NAEBVSemVersion@@0AEBW4CurrentCmdVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVValue@Json@@2AEAVLevel@@W4LogArea@@@Z
     */
    MCAPI bool _loadDefinitionFromJSON(class SemVersion const &, class SemVersion const &, enum CurrentCmdVersion const &, std::string const &, class Json::Value &, std::string const &, class Level &, enum LogArea);
    /**
     * @hash   1595530762
     * @symbol ?_loadTemplates@ActorDefinitionGroup@@AEAAXAEAVLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDeserializeDataParams@@@Z
     */
    MCAPI void _loadTemplates(class Level &, std::string const &, struct DeserializeDataParams);
    /**
     * @hash   479057051
     * @symbol ?_setupCommonResourceDefinitionMap@ActorDefinitionGroup@@AEAAXAEAVActorDefinition@@AEAVLevel@@@Z
     */
    MCAPI void _setupCommonResourceDefinitionMap(class ActorDefinition &, class Level &);
    /**
     * @symbol ?_setupPropertyGroups@ActorDefinitionGroup@@AEAAXAEAVLevel@@@Z
     */
    MCAPI void _setupPropertyGroups(class Level &);

protected:

private:

};