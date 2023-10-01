#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronCub_BearFist_Right_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C
// 0x0020 (0x0238 - 0x0218)
class UAction_IronCub_BearFist_Right_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AWeaponType_Hardpoints_BearFist_C*           BearFist;                                                 // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABPChar_IronCub_V3_C*                        IronCub;                                                  // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWeaponSlotData*                             Slot;                                                     // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C");
		return ptr;
	}


	void AN_Melee();
	void OnServerBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_IronCub_BearFist_Right(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
