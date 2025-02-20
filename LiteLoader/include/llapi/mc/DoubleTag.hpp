/**
 * @file  MC/DoubleTag.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DoubleTag.
 *
 */
class DoubleTag : public Tag {

#define AFTER_EXTRA
// Add Member There
double val;

public:
    LIAPI double& value();
    LIAPI DoubleTag& operator=(double val);
    LIAPI static std::unique_ptr<DoubleTag> create(double val = 0.0);
    LIAPI bool set(double val);
    LIAPI double get();
    LIAPI operator double() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOUBLETAG
public:
    class DoubleTag& operator=(class DoubleTag const &) = delete;
    DoubleTag(class DoubleTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DoubleTag();
    /**
     * @hash   1740588794
     * @vftbl  2
     * @symbol ?write@DoubleTag@@UEBAXAEAVIDataOutput@@@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @hash   5418217
     * @vftbl  3
     * @symbol ?load@DoubleTag@@UEAAXAEAVIDataInput@@@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @hash   -1428982499
     * @vftbl  4
     * @symbol ?toString@DoubleTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   -1728676990
     * @vftbl  5
     * @symbol ?getId@DoubleTag@@UEBA?AW4Type@Tag@@XZ
     */
    virtual enum Tag::Type getId() const;
    /**
     * @hash   -192825313
     * @vftbl  6
     * @symbol ?equals@DoubleTag@@UEBA_NAEBVTag@@@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @hash   1130910511
     * @vftbl  9
     * @symbol ?copy@DoubleTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @hash   1774469621
     * @vftbl  10
     * @symbol ?hash@DoubleTag@@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @hash   451391733
     * @symbol ??0DoubleTag@@QEAA@XZ
     */
    MCAPI DoubleTag();

};