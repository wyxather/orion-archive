#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Enemies_PlayKnockdownInAir_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Enemies_PlayKnockdownInAir.Action_Enemies_PlayKnockdownInAir_C
// 0x0000 (0x0218 - 0x0218)
class UAction_Enemies_PlayKnockdownInAir_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Enemies_PlayKnockdownInAir.Action_Enemies_PlayKnockdownInAir_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
