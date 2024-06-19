#pragma once

#include <array>
#include <cstddef>

class Memory final {
private:
    class Block final {
    private:
        struct {
            std::size_t data_size;

            union {
                Block *next_block;
                std::byte *next_block_byte;
            };

        } header;

    public:
        consteval Block() noexcept = default;

        explicit Block(std::size_t data_size, Block *next_block) noexcept;

        Block(Block &&) = delete;

        Block(const Block &) = delete;

        constexpr ~Block() noexcept {
            header.data_size = 0;
        }

        Block &operator=(Block &&) = delete;

        Block &operator=(const Block &) = delete;

        [[nodiscard]] auto has_next_block() const noexcept -> bool;

        auto set_next_block(Block *next_block) noexcept -> void;

        [[nodiscard]] auto get_data() noexcept -> std::byte *;

        [[nodiscard]] auto get_next_block() noexcept -> Block *;

        [[nodiscard]] auto get_next_block_byte() const noexcept -> const std::byte *;

        [[nodiscard]] auto get_next_possible_block() noexcept -> Block *;

        [[nodiscard]] auto as_byte() noexcept -> std::byte *;

        [[nodiscard]] static auto get_header_size() noexcept -> std::size_t;
    };

    union {
        std::array<std::byte, 1'000'000> bytes {};
        Block first_block;
    };

    [[nodiscard]] static auto insert_block_at(Block *block, std::size_t new_block_size) noexcept
        -> Result<std::byte *, Error>;

    [[nodiscard]] static auto insert_block_at(
        Block *block,
        const std::byte *next_block_byte,
        std::size_t new_block_size
    ) noexcept -> Result<std::byte *, Error>;

    [[nodiscard]] static auto get_free_region_size(const std::byte *begin, const std::byte *end) noexcept
        -> std::size_t;

public:
    consteval Memory() noexcept = default;

    Memory(Memory &&) = delete;

    Memory(const Memory &) = delete;

    constexpr ~Memory() noexcept {}

    Memory &operator=(Memory &&) = delete;

    Memory &operator=(const Memory &) = delete;

    auto alloc(std::size_t size) noexcept -> Result<std::byte *, Error>;

    auto free(const std::byte *const block_byte) noexcept -> Result<void, Error>;
};
