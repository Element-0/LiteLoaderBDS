/**
 * @file  MC/SetActorDataPacket.hpp
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
 * @brief MC class SetActorDataPacket.
 *
 */
class SetActorDataPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETACTORDATAPACKET
public:
    class SetActorDataPacket& operator=(class SetActorDataPacket const &) = delete;
    SetActorDataPacket(class SetActorDataPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SetActorDataPacket();
    /**
     * @hash   -1925810055
     * @vftbl  1
     * @symbol ?getId@SetActorDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -485906650
     * @vftbl  2
     * @symbol ?getName@SetActorDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -807582335
     * @vftbl  3
     * @symbol ?write@SetActorDataPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   881386897
     * @vftbl  6
     * @symbol ?_read@SetActorDataPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   227384593
     * @symbol ??0SetActorDataPacket@@QEAA@XZ
     */
    MCAPI SetActorDataPacket();
    /**
     * @symbol ??0SetActorDataPacket@@QEAA@VActorRuntimeID@@AEAVSynchedActorDataEntityWrapper@@_N@Z
     */
    MCAPI SetActorDataPacket(class ActorRuntimeID, class SynchedActorDataEntityWrapper &, bool);

};