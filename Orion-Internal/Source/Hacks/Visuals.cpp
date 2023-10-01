#include "Visuals.h"
#include "SDK/Struct/Matrix4x4.h"
#include "SDK/GameData.h"
#include "SDK/WeaponIcon.h"
#include "Module/Config.h"
#include "Module/Gui.h"

namespace
{
	ImDrawList* drawList;

	struct BoundingBox
	{
	public:
		explicit BoundingBox(const Vector3& mins, const Vector3& maxs, const Vector3& scale, const Matrix3x4* coordinateFrame = nullptr) noexcept
		{
			auto&& toScreenMatrix = GameData::toScreenMatrix();

			minimum.y = minimum.x = (std::numeric_limits<float>::max)();
			maximum.y = maximum.x = -(std::numeric_limits<float>::max)();

			const auto scaledMins = mins + (maxs - mins) * 2.f * (.25f - scale);
			const auto scaledMaxs = maxs - (maxs - mins) * 2.f * (.25f - scale);

			for (auto i = 0; i < 8; i++) {

				const Vector3 point(
					i & 1 ? scaledMaxs.x : scaledMins.x,
					i & 2 ? scaledMaxs.y : scaledMins.y,
					i & 4 ? scaledMaxs.z : scaledMins.z
				);

				if (!(valid = toScreenMatrix.worldToScreenPixelAligned(coordinateFrame ? point.transform(*coordinateFrame) : point, vertices[i])))
					return;

				minimum.x = (std::min)(minimum.x, vertices[i].x);
				minimum.y = (std::min)(minimum.y, vertices[i].y);
				maximum.x = (std::max)(maximum.x, vertices[i].x);
				maximum.y = (std::max)(maximum.y, vertices[i].y);
			}

			valid = true;
		}

		explicit BoundingBox(const BaseData& data, const Vector3& scale = Vector3{ .25f, .25f, .25f }) noexcept : BoundingBox{ data.obbMins, data.obbMaxs, scale, &data.coordinateFrame } {}
		explicit BoundingBox(const Vector3& center) noexcept : BoundingBox{ center - 2.f, center + 2.f, Vector3{ .25f, .25f, .25f } } {}

		[[nodiscard]] constexpr explicit operator bool() const noexcept { return valid; }
		[[nodiscard]] constexpr auto&& min() const noexcept { return minimum; }
		[[nodiscard]] constexpr auto&& max() const noexcept { return maximum; }

		auto render(const float color[4]) const noexcept -> void
		{
			const auto col = ImGui::ColorConvertFloat4ToU32(ImVec4{ color[0], color[1], color[2], color[3] });
			drawList->AddRect(minimum + ImVec2{ 1, 1 }, maximum + ImVec2{ 1, 1 }, col & IM_COL32_A_MASK);
			drawList->AddRect(minimum, maximum, col);
		}

	private:
		bool valid;
		ImVec2 minimum, maximum;
		std::array<ImVec2, 8> vertices;
	};

	constexpr auto recoilCrosshair() noexcept -> void
	{
		const auto& crosshair = config->getData().view.crosshair;
		if (!crosshair.enable)
			return;

		auto&& localPlayerData = GameData::local();
		if (!localPlayerData.exists || !localPlayerData.alive)
			return;

		auto&& viewMatrix = GameData::toScreenMatrix();
		if (ImVec2 pos; viewMatrix.worldToScreenPixelAligned(localPlayerData.aimPunch, pos)) {
			constexpr ImVec2 offset{ 1, 1 };
			const ImU32 color{ ImGui::ColorConvertFloat4ToU32(ImVec4(
				crosshair.color[0],
				crosshair.color[1],
				crosshair.color[2],
				crosshair.color[3]
			)) };
			const ImVec2 point[4]{
				{ pos.x - crosshair.size, pos.y },
				{ pos.x, pos.y - crosshair.size },
				{ pos.x + crosshair.size, pos.y },
				{ pos.x, pos.y + crosshair.size }
			};
			drawList->AddLine(point[0] + offset, point[2] + offset, color & IM_COL32_A_MASK);
			drawList->AddLine(point[1] + offset, point[3] + offset, color & IM_COL32_A_MASK);
			drawList->AddLine(point[0], point[2], color);
			drawList->AddLine(point[1], point[3], color);
		}
	}

	auto renderPlayerBox(const PlayerData& playerData) noexcept -> void
	{
		const BoundingBox bbox{ playerData };
		if (!bbox)
			return;

		constexpr auto drawHealthBar = [](const BoundingBox& bbox, int health, float maxHealth) noexcept {
			constexpr auto healthColor = [](float fraction) noexcept {
				constexpr auto greenHue = 1.f / 3.f;
				constexpr auto redHue = 0.f;
				float r, g, b;
				ImGui::ColorConvertHSVtoRGB(std::lerp(redHue, greenHue, fraction), 1, 1, r, g, b);
				return IM_COL32(static_cast<int>(r * 255.f), static_cast<int>(g * 255.f), static_cast<int>(b * 255.f), 160);
			};
			constexpr auto width = 4.f;
			const auto pos = bbox.min() - ImVec2{ width + 1, 0 };
			const auto height = bbox.max().y - bbox.min().y;
			const auto color = healthColor(std::clamp(health / maxHealth, 0.f, 1.f));
			const auto max = pos + ImVec2{ width, height };
			drawList->AddRect(pos, max, IM_COL32(0, 0, 0, 100));
			drawList->AddRectFilled(pos + ImVec2{ 1, 1 }, max - ImVec2{ 1, 1 }, IM_COL32(0, 0, 0, 90));
			drawList->AddRectFilled(pos + ImVec2{ 0, (maxHealth - health) / maxHealth * height } + ImVec2{ 1 , 1 }, max - ImVec2{ 1, 1 }, color);
		};

		constexpr auto drawWeapon = [](const BoundingBox& bbox, const PlayerData::Weapon& weapon, const float distance) noexcept {
			constexpr auto drawWeaponIcon = [](const WeaponIcon::Data* icon, const ImVec2& pos, const ImU32 color, const float scale) noexcept {
				const auto width = icon->size[0] * scale;
				const auto height = icon->size[1] * scale;
				const auto center = pos.x - width * .5f;
				const ImVec2 min{ center, pos.y };
				const ImVec2 max{ center + width, pos.y + height };
				drawList->AddImage(icon->texture, min + ImVec2{ 1, 0 }, max + ImVec2{ 1, 0 }, ImVec2{}, ImVec2{ 1, 1 }, color & IM_COL32_A_MASK);
				drawList->AddImage(icon->texture, min - ImVec2{ 1, 0 }, max - ImVec2{ 1, 0 }, ImVec2{}, ImVec2{ 1, 1 }, color & IM_COL32_A_MASK);
				drawList->AddImage(icon->texture, min + ImVec2{ 0, 1 }, max + ImVec2{ 0, 1 }, ImVec2{}, ImVec2{ 1, 1 }, color & IM_COL32_A_MASK);
				drawList->AddImage(icon->texture, min - ImVec2{ 0, 1 }, max - ImVec2{ 0, 1 }, ImVec2{}, ImVec2{ 1, 1 }, color & IM_COL32_A_MASK);
				drawList->AddImage(icon->texture, min, max, ImVec2{}, ImVec2{ 1, 1 }, color);
			};
			const ImVec2 pos{ (bbox.min().x + bbox.max().x) * .5f, bbox.max().y + 5 };
			float fontScale;
			if (distance <= 400.f)
				fontScale = 1.f;
			else if (distance <= 1000.f)
				fontScale = .8f;
			else
				fontScale = .6f;
			drawWeaponIcon(weapon.icon, pos, IM_COL32(255, 255, 255, 190), fontScale * .5f);
		};

		constexpr auto drawName = [](const BoundingBox& bbox, const char* name, const float distance) noexcept {

			constexpr auto color = IM_COL32(250, 250, 250, 230);

			float fontScale;
			if (distance <= 400.f)
				fontScale = 1.f;
			else if (distance <= 1000.f)
				fontScale = .8f;
			else
				fontScale = .7f;

			Gui::PushFont font{ gui->getFonts().defaultFont, fontScale };

			const auto textSize = ImGui::CalcTextSize(name);
			const ImVec2 pos{ (bbox.min().x + bbox.max().x) * .5f, bbox.min().y - 5 - textSize.y };
			const ImVec2 textPos{ pos.x - textSize.x * .5f, pos.y };

			drawList->AddText(textPos + ImVec2{ 1, 0 }, color & IM_COL32_A_MASK, name);
			drawList->AddText(textPos - ImVec2{ 1, 0 }, color & IM_COL32_A_MASK, name);
			drawList->AddText(textPos + ImVec2{ 0, 1 }, color & IM_COL32_A_MASK, name);
			drawList->AddText(textPos - ImVec2{ 0, 1 }, color & IM_COL32_A_MASK, name);
			drawList->AddText(textPos, color, name);
		};

		constexpr auto drawSkeleton = [](const std::vector<std::pair<Vector3, Vector3>>& bones) noexcept {

			constexpr auto color = IM_COL32(255, 255, 255, 120);
			auto&& viewMatrix = GameData::toScreenMatrix();

			std::vector<std::pair<ImVec2, ImVec2>> points;

			for (auto&& [bone, parent] : bones) {
				ImVec2 point[2];
				if (!viewMatrix.worldToScreenPixelAligned(bone, point[0]))
					continue;
				if (!viewMatrix.worldToScreenPixelAligned(parent, point[1]))
					continue;
				points.emplace_back(point[0], point[1]);
			}

			for (const auto& [bone, parent] : points) {
				drawList->AddLine(bone + ImVec2{ 1, 1 }, parent + ImVec2{ 1, 1 }, color & IM_COL32_A_MASK);
				drawList->AddLine(bone, parent, color);
			}
		};

		const auto& playerConfigs = config->getData().players;
		if (!playerData.enemy) {

			if (playerConfigs.ally.box.enable)
				bbox.render(playerConfigs.ally.box.color);

			if (playerConfigs.ally.name)
				drawName(bbox, playerData.name.c_str(), playerData.distanceToLocal);

			if (playerConfigs.ally.skeleton)
				drawSkeleton(playerData.bones);

			if (playerConfigs.ally.healthbar)
				drawHealthBar(bbox, playerData.health, static_cast<float>(playerData.maxHealth));

			if (playerConfigs.ally.weapon.icon)
				drawWeapon(bbox, playerData.weapon, playerData.distanceToLocal);
		}
		else {
			if (playerConfigs.enemy.box.enable)
				bbox.render(playerConfigs.enemy.box.color);

			if (playerConfigs.enemy.name)
				drawName(bbox, playerData.name.c_str(), playerData.distanceToLocal);

			if (playerConfigs.enemy.skeleton)
				drawSkeleton(playerData.bones);

			if (playerConfigs.enemy.healthbar)
				drawHealthBar(bbox, playerData.health, static_cast<float>(playerData.maxHealth));

			if (playerConfigs.enemy.weapon.icon)
				drawWeapon(bbox, playerData.weapon, playerData.distanceToLocal);
		}
	}

	auto renderPlayer(const PlayerData& playerData) noexcept -> void
	{
		renderPlayerBox(playerData);
	}
}

auto Visuals::draw() noexcept -> void
{
	drawList = ImGui::GetBackgroundDrawList();

	GameData::Lock lock;

	recoilCrosshair();

	for (auto&& playersData : GameData::players()) {

		if (playersData.dormant || !playersData.alive || !playersData.inViewFrustum)
			continue;

		renderPlayer(playersData);
	}
}