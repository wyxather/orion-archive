#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SR_JAK_Reload_M3B3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_SR_JAK_Reload_M3B3.Action_SR_JAK_Reload_M3B3_C
// 0x0000 (0x0228 - 0x0228)
class UAction_SR_JAK_Reload_M3B3_C : public UAction_SR_JAK_Reload_M3B1_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_SR_JAK_Reload_M3B3.Action_SR_JAK_Reload_M3B3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
