#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_EnforcerShared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_EnforcerShared.BPChar_EnforcerShared_C
// 0x0042 (0x23C3 - 0x2381)
class ABPChar_EnforcerShared_C : public ABPChar_Enemy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2381(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2388(0x0008) (Transient, DuplicateTransient)
	class UAIShieldSpawningComponent_C*                AIShieldSpawningComponent;                                // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyAccessoryComponent*                    FoleyAccessory_HollowMetal;                               // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyAccessoryComponent*                    FoleyAccessory_Solid_Metal;                               // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyAccessoryComponent*                    FoleyAccessory_DogTag;                                    // 0x23A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        DefaultAudioComponent;                                    // 0x23B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyMainComponent*                         FoleyMain;                                                // 0x23B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanShieldStagger;                                         // 0x23C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanGrenadeStagger;                                        // 0x23C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanExtremityStagger;                                      // 0x23C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_EnforcerShared.BPChar_EnforcerShared_C");
		return ptr;
	}


	void Enforcer_GetType(TEnumAsByte<Enum_EnforcerVariants>* EnforcerType);
	void UserConstructionScript();
	void Enforcer_Anointed_Death();
	void Enforcer_TransformToGun();
	void Enforcer_AnointedJoe_SpawnAI();
	void Enforcer_AnointedJoe_ShieldDown();
	void Enforcer_AllowButtStagger(bool AllowButtStagger);
	void Enforcer_ForcedDirectionalStagger(const struct FDamageReactionEventSummary& DamageSummary);
	void CE_ShieldStagger(const struct FDamageReactionEventSummary& Damage_Summary);
	void CE_ExtremityStagger(const struct FDamageReactionEventSummary& Damage_Summary);
	void CE_GrenadeStagger(const struct FDamageReactionEventSummary& Damage_Summary);
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_EnforcerBasic(class AActor* DamageReceiver, class AActor* DamageCauser);
	void CE_GoreHeadHideBeard(const struct FGoreRegionEventSummary& GoreSummary);
	void ExecuteUbergraph_BPChar_EnforcerShared(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
