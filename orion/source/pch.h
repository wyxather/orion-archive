#ifndef PCH_H
#define PCH_H

#include <array>
#include <cassert>
#include <cstddef>
#include <source_location>
#include <utility>

#define LAZY_IMPORTER_CASE_INSENSITIVE
#include "dependencies/lazy_importer.hpp"
#define LI_MOD_( name )  ::li::detail::lazy_module<LAZY_IMPORTER_KHASH( name )>
#define LI_MOD( name )   LI_MOD_( name )
#define LI_FUNC_( name ) ::li::detail::lazy_function<LAZY_IMPORTER_KHASH( #name ), decltype( &name )>
#define LI_FUNC( name )  LI_FUNC_( name )

#include "dependencies/stb.hh"

#define JM_XORSTR_DISABLE_AVX_INTRINSICS
#include "dependencies/xorstr.hpp"
#define xorarr( arr )                                                                                                  \
    ::jm::xor_string(                                                                                                  \
        []()                                                                                                           \
        {                                                                                                              \
            return arr.data();                                                                                         \
        },                                                                                                             \
        std::integral_constant<std::size_t, arr.size()> {},                                                            \
        std::make_index_sequence<::jm::detail::_buffer_size<sizeof( arr )>()> {} )
#define xorarr_( arr ) xorarr( arr ).crypt_get()

#include "source/framework.h"
#include "source/utilities/option.h"

#endif
