#pragma once

#ifndef LAZY_IMPORTER_CASE_INSENSITIVE
    #define LAZY_IMPORTER_CASE_INSENSITIVE
#endif

#include "dependencies/lazy_importer.hpp"

#ifndef LI_FN__
    #define LI_FN__(name) \
        ::li::detail::lazy_function<LAZY_IMPORTER_KHASH(#name), decltype(&name)>
#endif

#ifndef LI_FN_
    #define LI_FN_(name) LI_FN__(name)
#endif

#ifndef LI_MODULE_
    #define LI_MODULE_(name) \
        ::li::detail::lazy_module<LAZY_IMPORTER_KHASH(name)>
#endif

#ifndef IMPORT
    #define IMPORT(name) LI_FN(name)
#endif

#define LI_FUNC_(name) \
    ::li::detail::lazy_function<LAZY_IMPORTER_KHASH(#name), decltype(&name)>

#define LI_FUNC(name) LI_FUNC_(name)

#define LI_MOD_(name) ::li::detail::lazy_module<LAZY_IMPORTER_KHASH(name)>

#define LI_MOD(name) LI_MOD_(name)
