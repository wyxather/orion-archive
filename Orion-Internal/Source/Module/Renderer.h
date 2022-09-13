#pragma once

class Renderer
{
public:
	enum class Type
	{
		NONE,
		D3D9,
		D3D11
	};

	Renderer(Type type = Type::NONE) noexcept;
	~Renderer() noexcept;

	Renderer(Renderer&&) = delete;
	Renderer(const Renderer&) = delete;
	Renderer& operator=(Renderer&&) = delete;
	Renderer& operator=(const Renderer&) = delete;

	[[nodiscard]] constexpr auto getType() const noexcept { return type; }

	auto hook() noexcept -> void;
	auto unhook() noexcept -> void;

private:
	Type type;
	HMODULE handle;
};

inline std::optional<Renderer> renderer;