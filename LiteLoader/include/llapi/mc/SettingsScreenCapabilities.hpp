/**
 * @file  MC/SettingsScreenCapabilities.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure SettingsScreenCapabilities.
 *
 */
struct SettingsScreenCapabilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETTINGSSCREENCAPABILITIES
public:
    struct SettingsScreenCapabilities& operator=(struct SettingsScreenCapabilities const &) = delete;
    SettingsScreenCapabilities() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SettingsScreenCapabilities();
    /**
     * @hash   -547106818
     * @vftbl  1
     * @symbol ?isOfType@?$TypedScreenCapabilities@USettingsScreenCapabilities@@@@UEBA_NV?$typeid_t@VIScreenCapabilities@@@@@Z
     */
    virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;
    /**
     * @hash   2115281391
     * @symbol ??0SettingsScreenCapabilities@@QEAA@AEBU0@@Z
     */
    MCAPI SettingsScreenCapabilities(struct SettingsScreenCapabilities const &);

};