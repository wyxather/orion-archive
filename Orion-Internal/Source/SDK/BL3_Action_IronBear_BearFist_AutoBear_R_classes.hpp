#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronBear_BearFist_AutoBear_R_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_IronBear_BearFist_AutoBear_R.Action_IronBear_BearFist_AutoBear_R_C
// 0x0020 (0x0238 - 0x0218)
class UAction_IronBear_BearFist_AutoBear_R_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class ABPChar_IronBear_C*                          IronBear;                                                 // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWeaponType_Hardpoints_BearFist_C*           BearFist;                                                 // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWeaponSlotData*                             WeaponSlot;                                               // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_IronBear_BearFist_AutoBear_R.Action_IronBear_BearFist_AutoBear_R_C");
		return ptr;
	}


	void IronBearMeleeNotify();
	void OnServerBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_IronBear_BearFist_AutoBear_R(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
