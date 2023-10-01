#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Camera_Aim_Scoped_Crouch_Extend_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Camera_Aim_Scoped_Crouch_Extend.Camera_Aim_Scoped_Crouch_Extend_C
// 0x0000 (0x0288 - 0x0288)
class UCamera_Aim_Scoped_Crouch_Extend_C : public UCamera_Aim_Scoped_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Camera_Aim_Scoped_Crouch_Extend.Camera_Aim_Scoped_Crouch_Extend_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
