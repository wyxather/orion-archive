#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Camera_Aim_Scoped_Standing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Camera_Aim_Scoped_Standing.Camera_Aim_Scoped_Standing_C
// 0x0000 (0x0288 - 0x0288)
class UCamera_Aim_Scoped_Standing_C : public UCamera_Aim_Scoped_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Camera_Aim_Scoped_Standing.Camera_Aim_Scoped_Standing_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
