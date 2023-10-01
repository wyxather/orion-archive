#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_NavLerpDefault_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_NavLerpDefault.Action_NavLerpDefault_C
// 0x0000 (0x00E8 - 0x00E8)
class UAction_NavLerpDefault_C : public UGbxAction_NavLerp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_NavLerpDefault.Action_NavLerpDefault_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
