/**
 * @file  MC/JsonSaver.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JsonSaver.
 *
 */
class JsonSaver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JSONSAVER
public:
    class JsonSaver& operator=(class JsonSaver const &) = delete;
    JsonSaver(class JsonSaver const &) = delete;
    JsonSaver() = delete;
#endif

public:
    /**
     * @hash   303409076
     * @symbol ?toString@JsonSaver@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string toString();

};