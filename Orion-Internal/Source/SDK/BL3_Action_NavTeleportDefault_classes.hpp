#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_NavTeleportDefault_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_NavTeleportDefault.Action_NavTeleportDefault_C
// 0x0000 (0x00E8 - 0x00E8)
class UAction_NavTeleportDefault_C : public UGbxAction_NavLerp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_NavTeleportDefault.Action_NavTeleportDefault_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
