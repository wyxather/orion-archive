#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_PsychoMale_Shared_Launch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_PsychoMale_Shared_Launch.AHitReact_PsychoMale_Shared_Launch_C
// 0x0000 (0x0208 - 0x0208)
class UAHitReact_PsychoMale_Shared_Launch_C : public UGbxAction_Launch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_PsychoMale_Shared_Launch.AHitReact_PsychoMale_Shared_Launch_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
