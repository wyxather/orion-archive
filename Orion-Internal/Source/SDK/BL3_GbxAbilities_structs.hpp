#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GbxGameSystemCore_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxAbilities.EAbilityResourceDelegateType
enum class EAbilityResourceDelegateType : uint8_t
{
	None                           = 0,
	OnResourceNowDepleted          = 1,
	OnResourceNowNotDepleted       = 2,
	OnResourceNowFilled            = 3,
	OnResourceNowNotFilled         = 4,
	OnResourceNowRegenerating      = 5,
	OnResourceNowNotRegenerating   = 6,
	OnResourceNowDepleting         = 7,
	OnResourceNowNotDepleting      = 8,
	OnResourceNowIdle              = 9,
	EAbilityResourceDelegateType_MAX = 10
};


// Enum GbxAbilities.EGbxAbilityState
enum class EGbxAbilityState : uint8_t
{
	Unactivated                    = 0,
	Deactivated                    = 1,
	Paused                         = 2,
	Active                         = 3,
	EGbxAbilityState_MAX           = 4
};


// Enum GbxAbilities.EGbxAbilityDurationType
enum class EGbxAbilityDurationType : uint8_t
{
	Timed                          = 0,
	Indefinite                     = 1,
	Infinite                       = 2,
	EGbxAbilityDurationType_MAX    = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxAbilities.GbxAbilityEffect
// 0x0020
struct FGbxAbilityEffect
{
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UGbxAbilityEffectTargetResolutionData*> TargetResolutionStrategies;                               // 0x0008(0x0010) (Edit, ZeroConstructor)
	class UGbxCondition*                               Condition;                                                // 0x0018(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxAbilities.GbxAbilityEffectInstanceTarget
// 0x0030
struct FGbxAbilityEffectInstanceTarget
{
	class AActor*                                      TargetActor;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStatusEffectManagerComponent*               TargetStatusEffectManagerComponent;                       // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FStatusEffectInstanceReference              StatusEffectInstanceReference;                            // 0x0010(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct GbxAbilities.GbxAbilityEffectInstance
// 0x0070
struct FGbxAbilityEffectInstance
{
	class UGbxAbility*                                 Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStatusEffectSpec                           StatusEffectSpec;                                         // 0x0008(0x0038)
	TArray<struct FGbxAbilityEffectInstanceTarget>     Targets;                                                  // 0x0040(0x0010) (ZeroConstructor)
	class UGbxCondition*                               Condition;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UGbxAbilityEffectTargetResolutionData*> TargetResolutionStrategies;                               // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct GbxAbilities.GbxAbilitySpec
// 0x0010
struct FGbxAbilitySpec
{
	class UClass*                                      AbilityClass;                                             // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGbxAbilityDurationType                            DurationType;                                             // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              DurationInitializerData;                                  // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAbilities.GbxAbilityManagerComponentDeferredOperation
// 0x0028
struct FGbxAbilityManagerComponentDeferredOperation
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FGbxAbilitySpec                             AddSpec;                                                  // 0x0008(0x0010)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	class UClass*                                      RemoveSpec;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAbilities.GbxAbilityManagerComponentListLock
// 0x0020
struct FGbxAbilityManagerComponentListLock
{
	class UGbxAbilityManagerComponent*                 Owner;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FGbxAbilityManagerComponentDeferredOperation> DeferredOps;                                              // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct GbxAbilities.GbxAbilityResourceController
// 0x0018
struct FGbxAbilityResourceController
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UGbxAbility*                                 Owner;                                                    // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GbxAbilities.GbxAbilityResourceController_ResourcePoolDelegate
// 0x0010 (0x0028 - 0x0018)
struct FGbxAbilityResourceController_ResourcePoolDelegate : public FGbxAbilityResourceController
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct GbxAbilities.GbxAbilityResourceSpec
// 0x0010
struct FGbxAbilityResourceSpec
{
	class UGbxAbility*                                 AbilityContext;                                           // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWhenActive;                                              // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWhenPaused;                                              // 0x0009(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxAbilities.GbxAbilityResourceSpec_ResourcePoolDelegate
// 0x0020 (0x0030 - 0x0010)
struct FGbxAbilityResourceSpec_ResourcePoolDelegate : public FGbxAbilityResourceSpec
{
	class UGameResourcePoolManagerComponent*           ResourcePoolComponent;                                    // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameResourcePoolData*                       ResourcePoolData;                                         // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAbilityResourceDelegateType                       DelegateType;                                             // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UDelegateProperty*                           DelegateEventProperty;                                    // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAbilities.GbxAbilityResourceController_ConditionalDamageModifier
// 0x0010 (0x0028 - 0x0018)
struct FGbxAbilityResourceController_ConditionalDamageModifier : public FGbxAbilityResourceController
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct GbxAbilities.GbxAbilityResourceSpec_ConditionalDamageModifier
// 0x0018 (0x0028 - 0x0010)
struct FGbxAbilityResourceSpec_ConditionalDamageModifier : public FGbxAbilityResourceSpec
{
	class UDamageBaseComponent*                        DamageComponent;                                          // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UConditionalDamageModifier*                  DamageModifier;                                           // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextOverride;                                          // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAbilities.GbxAbilityResourceController_ScriptDelegate
// 0x0010 (0x0028 - 0x0018)
struct FGbxAbilityResourceController_ScriptDelegate : public FGbxAbilityResourceController
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct GbxAbilities.GbxAbilityResourceSpec_ScriptDelegate
// 0x0018 (0x0028 - 0x0010)
struct FGbxAbilityResourceSpec_ScriptDelegate : public FGbxAbilityResourceSpec
{
	class UObject*                                     TargetContext;                                            // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMulticastDelegateProperty*                  TargetProperty;                                           // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDelegateProperty*                           DelegateEventProperty;                                    // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
