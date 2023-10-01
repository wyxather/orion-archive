#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Camera_Dead_Detached_Fixed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Camera_Dead_Detached_Fixed.Camera_Dead_Detached_Fixed_C
// 0x0000 (0x0050 - 0x0050)
class UCamera_Dead_Detached_Fixed_C : public UStationarySpectatorCameraState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Camera_Dead_Detached_Fixed.Camera_Dead_Detached_Fixed_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
