#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionNotify_ShowMag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionNotify_ShowMag.ActionNotify_ShowMag_C
// 0x0000 (0x0040 - 0x0040)
class UActionNotify_ShowMag_C : public UAnimNotify_GbxAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionNotify_ShowMag.ActionNotify_ShowMag_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
