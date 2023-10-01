#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_ATL_BaseWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C
// 0x0098 (0x0A64 - 0x09CC)
class ABPWeap_ATL_BaseWeapon_C : public ABPWeap_BaseWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D0(0x0008) (Transient, DuplicateTransient)
	TArray<class AActor*>                              HomingTargets;                                            // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AProj_Weapon_BaseProjectile_C*>       ActiveTrackers;                                           // 0x09E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              TrackerLifetime;                                          // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasFiredRecently;                                         // 0x09FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09FD(0x0003) MISSED OFFSET
	int                                                CurrentTargetIndex;                                       // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BaseColor;                                                // 0x0A04(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HighlightColor;                                           // 0x0A14(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MarkerBaseColor;                                          // 0x0A24(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MarkerHighlightColor;                                     // 0x0A34(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HomingColorBase;                                          // 0x0A44(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HomingColorHighlight;                                     // 0x0A54(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C");
		return ptr;
	}


	void InitHoming();
	void InitMarkerGlow();
	void InitBaseGlow();
	void AddHomingTarget(class AActor* HomingTarget);
	void RemoveHomingTarget(class AActor* HomingTarget);
	void UserConstructionScript();
	void Initialize_Elemental_Emissive();
	void NotifySwitchedMode_Event();
	void SetEmissiveData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor, const struct FLinearColor& MarkerBaseColor, const struct FLinearColor& MarkerHighlightColor, const struct FLinearColor& HomingOverrideBase, const struct FLinearColor& NewParamHomingOverrideHighlight);
	void ReEvaluateEmissive();
	void ReceiveBeginPlay();
	void Notify_ReloadStarted(bool* bAutoReload);
	void Weapon_NotifyPutDown(class AWeapon* EventWeapon);
	void ExecuteUbergraph_BPWeap_ATL_BaseWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
