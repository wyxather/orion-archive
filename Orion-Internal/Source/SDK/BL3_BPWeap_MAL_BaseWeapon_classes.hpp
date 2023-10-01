#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_MAL_BaseWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C
// 0x007C (0x0A48 - 0x09CC)
class ABPWeap_MAL_BaseWeapon_C : public ABPWeap_BaseWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D0(0x0008) (Transient, DuplicateTransient)
	float                                              ElementalInterpolationTimeline_ElementalAlpha_491B51944C4C5F786231C2B7EA1D51DB;// 0x09D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ElementalInterpolationTimeline__Direction_491B51944C4C5F786231C2B7EA1D51DB;// 0x09DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ElementalInterpolationTimeline;                           // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponChargeComponent*                      ChargeComponent_Mode_01;                                  // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWeaponChargeComponent*                      ChargeComponent_Mode_02;                                  // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 Em_ReloadCurve;                                           // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Em_ModeSwitchCurve;                                       // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PrimaryElementalBaseColor;                                // 0x0A08(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                PrimaryElementalHighlightColor;                           // 0x0A18(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SecondaryElementalBaseColor;                              // 0x0A28(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SecondaryElementalHighlightColor;                         // 0x0A38(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C");
		return ptr;
	}


	void GetChargePercent(float* ChargePercent);
	void UserConstructionScript();
	void ElementalInterpolationTimeline__FinishedFunc();
	void ElementalInterpolationTimeline__UpdateFunc();
	void SetPrimaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor);
	void OnSwitchToPrimary();
	void OnSwitchToSecondary();
	void Initialize_Elemental_Emissive();
	void SetPrimary();
	void SetSecondary();
	void K2_OnWeaponSkinApplied();
	void ReceiveBeginPlay();
	void Notify_ReloadStarted(bool* bAutoReload);
	void Weapon_NotifyEquipped();
	void Event_ModeSwitched();
	void SetSecondaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor);
	void PutDown_Event(class AWeapon* EventWeapon);
	void WeaponAttached();
	void ExecuteUbergraph_BPWeap_MAL_BaseWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
