/**
 * @file  MC/ScriptPackConfigurationManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptPackConfigurationManager.
 *
 */
class ScriptPackConfigurationManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPACKCONFIGURATIONMANAGER
public:
    class ScriptPackConfigurationManager& operator=(class ScriptPackConfigurationManager const &) = delete;
#endif

public:
    /**
     * @hash   508535959
     * @symbol ??0ScriptPackConfigurationManager@@QEAA@XZ
     */
    MCAPI ScriptPackConfigurationManager();
    /**
     * @hash   1648978353
     * @symbol ??0ScriptPackConfigurationManager@@QEAA@AEBV0@@Z
     */
    MCAPI ScriptPackConfigurationManager(class ScriptPackConfigurationManager const &);
    /**
     * @hash   -1564604751
     * @symbol ?getPackConfiguration@ScriptPackConfigurationManager@@QEBAAEBVScriptPackConfiguration@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class ScriptPackConfiguration const & getPackConfiguration(std::string const &) const;
    /**
     * @hash   -1356569340
     * @symbol ?loadPackConfigs@ScriptPackConfigurationManager@@QEAAXAEBVPath@Core@@@Z
     */
    MCAPI void loadPackConfigs(class Core::Path const &);

//private:

private:
    /**
     * @hash   1478191083
     * @symbol ?sDefaultConfigurationName@ScriptPackConfigurationManager@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const sDefaultConfigurationName;

};