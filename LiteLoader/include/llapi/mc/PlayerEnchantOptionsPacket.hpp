/**
 * @file  MC/PlayerEnchantOptionsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerEnchantOptionsPacket.
 *
 */
class PlayerEnchantOptionsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERENCHANTOPTIONSPACKET
public:
    class PlayerEnchantOptionsPacket& operator=(class PlayerEnchantOptionsPacket const &) = delete;
    PlayerEnchantOptionsPacket(class PlayerEnchantOptionsPacket const &) = delete;
    PlayerEnchantOptionsPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PlayerEnchantOptionsPacket();
    /**
     * @hash   234378624
     * @vftbl  1
     * @symbol ?getId@PlayerEnchantOptionsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1549980781
     * @vftbl  2
     * @symbol ?getName@PlayerEnchantOptionsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   436716170
     * @vftbl  3
     * @symbol ?write@PlayerEnchantOptionsPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -200652518
     * @vftbl  6
     * @symbol ?_read@PlayerEnchantOptionsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);

};