#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_CameraShake_Vertical_Horiz_Medium_Short_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraShake_Vertical_Horiz_Medium_Short.CameraShake_Vertical_Horiz_Medium_Short_C
// 0x0000 (0x0160 - 0x0160)
class UCameraShake_Vertical_Horiz_Medium_Short_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CameraShake_Vertical_Horiz_Medium_Short.CameraShake_Vertical_Horiz_Medium_Short_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
