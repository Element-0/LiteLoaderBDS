/**
 * @file  MC/ExperienceCostCommitObject.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExperienceCostCommitObject.
 *
 */
class ExperienceCostCommitObject {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCECOSTCOMMITOBJECT
public:
    class ExperienceCostCommitObject& operator=(class ExperienceCostCommitObject const &) = delete;
    ExperienceCostCommitObject(class ExperienceCostCommitObject const &) = delete;
    ExperienceCostCommitObject() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ExperienceCostCommitObject();
    /**
     * @hash   1571998290
     * @vftbl  1
     * @symbol ?append@ExperienceCostCommitObject@@UEAA_NPEAVContainerValidationCommitObject@@@Z
     */
    virtual bool append(class ContainerValidationCommitObject *);
    /**
     * @hash   -904990229
     * @vftbl  2
     * @symbol ?canCommit@ExperienceCostCommitObject@@UEBA_NAEBVContainerScreenContext@@@Z
     */
    virtual bool canCommit(class ContainerScreenContext const &) const;
    /**
     * @hash   -1581725506
     * @vftbl  3
     * @symbol ?commit@ExperienceCostCommitObject@@UEAAXAEBVContainerScreenContext@@@Z
     */
    virtual void commit(class ContainerScreenContext const &);
    /**
     * @hash   -1022542190
     * @symbol ??0ExperienceCostCommitObject@@QEAA@H@Z
     */
    MCAPI ExperienceCostCommitObject(int);

};