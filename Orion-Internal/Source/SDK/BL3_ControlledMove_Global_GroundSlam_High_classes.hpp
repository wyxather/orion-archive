#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Global_GroundSlam_High_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControlledMove_Global_GroundSlam_High.ControlledMove_Global_GroundSlam_High_C
// 0x0000 (0x08C8 - 0x08C8)
class UControlledMove_Global_GroundSlam_High_C : public UControlledMove_Global_GroundSlam_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_Global_GroundSlam_High.ControlledMove_Global_GroundSlam_High_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
