/**
 * @file  MC/IMinecraftEventing.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class IMinecraftEventing.
 *
 */
class IMinecraftEventing {

#define AFTER_EXTRA
public:
    enum class StructureBlockActionType;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMINECRAFTEVENTING
public:
    class IMinecraftEventing& operator=(class IMinecraftEventing const &) = delete;
    IMinecraftEventing(class IMinecraftEventing const &) = delete;
    IMinecraftEventing() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IMINECRAFTEVENTING
    /**
     * @hash   1016828223
     * @symbol ?updatePlayerUndergroundStatus@IMinecraftEventing@@UEAAXPEAVPlayer@@_N@Z
     */
    MCVAPI void updatePlayerUndergroundStatus(class Player *, bool);
    /**
     * @hash   629902276
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IMinecraftEventing();
#endif

};