#pragma once

namespace orion::utils {
    template<typename _DataTy, typename _KeyTy = std::uint32_t>
    class HashMap {
        std::vector<std::pair<_KeyTy, _DataTy>> data;

        template<typename _Ty, typename... _Args>
        constexpr auto emplace(_Ty&& _Key, _Args&&... _Arg) noexcept -> void {
            HashMap::data.emplace_back(
                std::piecewise_construct,
                std::forward_as_tuple(std::forward<_Ty>(_Key)),
                std::forward_as_tuple(std::forward<_Args>(_Arg)...));
            std::ranges::sort(
                HashMap::data,
                {},
                &decltype(HashMap::data)::value_type::first);
        }

    public:
        constexpr HashMap() noexcept = default;
        constexpr explicit HashMap(const std::size_t size) noexcept {
            HashMap::data.reserve(size);
        }

        constexpr HashMap(HashMap&&) noexcept = default;
        constexpr HashMap& operator=(HashMap&&) noexcept = default;

        HashMap(const HashMap&) = delete;
        HashMap& operator=(const HashMap&) = delete;

        template<typename _Ty>
        [[nodiscard]] constexpr auto find(_Ty&& _Key) noexcept -> _DataTy* {
            if (const auto it = std::ranges::lower_bound(
                    HashMap::data,
                    std::forward<_Ty>(_Key),
                    {},
                    &decltype(HashMap::data)::value_type::first);
                it != HashMap::data.cend() && it->first == _Key)
                return &it->second;
            return nullptr;
        }

        template<typename _Ty>
        [[nodiscard]] constexpr auto find(_Ty&& _Key) const noexcept
            -> const _DataTy* {
            if (const auto it = std::ranges::lower_bound(
                    HashMap::data,
                    std::forward<_Ty>(_Key),
                    {},
                    &decltype(HashMap::data)::value_type::first);
                it != HashMap::data.cend() && it->first == _Key)
                return &it->second;
            return nullptr;
        }

        template<typename _Ty, typename... _Args>
        constexpr auto insert(_Ty&& _Key, _Args&&... _Arg) noexcept -> void {
            if (HashMap::find(std::forward<_Ty>(_Key)) != nullptr)
                return;

            HashMap::data.emplace_back(
                std::piecewise_construct,
                std::forward_as_tuple(std::forward<_Ty>(_Key)),
                std::forward_as_tuple(std::forward<_Args>(_Arg)...));
            std::ranges::sort(
                HashMap::data,
                {},
                &decltype(HashMap::data)::value_type::first);
        }

        template<typename _Ty>
        [[nodiscard]] constexpr auto operator[](_Ty&& _Key) noexcept
            -> _DataTy& {
            if (const auto value = HashMap::find(std::forward<_Ty>(_Key)))
                return *value;

            HashMap::emplace(std::forward<_Ty>(_Key));
            return *HashMap::find(std::forward<_Ty>(_Key));
        }

        [[nodiscard]] constexpr auto size() const noexcept {
            return HashMap::data.size();
        }
        [[nodiscard]] constexpr auto begin() noexcept {
            return HashMap::data.begin();
        }
        [[nodiscard]] constexpr auto begin() const noexcept {
            return HashMap::data.cbegin();
        }
        [[nodiscard]] constexpr auto end() noexcept {
            return HashMap::data.end();
        }
        [[nodiscard]] constexpr auto end() const noexcept {
            return HashMap::data.cend();
        }
    };
}  // namespace orion::utils
