#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SR_JAK_Reload_M2B1_Single_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_SR_JAK_Reload_M2B1_Single.Action_SR_JAK_Reload_M2B1_Single_C
// 0x0000 (0x0220 - 0x0220)
class UAction_SR_JAK_Reload_M2B1_Single_C : public UAction_Weapon_Reload_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_SR_JAK_Reload_M2B1_Single.Action_SR_JAK_Reload_M2B1_Single_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
