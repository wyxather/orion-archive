#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tannis_Loop_UseKeyboard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Tannis_Loop_UseKeyboard.A_Tannis_Loop_UseKeyboard_C
// 0x0000 (0x03B8 - 0x03B8)
class UA_Tannis_Loop_UseKeyboard_C : public UGbxAction_Loop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Tannis_Loop_UseKeyboard.A_Tannis_Loop_UseKeyboard_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
