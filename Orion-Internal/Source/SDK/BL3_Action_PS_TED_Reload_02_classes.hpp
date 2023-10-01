#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PS_TED_Reload_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PS_TED_Reload_02.Action_PS_TED_Reload_02_C
// 0x0000 (0x0228 - 0x0228)
class UAction_PS_TED_Reload_02_C : public UAction_PS_TED_Reload_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PS_TED_Reload_02.Action_PS_TED_Reload_02_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
