#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_AR_JAK_Reload_01_Bolt_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_AR_JAK_Reload_01_Bolt_02.Action_AR_JAK_Reload_01_Bolt_02_C
// 0x0000 (0x0220 - 0x0220)
class UAction_AR_JAK_Reload_01_Bolt_02_C : public UAction_AR_JAK_Reload_01__Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AR_JAK_Reload_01_Bolt_02.Action_AR_JAK_Reload_01_Bolt_02_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
