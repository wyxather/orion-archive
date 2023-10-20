#pragma once

#ifndef LAZY_IMPORTER_CASE_INSENSITIVE
#define LAZY_IMPORTER_CASE_INSENSITIVE
#endif

#include "dependencies/lazy_importer.hpp"

#define LI_FUNC_(name) ::li::detail::lazy_function<LAZY_IMPORTER_KHASH(#name), decltype(&name)>

#define LI_FUNC(name) LI_FUNC_(name)

#define LI_MOD_(name) ::li::detail::lazy_module<LAZY_IMPORTER_KHASH(name)>

#define LI_MOD(name) LI_MOD_(name)
