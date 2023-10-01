#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Exit_Air_IronBear_End_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Exit_Air_IronBear_End.Action_Exit_Air_IronBear_End_C
// 0x0000 (0x0218 - 0x0218)
class UAction_Exit_Air_IronBear_End_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Exit_Air_IronBear_End.Action_Exit_Air_IronBear_End_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
