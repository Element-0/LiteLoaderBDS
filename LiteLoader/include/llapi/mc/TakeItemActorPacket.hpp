/**
 * @file  MC/TakeItemActorPacket.hpp
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
 * @brief MC class TakeItemActorPacket.
 *
 */
class TakeItemActorPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAKEITEMACTORPACKET
public:
    class TakeItemActorPacket& operator=(class TakeItemActorPacket const &) = delete;
    TakeItemActorPacket(class TakeItemActorPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TakeItemActorPacket();
    /**
     * @hash   -1677366405
     * @vftbl  1
     * @symbol ?getId@TakeItemActorPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1255602648
     * @vftbl  2
     * @symbol ?getName@TakeItemActorPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   2033901439
     * @vftbl  3
     * @symbol ?write@TakeItemActorPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1228765343
     * @vftbl  6
     * @symbol ?_read@TakeItemActorPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1412928977
     * @symbol ??0TakeItemActorPacket@@QEAA@XZ
     */
    MCAPI TakeItemActorPacket();
    /**
     * @hash   -76580997
     * @symbol ??0TakeItemActorPacket@@QEAA@VActorRuntimeID@@0@Z
     */
    MCAPI TakeItemActorPacket(class ActorRuntimeID, class ActorRuntimeID);

};