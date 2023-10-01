#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SG_JAK_Reload_Break_B3_1Shell_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_SG_JAK_Reload_Break_B3_1Shell.Action_SG_JAK_Reload_Break_B3_1Shell_C
// 0x0000 (0x0220 - 0x0220)
class UAction_SG_JAK_Reload_Break_B3_1Shell_C : public UAction_Weapon_Reload_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_SG_JAK_Reload_Break_B3_1Shell.Action_SG_JAK_Reload_Break_B3_1Shell_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
