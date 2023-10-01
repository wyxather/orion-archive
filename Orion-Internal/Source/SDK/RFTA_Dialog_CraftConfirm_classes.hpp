#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_CraftConfirm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dialog_CraftConfirm.Dialog_CraftConfirm_C
// 0x0000 (0x03DD - 0x03DD)
class ADialog_CraftConfirm_C : public ADialog_InGameBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_CraftConfirm.Dialog_CraftConfirm_C");
		return ptr;
	}


	void Init(struct FRecipeInfo* RecipeInfo);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
