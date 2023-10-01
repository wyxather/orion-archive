#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronBear_BearFist_Mod3_End_L_Short_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_IronBear_BearFist_Mod3_End_L_Short.Action_IronBear_BearFist_Mod3_End_L_Short_C
// 0x0018 (0x0230 - 0x0218)
class UAction_IronBear_BearFist_Mod3_End_L_Short_C : public UOakAction_Anim
{
public:
	class ABPChar_IronBear_C*                          IronBear;                                                 // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWeaponType_Hardpoints_BearFist_C*           BearFist;                                                 // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWeaponSlotData*                             WeaponSlot;                                               // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_IronBear_BearFist_Mod3_End_L_Short.Action_IronBear_BearFist_Mod3_End_L_Short_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
