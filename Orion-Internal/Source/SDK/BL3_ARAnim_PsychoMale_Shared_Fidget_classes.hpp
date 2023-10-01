#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_PsychoMale_Shared_Fidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARAnim_PsychoMale_Shared_Fidget.ARAnim_PsychoMale_Shared_Fidget_C
// 0x0000 (0x0238 - 0x0238)
class UARAnim_PsychoMale_Shared_Fidget_C : public UOakAction_RandomAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARAnim_PsychoMale_Shared_Fidget.ARAnim_PsychoMale_Shared_Fidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
