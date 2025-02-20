/**
 * @file  MC/CodeBuilderSourcePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CodeBuilderSourcePacket.
 *
 */
class CodeBuilderSourcePacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERSOURCEPACKET
public:
    class CodeBuilderSourcePacket& operator=(class CodeBuilderSourcePacket const &) = delete;
    CodeBuilderSourcePacket(class CodeBuilderSourcePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CodeBuilderSourcePacket();
    /**
     * @hash   519730445
     * @vftbl  1
     * @symbol ?getId@CodeBuilderSourcePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   100028346
     * @vftbl  2
     * @symbol ?getName@CodeBuilderSourcePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   252933869
     * @vftbl  3
     * @symbol ?write@CodeBuilderSourcePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1793659075
     * @vftbl  6
     * @symbol ?_read@CodeBuilderSourcePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   686388669
     * @symbol ??0CodeBuilderSourcePacket@@QEAA@XZ
     */
    MCAPI CodeBuilderSourcePacket();

};