#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CameraBehavior_VehicleFocusDOF_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraBehavior_VehicleFocusDOF.CameraBehavior_VehicleFocusDOF_C
// 0x0000 (0x0C70 - 0x0C70)
class UCameraBehavior_VehicleFocusDOF_C : public UCameraBehavior_ScriptedDOF
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CameraBehavior_VehicleFocusDOF.CameraBehavior_VehicleFocusDOF_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
