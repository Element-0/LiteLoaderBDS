/**
 * @file  MC/EncryptedProxyEnv.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TransactionalWorldBlockTarget.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EncryptedProxyEnv.
 *
 */
class EncryptedProxyEnv : public TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCRYPTEDPROXYENV
public:
    class EncryptedProxyEnv& operator=(class EncryptedProxyEnv const &) = delete;
    EncryptedProxyEnv(class EncryptedProxyEnv const &) = delete;
    EncryptedProxyEnv() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EncryptedProxyEnv();
    /**
     * @hash   640509247
     * @vftbl  1
     * @symbol ?NewSequentialFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
     */
    virtual class leveldb::Status NewSequentialFile(std::string const &, class leveldb::SequentialFile **);
    /**
     * @hash   -1805488033
     * @vftbl  2
     * @symbol ?NewRandomAccessFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
     */
    virtual class leveldb::Status NewRandomAccessFile(std::string const &, class leveldb::RandomAccessFile **);
    /**
     * @hash   -1738574255
     * @vftbl  3
     * @symbol ?NewWritableFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
     */
    virtual class leveldb::Status NewWritableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @hash   -239819879
     * @vftbl  7
     * @symbol ?DeleteFileA@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual class leveldb::Status DeleteFileA(std::string const &);
    /**
     * @hash   -420383021
     * @vftbl  11
     * @symbol ?RenameFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    virtual class leveldb::Status RenameFile(std::string const &, std::string const &);
    /**
     * @hash   -926179962
     * @symbol ??0EncryptedProxyEnv@@QEAA@PEAVEnv@leveldb@@AEBVContentIdentity@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EncryptedProxyReadMode@@@Z
     */
    MCAPI EncryptedProxyEnv(class leveldb::Env *, class ContentIdentity const &, std::string const &, enum EncryptedProxyReadMode);

};