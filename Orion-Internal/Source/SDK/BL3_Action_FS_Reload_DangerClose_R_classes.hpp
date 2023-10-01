#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_FS_Reload_DangerClose_R_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_FS_Reload_DangerClose_R.Action_FS_Reload_DangerClose_R_C
// 0x0010 (0x0228 - 0x0218)
class UAction_FS_Reload_DangerClose_R_C : public UOakAction_Anim
{
public:
	class AOakCharacter*                               OakCharacter;                                             // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWeapon_Hardpoint_FalconStrike_C*            NewWeapon;                                                // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_FS_Reload_DangerClose_R.Action_FS_Reload_DangerClose_R_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
