#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SR_JAK_Reload_M2B1_Single_NoScope_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_SR_JAK_Reload_M2B1_Single_NoScope.Action_SR_JAK_Reload_M2B1_Single_NoScope_C
// 0x0000 (0x0220 - 0x0220)
class UAction_SR_JAK_Reload_M2B1_Single_NoScope_C : public UAction_Weapon_Reload_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_SR_JAK_Reload_M2B1_Single_NoScope.Action_SR_JAK_Reload_M2B1_Single_NoScope_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
