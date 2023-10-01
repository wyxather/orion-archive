#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PS_Vlad_Reload_02_C_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PS_Vlad_Reload_02_C.Action_PS_Vlad_Reload_02_C_C
// 0x0000 (0x0218 - 0x0218)
class UAction_PS_Vlad_Reload_02_C_C : public UAction_PS_Vlad_Reload_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PS_Vlad_Reload_02_C.Action_PS_Vlad_Reload_02_C_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
