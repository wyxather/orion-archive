#include "Datamaps.h"
#include "SDK/Enum/DatamapFieldType.h"
#include "SDK/Class/Datamap.h"
#include "SDK/Class/Entity.h"
#include "SDK/LocalPlayer.h"
#include "Module/Game.h"
#include "Module/Console.h"

/*
[14:01:31] [DATAMAP] C_BaseEntity->m_ModelName                                       [0000031c]
[14:01:31] [DATAMAP] C_BaseEntity->m_vecAbsOrigin                                    [000000a0]
[14:01:31] [DATAMAP] C_BaseEntity->m_angAbsRotation                                  [000000c4]
[14:01:31] [DATAMAP] C_BaseEntity->m_rgflCoordinateFrame                             [00000444]
[14:01:31] [DATAMAP] C_BaseEntity->m_fFlags                                          [00000104]
[14:01:31] [DATAMAP] C_CSPlayer->m_flStamina                                         [000103d8]
[14:01:31] [DATAMAP] C_CSPlayer->m_flCycle                                           [00000a14]
[14:01:31] [DATAMAP] C_CSPlayer->m_iShotsFired                                       [000103e0]
[14:01:31] [DATAMAP] C_CSPlayer->m_iDirection                                        [000103dc]
[14:01:31] [DATAMAP] C_CSPlayer->m_bIsScoped                                         [00009974]
[14:01:31] [DATAMAP] C_CSPlayer->m_bIsWalking                                        [00009975]
[14:01:31] [DATAMAP] C_CSPlayer->m_nIsAutoMounting                                   [00009ae4]
[14:01:31] [DATAMAP] C_CSPlayer->m_bResumeZoom                                       [00009976]
[14:01:31] [DATAMAP] C_CSPlayer->m_nNumFastDucks                                     [000103e4]
[14:01:31] [DATAMAP] C_CSPlayer->m_bDuckOverride                                     [000103e8]
[14:01:31] [DATAMAP] CPlayerLocalData->m_nStepside                                   [0000003c]
[14:01:31] [DATAMAP] CPlayerLocalData->m_iHideHUD                                    [00000048]
[14:01:31] [DATAMAP] CPlayerLocalData->m_viewPunchAngle                              [00000064]
[14:01:31] [DATAMAP] CPlayerLocalData->m_aimPunchAngle                               [00000070]
[14:01:31] [DATAMAP] CPlayerLocalData->m_aimPunchAngleVel                            [0000007c]
[14:01:31] [DATAMAP] CPlayerLocalData->m_bDrawViewmodel                              [00000091]
[14:01:31] [DATAMAP] CPlayerLocalData->m_bWearingSuit                                [00000092]
[14:01:31] [DATAMAP] CPlayerLocalData->m_bPoisoned                                   [00000093]
[14:01:31] [DATAMAP] CPlayerLocalData->m_bAllowAutoMovement                          [00000094]
[14:01:31] [DATAMAP] CPlayerLocalData->m_bDucked                                     [00000088]
[14:01:31] [DATAMAP] CPlayerLocalData->m_bDucking                                    [00000089]
[14:01:31] [DATAMAP] CPlayerLocalData->m_flLastDuckTime                              [0000008c]
[14:01:31] [DATAMAP] CPlayerLocalData->m_bInDuckJump                                 [00000090]
[14:01:31] [DATAMAP] CPlayerLocalData->m_nDuckTimeMsecs                              [0000004c]
[14:01:31] [DATAMAP] CPlayerLocalData->m_nDuckJumpTimeMsecs                          [00000050]
[14:01:31] [DATAMAP] CPlayerLocalData->m_nJumpTimeMsecs                              [00000054]
[14:01:31] [DATAMAP] CPlayerLocalData->m_flFallVelocity                              [00000058]
[14:01:31] [DATAMAP] CPlayerLocalData->m_nOldButtons                                 [00000040]
[14:01:31] [DATAMAP] CPlayerLocalData->m_flStepSize                                  [00000060]
[14:01:31] [DATAMAP] CPlayerLocalData->m_flFOVRate                                   [00000044]
[14:01:31] [DATAMAP] C_BasePlayer->m_Local                                           [00002fcc]
[14:01:31] [DATAMAP] CPlayerState->deadflag                                          [00000004]
[14:01:31] [DATAMAP] C_BasePlayer->pl                                                [000031e0]
[14:01:31] [DATAMAP] C_BasePlayer->m_iFOV                                            [000031f4]
[14:01:31] [DATAMAP] C_BasePlayer->m_hZoomOwner                                      [0000325c]
[14:01:31] [DATAMAP] C_BasePlayer->m_flFOVTime                                       [00003218]
[14:01:31] [DATAMAP] C_BasePlayer->m_iFOVStart                                       [000031f8]
[14:01:31] [DATAMAP] C_BasePlayer->m_oldOrigin                                       [00003270]
[14:01:31] [DATAMAP] C_BasePlayer->m_bTouchedPhysObject                              [0000327c]
[14:01:31] [DATAMAP] C_BasePlayer->m_bPhysicsWasFrozen                               [0000327d]
[14:01:31] [DATAMAP] C_BasePlayer->m_vNewVPhysicsPosition                            [00003280]
[14:01:31] [DATAMAP] C_BasePlayer->m_vNewVPhysicsVelocity                            [0000328c]
[14:01:31] [DATAMAP] C_BasePlayer->m_afPhysicsFlags                                  [000032fc]
[14:01:31] [DATAMAP] C_BasePlayer->m_hVehicle                                        [00003300]
[14:01:31] [DATAMAP] C_BasePlayer->m_flMaxspeed                                      [00003258]
[14:01:31] [DATAMAP] C_BasePlayer->m_iHealth                                         [00000100]
[14:01:31] [DATAMAP] C_BasePlayer->m_iBonusProgress                                  [00003250]
[14:01:31] [DATAMAP] C_BasePlayer->m_iBonusChallenge                                 [00003254]
[14:01:31] [DATAMAP] C_BasePlayer->m_fOnTarget                                       [00003334]
[14:01:31] [DATAMAP] C_BasePlayer->m_nNextThinkTick                                  [000000fc]
[14:01:31] [DATAMAP] C_BasePlayer->m_lifeState                                       [0000025f]
[14:01:31] [DATAMAP] C_BasePlayer->m_nWaterLevel                                     [0000025e]
[14:01:31] [DATAMAP] C_BasePlayer->m_vecBaseVelocity                                 [00000120]
[14:01:31] [DATAMAP] C_BasePlayer->m_nButtons                                        [00003208]
[14:01:31] [DATAMAP] C_BasePlayer->m_flWaterJumpTime                                 [0000321c]
[14:01:31] [DATAMAP] C_BasePlayer->m_nImpulse                                        [0000320c]
[14:01:31] [DATAMAP] C_BasePlayer->m_flStepSoundTime                                 [0000322c]
[14:01:31] [DATAMAP] C_BasePlayer->m_flSwimSoundTime                                 [00003220]
[14:01:31] [DATAMAP] C_BasePlayer->m_ignoreLadderJumpTime                            [00003224]
[14:01:31] [DATAMAP] C_BasePlayer->m_bHasWalkMovedSinceLastJump                      [00003228]
[14:01:31] [DATAMAP] C_BasePlayer->m_vecLadderNormal                                 [00003240]
[14:01:31] [DATAMAP] C_BasePlayer->m_ladderSurfaceProps                              [00003210]
[14:01:31] [DATAMAP] C_BasePlayer->m_flPhysics                                       [00003214]
[14:01:31] [DATAMAP] C_BasePlayer->m_afButtonLast                                    [000031fc]
[14:01:31] [DATAMAP] C_BasePlayer->m_afButtonPressed                                 [00003200]
[14:01:31] [DATAMAP] C_BasePlayer->m_afButtonReleased                                [00003204]
[14:01:31] [DATAMAP] C_BasePlayer->m_hLastWeapon                                     [00003304]
[14:01:31] [DATAMAP] C_BasePlayer->m_nTickBase                                       [00003440]
[14:01:31] [DATAMAP] C_BasePlayer->m_hGroundEntity                                   [00000150]
[14:01:31] [DATAMAP] C_BasePlayer->m_hViewModel                                      [00003308]
[14:01:31] [DATAMAP] C_BasePlayer->m_surfaceFriction                                 [0000323c]
[14:01:31] [DATAMAP] C_BasePlayer->m_vecPreviouslyPredictedOrigin                    [000035b8]
[14:01:31] [DATAMAP] C_BasePlayer->m_vphysicsCollisionState                          [0000326c]
[14:01:31] [DATAMAP] C_BasePlayer->m_flDuckAmount                                    [00002fbc]
[14:01:31] [DATAMAP] C_BasePlayer->m_flDuckSpeed                                     [00002fc0]
[14:01:31] [DATAMAP] C_BaseCombatCharacter->m_iAmmo                                  [00002d88]
[14:01:31] [DATAMAP] C_BaseCombatCharacter->m_flNextAttack                           [00002d80]
[14:01:31] [DATAMAP] C_BaseCombatCharacter->m_hActiveWeapon                          [00002f08]
[14:01:31] [DATAMAP] C_BaseCombatCharacter->m_hMyWeapons                             [00002e08]
[14:01:31] [DATAMAP] C_BaseAnimating->m_nSkin                                        [00000a1c]
[14:01:31] [DATAMAP] C_BaseAnimating->m_nBody                                        [00000a20]
[14:01:31] [DATAMAP] C_BaseAnimating->m_flPlaybackRate                               [00000a18]
[14:01:31] [DATAMAP] C_BaseAnimating->m_flEncodedController                          [00000a54]
[14:01:31] [DATAMAP] C_BaseAnimating->m_nNewSequenceParity                           [00000a44]
[14:01:31] [DATAMAP] C_BaseAnimating->m_nResetEventsParity                           [00000a48]
[14:01:31] [DATAMAP] C_BaseAnimating->m_nMuzzleFlashParity                           [00000a64]
[14:01:31] [DATAMAP] CCollisionProperty->m_vecMins                                   [00000008]
[14:01:31] [DATAMAP] CCollisionProperty->m_vecMaxs                                   [00000014]
[14:01:31] [DATAMAP] CCollisionProperty->m_nSolidType                                [00000022]
[14:01:32] [DATAMAP] CCollisionProperty->m_usSolidFlags                              [00000020]
[14:01:32] [DATAMAP] CCollisionProperty->m_triggerBloat                              [00000023]
[14:01:32] [DATAMAP] C_BaseEntity->m_Collision                                       [00000320]
[14:01:32] [DATAMAP] C_BaseEntity->m_MoveType                                        [0000025c]
[14:01:32] [DATAMAP] C_BaseEntity->m_MoveCollide                                     [0000025d]
[14:01:32] [DATAMAP] C_BaseEntity->m_vecAbsVelocity                                  [00000094]
[14:01:32] [DATAMAP] C_BaseEntity->m_vecVelocity                                     [00000114]
[14:01:32] [DATAMAP] C_BaseEntity->m_fEffects                                        [000000f0]
[14:01:32] [DATAMAP] C_BaseEntity->m_nRenderMode                                     [0000025b]
[14:01:32] [DATAMAP] C_BaseEntity->m_nRenderFX                                       [0000025a]
[14:01:32] [DATAMAP] C_BaseEntity->m_fFlags                                          [00000104]
[14:01:32] [DATAMAP] C_BaseEntity->m_vecViewOffset                                   [00000108]
[14:01:32] [DATAMAP] C_BaseEntity->m_nModelIndex                                     [00000258]
[14:01:32] [DATAMAP] C_BaseEntity->m_flFriction                                      [00000144]
[14:01:32] [DATAMAP] C_BaseEntity->m_iTeamNum                                        [000000f4]
[14:01:32] [DATAMAP] C_BaseEntity->m_iPendingTeamNum                                 [000000f8]
[14:01:32] [DATAMAP] C_BaseEntity->m_iHealth                                         [00000100]
[14:01:32] [DATAMAP] C_BaseEntity->m_hOwnerEntity                                    [0000014c]
[14:01:32] [DATAMAP] C_BaseEntity->m_hNetworkMoveParent                              [00000148]
[14:01:32] [DATAMAP] C_BaseEntity->m_vecNetworkOrigin                                [00000138]
[14:01:32] [DATAMAP] C_BaseEntity->m_angNetworkAngles                                [0000012c]
[14:01:32] [DATAMAP] C_BaseEntity->m_vecAbsOrigin                                    [000000a0]
[14:01:32] [DATAMAP] C_BaseEntity->m_angAbsRotation                                  [000000c4]
[14:01:32] [DATAMAP] C_BaseEntity->m_vecOrigin                                       [000000ac]
[14:01:32] [DATAMAP] C_BaseEntity->m_angRotation                                     [000000d0]
[14:01:32] [DATAMAP] C_BaseEntity->m_hGroundEntity                                   [00000150]
[14:01:32] [DATAMAP] C_BaseEntity->m_nWaterLevel                                     [0000025e]
[14:01:32] [DATAMAP] C_BaseEntity->m_nWaterType                                      [000000ec]
[14:01:32] [DATAMAP] C_BaseEntity->m_vecAngVelocity                                  [000000b8]
[14:01:32] [DATAMAP] C_BaseEntity->m_vecBaseVelocity                                 [00000120]
[14:01:32] [DATAMAP] C_BaseEntity->m_iEFlags                                         [000000e8]
[14:01:32] [DATAMAP] C_BaseEntity->m_flGravity                                       [000000e0]
[14:01:32] [DATAMAP] C_BaseEntity->m_flProxyRandomValue                              [000000e4]
[14:01:32] [DATAMAP] C_BaseEntity->m_bEverHadPredictionErrorsForThisCommand          [00000938]
[14:01:32] [DATAMAP] C_BaseEntity->m_flUseLookAtAngle                                [000002cc]
[14:01:32] [DATAMAP] C_BaseEntity->m_flMaxFallVelocity                               [000000dc]
*/

namespace
{
	struct Data
	{
		constexpr explicit Data(std::string_view group, std::string_view name, std::uint32_t hash, std::uint32_t offset) noexcept :
			group{ group },
			name{ name },
			hash{ hash },
			offset{ offset }
		{
			console->log<"[DATAMAP] %-64s[%08x]">(std::string{ std::string{ group.data() } + "->" + name.data() }.c_str(), offset);
		}

		constexpr Data(Data&&) noexcept = default;
		constexpr Data& operator=(Data&&) noexcept = default;

		Data(const Data&) = delete;
		Data& operator=(const Data&) = delete;

		std::string group, name;
		std::uint32_t hash, offset;
	};
	std::vector<Data> data;

	[[nodiscard]] auto exist(std::uint32_t hash) noexcept
	{
		if (const auto it = std::ranges::lower_bound(data, hash, {}, &Data::hash); it != data.cend() && it->hash == hash)
			return true;
		return false;
	}

	auto walkTable(Datamap* map) noexcept -> void
	{
		for (auto data = map; data; data = data->baseMap) {

			for (decltype(data->dataNumFields) i = {}; i < data->dataNumFields; ++i) {

				const auto& dataDesc = data->dataDesc[i];

				if (!dataDesc.fieldName)
					continue;

				if (dataDesc.fieldType == DatamapFieldType::FIELD_EMBEDDED)
					walkTable(dataDesc.td);

				if (const auto hash = Orion::Fnv<"", std::uint32_t>::run((data->dataClassName + std::string{ "->" } + dataDesc.fieldName).c_str()); !exist(hash))
					::data.emplace_back(data->dataClassName, dataDesc.fieldName, hash, dataDesc.fieldOffset);
			}
		}
	}
}

auto Datamaps::install() noexcept -> void
{
	walkTable(localPlayer->getDataDescMap());
	walkTable(localPlayer->getBaseMap());
	walkTable(localPlayer->getPredDescMap());

	data.shrink_to_fit();
	std::ranges::sort(data, {}, &Data::hash);
}

auto Datamaps::uninstall() noexcept -> void
{
	data.clear();
}

auto Datamaps::get(std::uint32_t hash) noexcept -> std::uint32_t
{
	if (const auto it = std::ranges::lower_bound(data, hash, {}, &Data::hash); it != data.cend() && it->hash == hash)
		return it->offset;
	return {};
}