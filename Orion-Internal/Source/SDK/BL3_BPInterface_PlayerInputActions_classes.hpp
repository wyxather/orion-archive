#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInterface_PlayerInputActions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C
// 0x0000 (0x0028 - 0x0028)
class UBPInterface_PlayerInputActions_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C");
		return ptr;
	}


	void DoMelee();
	void GroundSlam_End(float Distance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
