#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WeaponType_Hardpoints_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C
// 0x0048 (0x0A88 - 0x0A40)
class AWeaponType_Hardpoints_Base_C : public AOakWeapon_IronBearHardPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	class UGbxSkeletalMeshComponent*                   GbxSkeletalMesh;                                          // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponClipReloadComponent*                  WeaponClipReload;                                         // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponAmmoPoolComponent*                    WeaponAmmoPool;                                           // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPAnim_IronBear_1st_C*                      AnimGraph_1st;                                            // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UBPAnim_IronBear_3rd_C*                      AnimGraph_3rd;                                            // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UBPEventHub_Gunner_C*                        EventHub;                                                 // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isIronCub;                                                // 0x0A78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A79(0x0007) MISSED OFFSET
	class UBPAnim_IronCub_C*                           AnimGraph_IronCub;                                        // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C");
		return ptr;
	}


	void GetIronCubAnimBP(class UBPAnim_IronCub_C** AnimGraph);
	void GetIronBearAnimBPs(class UBPAnim_IronBear_1st_C** AnimGraph_1st, class UBPAnim_IronBear_3rd_C** AnimGraph_3rd);
	void UserConstructionScript();
	void BeginHardPointAction();
	void EndHardPointAction();
	void K2_Initialize();
	void InitializeHardPointIronCub();
	void ExecuteUbergraph_WeaponType_Hardpoints_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
