/**
 * @file  MC/FilterTestHourlyClock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FilterTestHourlyClock.
 *
 */
class FilterTestHourlyClock : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTHOURLYCLOCK
public:
    class FilterTestHourlyClock& operator=(class FilterTestHourlyClock const &) = delete;
    FilterTestHourlyClock(class FilterTestHourlyClock const &) = delete;
    FilterTestHourlyClock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FilterTestHourlyClock();
    /**
     * @hash   1114471655
     * @vftbl  1
     * @symbol ?setup@FilterTestHourlyClock@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @hash   -1424939915
     * @vftbl  2
     * @symbol ?evaluate@FilterTestHourlyClock@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   -1111354323
     * @vftbl  4
     * @symbol ?getName@FilterTestHourlyClock@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};