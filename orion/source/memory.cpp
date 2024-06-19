#include "memory.h"

#include <vcruntime_new.h>

#include <bit>
#include <memory>
#include <utility>

_VCRT_EXPORT_STD auto __CRTDECL operator delete(void *const, const std::size_t) noexcept -> void {
}

Memory::Block::Block(const std::size_t data_size, Block *const next_block) noexcept
    : header { .data_size = data_size, .next_block = next_block } {}

auto Memory::Block::has_next_block() const noexcept -> bool {
    return header.next_block != nullptr;
}

auto Memory::Block::set_next_block(Block *next_block) noexcept -> void {
    header.next_block = next_block;
}

auto Memory::Block::get_data() noexcept -> std::byte * {
    return as_byte() + get_header_size();
}

auto Memory::Block::get_next_block() noexcept -> Block * {
    return header.next_block;
}

auto Memory::Block::get_next_block_byte() const noexcept -> const std::byte * {
    return header.next_block_byte;
}

auto Memory::Block::get_next_possible_block() noexcept -> Block * {
    return std::bit_cast<Block *>(as_byte() + header.data_size);
}

auto Memory::Block::as_byte() noexcept -> std::byte * {
    return std::bit_cast<std::byte *>(this);
}

auto Memory::Block::get_header_size() noexcept -> std::size_t {
    return sizeof(header);
}

auto Memory::insert_block_at(Block *const block, const std::size_t new_block_size) noexcept
    -> Result<std::byte *, Error> {
    return insert_block_at(block, block->get_next_block_byte(), new_block_size);
}

auto Memory::insert_block_at(
    Block *const block,
    const std::byte *const next_block_byte,
    const std::size_t new_block_size
) noexcept -> Result<std::byte *, Error> {
    auto new_block = block->get_next_possible_block();
    if ( const auto free_region_size = get_free_region_size(new_block->as_byte(), next_block_byte);
         std::cmp_less(free_region_size, new_block_size) ) {
        return Err("Failed to insert a new memory block due to insufficient memory space.");
    }
    std::construct_at(new_block, new_block_size, block->get_next_block());
    if ( block != new_block ) {
        block->set_next_block(new_block);
    }
    return new_block->get_data();
}

auto Memory::get_free_region_size(const std::byte *const begin, const std::byte *const end) noexcept
    -> std::size_t {
    return end - begin;
}

auto Memory::alloc(const std::size_t data_size) noexcept -> Result<std::byte *, Error> {
    const auto new_block_size = data_size + Block::get_header_size();
    auto block = std::addressof(first_block);
    for ( ; block->has_next_block(); block = block->get_next_block() ) {
        if ( const auto result = insert_block_at(block, new_block_size); result.is_ok() ) {
            return result;
        }
    }
    return insert_block_at(block, std::addressof(bytes.back()), new_block_size);
}

auto Memory::free(const std::byte *const block_byte) noexcept -> Result<void, Error> {
    auto block = std::addressof(first_block);
    if ( block->get_data() == block_byte ) {
        std::destroy_at(block);
        return {};
    }
    while ( block->has_next_block() ) {
        auto next_block = block->get_next_block();
        if ( next_block->get_data() == block_byte ) {
            block->set_next_block(next_block->get_next_block());
            std::destroy_at(next_block);
            return {};
        }
        block = next_block;
    }
    return Err("Failed to remove a memory block due to possible memory corruption.");
}
