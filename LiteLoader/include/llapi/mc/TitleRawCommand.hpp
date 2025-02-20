/**
 * @file  MC/TitleRawCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SetTitlePacket.hpp"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TitleRawCommand.
 *
 */
class TitleRawCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TITLERAWCOMMAND
public:
    class TitleRawCommand& operator=(class TitleRawCommand const &) = delete;
    TitleRawCommand(class TitleRawCommand const &) = delete;
    TitleRawCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TitleRawCommand();
    /**
     * @hash   910027256
     * @vftbl  1
     * @symbol ?execute@TitleRawCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1197599360
     * @symbol ?setup@TitleRawCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   -301572891
     * @symbol ?_sendTitlePacketTextObject@TitleRawCommand@@AEBA_NW4TitleType@SetTitlePacket@@AEBVCommandOrigin@@AEAVCommandOutput@@AEBV?$CommandSelectorResults@VPlayer@@@@@Z
     */
    MCAPI bool _sendTitlePacketTextObject(enum SetTitlePacket::TitleType, class CommandOrigin const &, class CommandOutput &, class CommandSelectorResults<class Player> const &) const;

private:

};