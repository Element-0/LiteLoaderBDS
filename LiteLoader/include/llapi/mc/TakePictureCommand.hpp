/**
 * @file  MC/TakePictureCommand.hpp
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
 * @brief MC class TakePictureCommand.
 *
 */
class TakePictureCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAKEPICTURECOMMAND
public:
    class TakePictureCommand& operator=(class TakePictureCommand const &) = delete;
    TakePictureCommand(class TakePictureCommand const &) = delete;
    TakePictureCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TakePictureCommand();
    /**
     * @hash   -882236113
     * @vftbl  1
     * @symbol ?execute@TakePictureCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1193136644
     * @symbol ?setup@TakePictureCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};