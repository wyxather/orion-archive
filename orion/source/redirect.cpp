#include "source/redirect.h"

#include <vcruntime_new.h>

#include <tuple>

#include "source/context.h"
#include "source/import/kernel32.h"
#include "source/import/ntdll.h"

using orion::context;
using orion::Redirect;

_Ret_notnull_ _Post_writable_byte_size_(size)

_VCRT_ALLOCATOR
auto __CRTDECL operator new(const size_t size) -> void * {
    return context.ntdll->rtl_allocate_heap(
        context.ntdll->gadget_address,
        context.kernel32->get_process_heap(context.kernel32->gadget_address),
        0,
        size
    );
}

_Ret_maybenull_ _Success_(return != NULL) _Post_writable_byte_size_(size) _VCRT_ALLOCATOR
    auto __CRTDECL operator new(const size_t size, const std::nothrow_t &) noexcept -> void * {
    return context.ntdll->rtl_allocate_heap(
        context.ntdll->gadget_address,
        context.kernel32->get_process_heap(context.kernel32->gadget_address),
        0,
        size
    );
}

_Ret_notnull_ _Post_writable_byte_size_(size)

_VCRT_ALLOCATOR
auto __CRTDECL operator new[](const size_t size) -> void * {
    return context.ntdll->rtl_allocate_heap(
        context.ntdll->gadget_address,
        context.kernel32->get_process_heap(context.kernel32->gadget_address),
        0,
        size
    );
}

_NODISCARD _Ret_maybenull_ _Success_(return != NULL)
    _Post_writable_byte_size_(size) _VCRT_ALLOCATOR
    auto __CRTDECL operator new[](const size_t size, const std::nothrow_t &) noexcept -> void * {
    return context.ntdll->rtl_allocate_heap(
        context.ntdll->gadget_address,
        context.kernel32->get_process_heap(context.kernel32->gadget_address),
        0,
        size
    );
}

auto __CRTDECL operator delete(void *block) noexcept -> void {
    std::ignore = context.kernel32->heap_free(
        context.kernel32->gadget_address,
        context.kernel32->get_process_heap(context.kernel32->gadget_address),
        0,
        block
    );
}

auto __CRTDECL operator delete(void *block, const std::nothrow_t &) noexcept -> void {
    std::ignore = context.kernel32->heap_free(
        context.kernel32->gadget_address,
        context.kernel32->get_process_heap(context.kernel32->gadget_address),
        0,
        block
    );
}

auto __CRTDECL operator delete[](void *block) noexcept -> void {
    std::ignore = context.kernel32->heap_free(
        context.kernel32->gadget_address,
        context.kernel32->get_process_heap(context.kernel32->gadget_address),
        0,
        block
    );
}

auto __CRTDECL operator delete[](void *block, const std::nothrow_t &) noexcept -> void {
    std::ignore = context.kernel32->heap_free(
        context.kernel32->gadget_address,
        context.kernel32->get_process_heap(context.kernel32->gadget_address),
        0,
        block
    );
}

auto __CRTDECL operator delete(void *block, size_t) noexcept -> void {
    std::ignore = context.kernel32->heap_free(
        context.kernel32->gadget_address,
        context.kernel32->get_process_heap(context.kernel32->gadget_address),
        0,
        block
    );
}

auto __CRTDECL operator delete[](void *block, size_t) noexcept -> void {
    std::ignore = context.kernel32->heap_free(
        context.kernel32->gadget_address,
        context.kernel32->get_process_heap(context.kernel32->gadget_address),
        0,
        block
    );
}

auto Redirect::imgui_alloc(const std::size_t size, void *const user_data) noexcept -> void * {
    return context.ntdll->rtl_allocate_heap(context.ntdll->gadget_address, user_data, 0, size);
}

auto Redirect::imgui_free(void *const ptr, void *const user_data) noexcept -> void {
    std::ignore =
        context.kernel32->heap_free(context.kernel32->gadget_address, user_data, 0, ptr);
}
