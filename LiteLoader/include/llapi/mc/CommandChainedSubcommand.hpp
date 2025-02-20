/**
 * @file  MC/CommandChainedSubcommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandChainedSubcommand.
 *
 */
class CommandChainedSubcommand {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDCHAINEDSUBCOMMAND
public:
    class CommandChainedSubcommand& operator=(class CommandChainedSubcommand const &) = delete;
    CommandChainedSubcommand(class CommandChainedSubcommand const &) = delete;
    CommandChainedSubcommand() = delete;
#endif

public:
    /**
     * @hash   -1370585619
     * @symbol ?getCommand@CommandChainedSubcommand@@QEBAPEAVCommand@@XZ
     */
    MCAPI class Command * getCommand() const;
    /**
     * @hash   -1758368798
     * @symbol ?setCommand@CommandChainedSubcommand@@QEAAXV?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@@Z
     */
    MCAPI void setCommand(std::unique_ptr<class Command>);

};