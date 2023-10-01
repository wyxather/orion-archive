#include "WeaponIcon.h"
#include "SDK/Class/FileSystem.h"
#include "SDK/FileSVG.h"
#include "Module/Game.h"

#include <d3d9.h>

namespace
{
	auto createTexture(const std::uint8_t* src, const std::size_t width, const std::size_t height, WeaponIcon::Data& data) noexcept
	{
		const auto device = *static_cast<IDirect3DDevice9**>(ImGui::GetIO().BackendRendererUserData);

		LPDIRECT3DTEXTURE9 texture;
		if (device->CreateTexture(width, height, 1, D3DUSAGE_DYNAMIC, D3DFMT_A8R8G8B8, D3DPOOL_DEFAULT, &texture, nullptr) != D3D_OK)
			return;

		D3DLOCKED_RECT lockedRect;
		if (texture->LockRect(0, &lockedRect, nullptr, D3DLOCK_DISCARD) != D3D_OK)
			return;

		auto dst = reinterpret_cast<std::uint8_t*>(lockedRect.pBits);
		for (auto h = decltype(height){}; h < height; h++) {
			const auto step = width * sizeof(width);
			std::copy(src, src + step, dst);
			src += step;
			dst += lockedRect.Pitch;
		}

		if (texture->UnlockRect(0) != D3D_OK)
			return;

		data.texture = texture;
		data.size[0] = static_cast<float>(width);
		data.size[1] = static_cast<float>(height);
	}

	struct Icon
	{
		explicit Icon(std::uint32_t hash, std::string_view name, std::size_t width = 0, std::size_t height = 0) noexcept : hash{ hash }
		{
			Orion::String<"materials\\panorama\\images\\icons\\equipment\\"> path;
			Orion::String<".svg"> extension;
			Orion::String<"r"> option;
			Orion::String<"GAME"> pathID;

			std::string completePath = path.get();
			completePath += name.data();
			completePath += extension.get();

			std::unique_ptr<void, std::function<void(void*)>> fileHandle(
				game->interfaces.baseFileSystem->open(completePath.c_str(), option.get(), pathID.get()),
				[](void* handle) noexcept
				{
					if (handle != nullptr)
						game->interfaces.baseFileSystem->close(handle);
				});

			const auto fileSize = game->interfaces.baseFileSystem->size(fileHandle.get());
			if (!fileSize)
				return;

			std::unique_ptr<std::uint8_t[]> fileData = std::make_unique<decltype(fileData)::element_type[]>(fileSize);
			if (!game->interfaces.baseFileSystem->read(fileData.get(), fileSize, fileHandle.get()))
				return;

			if (FileSVG fileSVG{ width, height }; fileSVG.parse(fileData.get(), fileSize, &width, &height))
				createTexture(fileSVG.get(), width, height, data);
		}

		constexpr Icon(Icon&&) noexcept = default;
		constexpr Icon& operator=(Icon&&) noexcept = default;

		Icon(const Icon&) = delete;
		Icon& operator=(const Icon&) = delete;

		std::uint32_t hash;
		WeaponIcon::Data data;
	};

	std::vector<Icon> icons;
}

auto WeaponIcon::install() noexcept -> void
{
#pragma push_macro("CREATE_ICON")
#define CREATE_ICON(o) \
{ \
	Orion::String<o> name; \
	icons.emplace_back(Orion::Fnv<o>::value, name.get()); \
}
	CREATE_ICON("ak47");
	CREATE_ICON("ammobox");
	CREATE_ICON("ammobox_threepack");
	CREATE_ICON("armor");
	CREATE_ICON("armor_helmet");
	CREATE_ICON("assaultsuit");
	CREATE_ICON("aug");
	CREATE_ICON("awp");
	CREATE_ICON("bayonet");
	CREATE_ICON("bizon");
	CREATE_ICON("breachcharge");
	CREATE_ICON("breachcharge_projectile");
	CREATE_ICON("bumpmine");
	CREATE_ICON("c4");
	CREATE_ICON("controldrone");
	CREATE_ICON("cz75a");
	CREATE_ICON("deagle");
	CREATE_ICON("decoy");
	CREATE_ICON("defuser");
	CREATE_ICON("diversion");
	CREATE_ICON("dronegun");
	CREATE_ICON("elite");
	CREATE_ICON("famas");
	CREATE_ICON("firebomb");
	CREATE_ICON("fists");
	CREATE_ICON("fiveseven");
	CREATE_ICON("flashbang");
	CREATE_ICON("flashbang_assist");
	CREATE_ICON("frag_grenade");
	CREATE_ICON("g3sg1");
	CREATE_ICON("galilar");
	CREATE_ICON("glock");
	CREATE_ICON("grenadepack");
	CREATE_ICON("grenadepack2");
	CREATE_ICON("hammer");
	CREATE_ICON("healthshot");
	CREATE_ICON("heavy_armor");
	CREATE_ICON("hegrenade");
	CREATE_ICON("helmet");
	CREATE_ICON("hkp2000");
	CREATE_ICON("incgrenade");
	CREATE_ICON("inferno");
	CREATE_ICON("kevlar");
	CREATE_ICON("knife");
	CREATE_ICON("knifegg");
	CREATE_ICON("knife_bowie");
	CREATE_ICON("knife_butterfly");
	CREATE_ICON("knife_canis");
	CREATE_ICON("knife_cord");
	CREATE_ICON("knife_css");
	CREATE_ICON("knife_falchion");
	CREATE_ICON("knife_flip");
	CREATE_ICON("knife_gut");
	CREATE_ICON("knife_gypsy_jackknife");
	CREATE_ICON("knife_karambit");
	CREATE_ICON("knife_m9_bayonet");
	CREATE_ICON("knife_outdoor");
	CREATE_ICON("knife_push");
	CREATE_ICON("knife_skeleton");
	CREATE_ICON("knife_stiletto");
	CREATE_ICON("knife_survival_bowie");
	CREATE_ICON("knife_t");
	CREATE_ICON("knife_tactical");
	CREATE_ICON("knife_ursus");
	CREATE_ICON("knife_widowmaker");
	CREATE_ICON("m249");
	CREATE_ICON("m4a1");
	CREATE_ICON("m4a1_silencer");
	CREATE_ICON("m4a1_silencer_off");
	CREATE_ICON("mac10");
	CREATE_ICON("mag7");
	CREATE_ICON("molotov");
	CREATE_ICON("mp5sd");
	CREATE_ICON("mp7");
	CREATE_ICON("mp9");
	CREATE_ICON("negev");
	CREATE_ICON("nova");
	CREATE_ICON("p2000");
	CREATE_ICON("p250");
	CREATE_ICON("p90");
	CREATE_ICON("planted_c4");
	CREATE_ICON("planted_c4_survival");
	CREATE_ICON("prop_exploding_barrel");
	CREATE_ICON("radarjammer");
	CREATE_ICON("revolver");
	CREATE_ICON("sawedoff");
	CREATE_ICON("scar20");
	CREATE_ICON("sg556");
	CREATE_ICON("shield");
	CREATE_ICON("smokegrenade");
	CREATE_ICON("snowball");
	CREATE_ICON("spanner");
	CREATE_ICON("ssg08");
	CREATE_ICON("stomp_damage");
	CREATE_ICON("tablet");
	CREATE_ICON("tagrenade");
	CREATE_ICON("taser");
	CREATE_ICON("tec9");
	CREATE_ICON("ump45");
	CREATE_ICON("usp_silencer");
	CREATE_ICON("usp_silencer_off");
	CREATE_ICON("xm1014");
	CREATE_ICON("zone_repulsor");
#pragma pop_macro("CREATE_ICON")

	std::ranges::sort(icons, {}, &Icon::hash);
	icons.shrink_to_fit();
}

auto WeaponIcon::uninstall() noexcept -> void
{
	for (auto& icon : icons)
		static_cast<LPDIRECT3DTEXTURE9>(icon.data.texture)->Release();
	icons.clear();
}

auto WeaponIcon::invalidate() noexcept -> void
{
	WeaponIcon::uninstall();
	WeaponIcon::install();
}

auto WeaponIcon::get(std::uint32_t hash) noexcept -> const Data*
{
	if (const auto it = std::ranges::lower_bound(icons, hash, {}, &Icon::hash); it != icons.cend() && it->hash == hash)
		return &it->data;
	return nullptr;
}