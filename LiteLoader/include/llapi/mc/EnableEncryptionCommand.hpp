/**
 * @file  MC/EnableEncryptionCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnableEncryptionCommand.
 *
 */
class EnableEncryptionCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENABLEENCRYPTIONCOMMAND
public:
    class EnableEncryptionCommand& operator=(class EnableEncryptionCommand const &) = delete;
    EnableEncryptionCommand(class EnableEncryptionCommand const &) = delete;
    EnableEncryptionCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EnableEncryptionCommand();
    /**
     * @hash   291105198
     * @vftbl  1
     * @symbol ?execute@EnableEncryptionCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1292624453
     * @symbol ?setup@EnableEncryptionCommand@@SAXAEAVCommandRegistry@@AEAVIMinecraftApp@@@Z
     */
    MCAPI static void setup(class CommandRegistry &, class IMinecraftApp &);

//private:

private:
    /**
     * @hash   396235626
     * @symbol ?mApp@EnableEncryptionCommand@@0PEAVIMinecraftApp@@EA
     */
    MCAPI static class IMinecraftApp * mApp;

};