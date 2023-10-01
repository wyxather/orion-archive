#pragma once

// IHandleEntity			:
// IClientUnknown			: IHandleEntity
// IClientRenderable		:
// IClientNetworkable		:
// IClientThinkable			:
// IClientEntity			: IClientUnknown, IClientRenderable, IClientNetworkable, IClientThinkable
// IClientModelRenderable	:
// C_BaseEntity				: IClientEntity, IClientModelRenderable
// C_BaseAnimating			: C_BaseEntity, CCustomMaterialOwner
// C_BaseAnimatingOverlay	: C_BaseAnimating
// C_BaseFlex				: C_BaseAnimatingOverlay
// C_BaseCombatCharacter	: C_BaseFlex
// C_BasePlayer				: C_BaseCombatCharacter

#include "Class.h"
#include "SDK/Struct/Vector3.h"
#include "SDK/Datamaps.h"
#include "SDK/Netvars.h"
#include "Module/Game.h"

#pragma push_macro("GetClassName")
#undef GetClassName

enum class MoveType;
enum class ObsMode;

template <typename T> class UtlVector;

class Collideable;
class Datamap;
class Model;
class WeaponInfo;

struct Matrix3x4;

class Entity // C_CSPlayer: C_BasePlayer, C_BaseCombatCharacter, C_BaseFlex, C_BaseAnimatingOverlay, C_BaseAnimating, C_BaseEntity, IClientEntity, IClientUnknown, IHandleEntity, IClientRenderable, IClientNetworkable, IClientThinkable, IClientModelRenderable, CCustomMaterialOwner, CGameEventListener, IGameEventListener2, ICSPlayerAnimStateHelpers, IHasAttributes
{
public:
	INCONSTRUCTIBLE(Entity);

	enum __vftable
	{
		//////////////////////////////////////////////////////////////////////////
		// class C_BaseEntity [+0]
		//////////////////////////////////////////////////////////////////////////
		// class IHandleEntity
		_IHandleEntity = 0,
		SetRefEHandle,
		GetRefEHandle,
		// class IClientUnknown
		GetCollideable,
		GetClientNetworkable,
		GetClientRenderable,
		GetIClientEntity,
		GetBaseEntity,
		GetClientThinkable,
		GetClientAlphaProperty,
		// class IClientEntity
		GetAbsOrigin,
		GetAbsAngles,
		GetMouth,
		GetSoundSpatialization,
		IsBlurred,
		// class
		GetDataDescMap,
		GetBaseMap,
		GetPredDescMap,
		// class C_BaseEntity
		_C_BaseEntity,
		FireBullets,
		ShouldDrawUnderwaterBulletBubbles,
		ShouldDrawWaterImpacts,
		HandleShotImpactingWater,
		GetBeamTraceFilter,
		DispatchTraceAttack,
		TraceAttack,
		DoImpactEffect,
		MakeTracer,
		GetTracerAttachment,
		BloodColor,
		GetTracerType,
		TakeDamage,
		Spawn,
		SpawnClientEntity,
		Precache,
		Activate,
		OnParseMapDataFinished,
		KeyValue,
		KeyValue2,
		KeyValue3,
		KeyValue4,
		GetKeyValue,
		InitSharedVars,
		Init,
		GetBaseAnimating,
		GetBaseAnimatingOverlay,
		SetClassname,
		Classify,
		OnToolStartRecording,
		//------------------------------------------------------------------------

		//////////////////////////////////////////////////////////////////////////
		// class IClientRenderable + 4
		//////////////////////////////////////////////////////////////////////////
		IClientRenderable_GetIClientUnknown = 0,
		GetRenderOrigin,
		GetRenderAngles,
		ShouldDraw,
		GetRenderFlags,
		Unused,
		GetShadowHandle,
		RenderHandle,
		GetModel,
		DrawModel,
		GetBody,
		GetColorModulation,
		LODTest,
		SetupBones,
		SetupWeights,
		DoAnimationEvents,
		GetPVSNotifyInterface,
		GetRenderBounds,
		GetRenderBoundsWorldspace,
		GetShadowRenderBounds,
		ShouldReceiveProjectedTextures,
		GetShadowCastDistance,
		GetShadowCastDirection,
		IsShadowDirty,
		MarkShadowDirty,
		GetShadowParent,
		FirstShadowChild,
		NextShadowPeer,
		ShadowCastType,
		Unused2,
		CreateModelInstance,
		GetModelInstance,
		RenderableToWorldTransform,
		LookupAttachment,
		GetAttachment2,
		GetAttachment3,
		ComputeLightingOrigin,
		GetRenderClipPlane,
		GetSkin,
		OnThreadedDrawSetup,
		UsesFlexDelayedWeights,
		RecordToolMessage,
		ShouldDrawForSplitScreenUser,
		OverrideAlphaModulation,
		OverrideShadowAlphaModulation,
		GetClientModelRenderable,
		//------------------------------------------------------------------------

		//////////////////////////////////////////////////////////////////////////
		// class IClientNetworkable [+8]
		//////////////////////////////////////////////////////////////////////////
		IClientNetworkable_GetIClientUnknown = 0,
		IClientNetworkable_Release,
		GetClientClass,
		NotifyShouldTransmit,
		OnPreDataChanged,
		OnDataChanged,
		PreDataUpdate,
		PostDataUpdate,
		OnDataUnchangedInPVS,
		IsDormant,
		entindex,
		ReceiveMessage,
		GetDataTableBasePtr,
		SetDestroyedOnRecreateEntities,
		//------------------------------------------------------------------------

		//////////////////////////////////////////////////////////////////////////
		// class IClientThinkable [+12]
		//////////////////////////////////////////////////////////////////////////
		IClientThinkable_GetIClientUnknown = 0,
		ClientThink,
		GetThinkHandle,
		SetThinkHandle,
		GetIClientUnknown_Release,
		//------------------------------------------------------------------------

		SetModelIndex = 75,
		GetAttachment = 84,
		GetTeamNumber = 88,
		GetHealth = 122,
		GetMaxHealth,
		GetLastUserCommand,
		Think = 139,
		GetClassName = 143,
		EstimateAbsVelocity = 145,
		IsAlive = 156,
		IsPlayer = 158,
		IsWeapon = 166,
		EyePosition = 169,
		SetSequence = 219,
		UpdateClientSideAnimation = 224,
		GetActiveWeapon = 268,
		CalculateView = 277,
		GetWeaponSubType = 282,
		GetEyePosition = 285,
		GetObserverMode = 294,
		GetObserverTarget,
		GetAimPunch = 346,
		GetWeaponInfo = 461,

		__vftable = 397
	};

	VIRTUAL_METHOD(__vftable::GetRefEHandle, getRefEHandle, __stdcall, int&, (), (this));
	VIRTUAL_METHOD(__vftable::GetCollideable, getCollideable, __stdcall, Collideable*, (), (this));
	VIRTUAL_METHOD(__vftable::GetAbsOrigin, getAbsOrigin, __stdcall, const Vector3&, (), (this));
	VIRTUAL_METHOD(__vftable::GetDataDescMap, getDataDescMap, __stdcall, Datamap*, (), (this));
	VIRTUAL_METHOD(__vftable::GetBaseMap, getBaseMap, __stdcall, Datamap*, (), (this));
	VIRTUAL_METHOD(__vftable::GetPredDescMap, getPredDescMap, __stdcall, Datamap*, (), (this));
	VIRTUAL_METHOD(__vftable::GetHealth, getHealth, __stdcall, int, (), (this));
	VIRTUAL_METHOD(__vftable::GetMaxHealth, getMaxHealth, __stdcall, int, (), (this));
	VIRTUAL_METHOD(__vftable::IsAlive, isAlive, __stdcall, bool, (), (this));
	VIRTUAL_METHOD(__vftable::IsPlayer, isPlayer, __stdcall, bool, (), (this));
	VIRTUAL_METHOD(__vftable::IsWeapon, isWeapon, __stdcall, bool, (), (this));
	VIRTUAL_METHOD(__vftable::GetActiveWeapon, getActiveWeapon, __stdcall, Entity*, (), (this));
	VIRTUAL_METHOD(__vftable::GetEyePosition, getEyePosition, __stdcall, void, (Vector3& vec), (this, std::ref(vec)));
	VIRTUAL_METHOD(__vftable::GetObserverMode, getObserverMode, __stdcall, ObsMode, (), (this));
	VIRTUAL_METHOD(__vftable::GetObserverTarget, getObserverTarget, __stdcall, Entity*, (), (this));
	VIRTUAL_METHOD(__vftable::GetAimPunch, getAimPunch, __stdcall, void, (Vector3& vec), (this, std::ref(vec)));
	VIRTUAL_METHOD(__vftable::GetWeaponInfo, getWeaponInfo, __stdcall, WeaponInfo*, (), (this));

	VIRTUAL_METHOD(__vftable::GetModel, getModel, __stdcall, const Model*, (), (this + sizeof(std::uintptr_t)));
	VIRTUAL_METHOD(__vftable::RenderableToWorldTransform, renderableToWorldTransform, __stdcall, const Matrix3x4&, (), (this + sizeof(std::uintptr_t)));

	VIRTUAL_METHOD(__vftable::entindex, index, __stdcall, int, (), (this + (sizeof(std::uintptr_t) * 2)));
	VIRTUAL_METHOD(__vftable::IsDormant, isDormant, __stdcall, bool, (), (this + (sizeof(std::uintptr_t) * 2)));

	NETVAR("CBasePlayer", m_fFlags, int);
	NETVAR("CBasePlayer", m_nTickBase, int);
	NETVAR("CBasePlayer", m_aimPunchAngle, Vector3);
	NETVAR("CBasePlayer", m_viewPunchAngle, Vector3);
	NETVAR("CBasePlayer", "m_hViewModel[0]", m_hViewModel, int);

	NETVAR("CCSPlayer", m_bIsScoped, bool);

	DATAMAP("C_BaseEntity", m_MoveType, MoveType);

	[[nodiscard]] constexpr auto getAimPunch() const noexcept
	{
		Vector3 v;
		getAimPunch(v);
		return v;
	}

	[[nodiscard]] constexpr auto getEyePosition() const noexcept
	{
		Vector3 v;
		getEyePosition(v);
		return v;
	}

	[[nodiscard]] auto isOnGround() const noexcept
	{
		return (m_fFlags() & 1) != 0;
	}

	[[nodiscard]] auto isOtherEnemy(const Entity& other) const noexcept -> bool;

	auto getPlayerName(char(&out)[128]) const noexcept -> void;

	[[nodiscard]] auto getPlayerName() const noexcept -> std::string
	{
#pragma warning( push )
#pragma warning( disable : 6054 )
		char name[128];
		getPlayerName(name);
		return name;
#pragma warning( pop )
	}

	[[nodiscard]] auto&& getBoneCache() const noexcept
	{
		return *reinterpret_cast<std::add_pointer_t<UtlVector<Matrix3x4>>>(reinterpret_cast<uintptr_t>(this) + game->memory.offsets.playerBoneCache);
	}
};

#pragma pop_macro("GetClassName")