#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CameraBehavior_DefaultFocusDOF_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraBehavior_DefaultFocusDOF.CameraBehavior_DefaultFocusDOF_C
// 0x0000 (0x12B0 - 0x12B0)
class UCameraBehavior_DefaultFocusDOF_C : public UCameraBehavior_FocusDOF
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CameraBehavior_DefaultFocusDOF.CameraBehavior_DefaultFocusDOF_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
