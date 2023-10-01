#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxAbilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxAbilities.GbxAbility
// 0x00C0 (0x00E8 - 0x0028)
class UGbxAbility : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	struct FText                                       AbilityName;                                              // 0x0040(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       AbilityDescription;                                       // 0x0058(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FGbxAbilityEffect>                   AbilityEffects;                                           // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	class UGbxAbilityManagerComponent*                 Manager;                                                  // 0x0090(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	EGbxAbilityDurationType                            DurationType;                                             // 0x0098(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              Duration;                                                 // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EGbxAbilityState                                   DesiredAbilityState;                                      // 0x00A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EGbxAbilityState                                   AbilityState;                                             // 0x00A1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00A2(0x0006) MISSED OFFSET
	TArray<struct FGbxAbilityEffectInstance>           AbilityEffectInstances;                                   // 0x00A8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
	class UGbxAbilityManagerComponent*                 PendingManager;                                           // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAbilities.GbxAbility");
		return ptr;
	}


	void OnUnregistered();
	void OnResumed();
	void OnRep_Manager();
	void OnRep_AbilityState();
	void OnRegistered();
	void OnPaused();
	void OnForcedRefresh();
	void OnDeactivated();
	void OnActivated();
	bool IsReplicated();
	class AActor* GetAbilityOwner();
	void Client_Deactivate();
	EGbxAbilityState CalculateAbilityState();
};


// Class GbxAbilities.GbxAbilityEffectTargetResolutionData
// 0x0000 (0x0030 - 0x0030)
class UGbxAbilityEffectTargetResolutionData : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAbilities.GbxAbilityEffectTargetResolutionData");
		return ptr;
	}

};


// Class GbxAbilities.GbxAbilityManagerComponent
// 0x00D0 (0x0248 - 0x0178)
class UGbxAbilityManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0178(0x0030) MISSED OFFSET
	TArray<class UGbxAbility*>                         Abilities;                                                // 0x01A8(0x0010) (ZeroConstructor, Transient)
	TArray<class UGbxAbility*>                         ReplicatedAbilities;                                      // 0x01B8(0x0010) (ZeroConstructor, Transient)
	TArray<class UGbxAbility*>                         PendingReplicatedAbilities;                               // 0x01C8(0x0010) (ZeroConstructor, Transient)
	TMap<class UClass*, class UGbxAbility*>            RegisteredAbilities;                                      // 0x01D8(0x0050) (ZeroConstructor, Transient)
	struct FGbxAbilityManagerComponentListLock         ListLock;                                                 // 0x0228(0x0020) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAbilities.GbxAbilityManagerComponent");
		return ptr;
	}


	bool RemoveAbility(class UClass* AbilityClass);
	bool HasAbility(class UClass* AbilityClass);
	class UGbxAbility* FindAbility(class UClass* AbilityClass);
	class UGbxAbility* AddAbility(const struct FGbxAbilitySpec& Spec);
};


// Class GbxAbilities.GbxAbilityAttributePropertyValueResolver
// 0x0028 (0x00D8 - 0x00B0)
class UGbxAbilityAttributePropertyValueResolver : public UAttributePropertyValueResolver
{
public:
	TSoftObjectPtr<class UClass>                       GbxAbilityClass;                                          // 0x00B0(0x0028) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAbilities.GbxAbilityAttributePropertyValueResolver");
		return ptr;
	}

};


// Class GbxAbilities.GbxAbilityEffectTargetResolutionData_Owner
// 0x0000 (0x0030 - 0x0030)
class UGbxAbilityEffectTargetResolutionData_Owner : public UGbxAbilityEffectTargetResolutionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAbilities.GbxAbilityEffectTargetResolutionData_Owner");
		return ptr;
	}

};


// Class GbxAbilities.GbxAbilityEffectTargetResolutionData_Self
// 0x0000 (0x0030 - 0x0030)
class UGbxAbilityEffectTargetResolutionData_Self : public UGbxAbilityEffectTargetResolutionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAbilities.GbxAbilityEffectTargetResolutionData_Self");
		return ptr;
	}

};


// Class GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxAbilityResourceControllerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_UnregisterResourcePoolDelegate(const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& Spec, struct FGbxAbilityResourceController_ResourcePoolDelegate* Controller);
	void STATIC_UnregisterConditionalDamageModifier(const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& Spec, struct FGbxAbilityResourceController_ConditionalDamageModifier* Controller);
	void STATIC_UnregisterAbilityDelegate(const struct FGbxAbilityResourceSpec_ScriptDelegate& Spec, struct FGbxAbilityResourceController_ScriptDelegate* Controller);
	void STATIC_RegisterResourcePoolDelegate(const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& Spec, struct FGbxAbilityResourceController_ResourcePoolDelegate* Controller);
	void STATIC_RegisterConditionalDamageModifier(const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& Spec, struct FGbxAbilityResourceController_ConditionalDamageModifier* Controller);
	void STATIC_RegisterAbilityDelegate(const struct FGbxAbilityResourceSpec_ScriptDelegate& Spec, struct FGbxAbilityResourceController_ScriptDelegate* Controller);
};


// Class GbxAbilities.GbxCondition_HasAbility
// 0x0008 (0x0090 - 0x0088)
class UGbxCondition_HasAbility : public UGbxCondition
{
public:
	class UClass*                                      AbilityClass;                                             // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAbilities.GbxCondition_HasAbility");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
