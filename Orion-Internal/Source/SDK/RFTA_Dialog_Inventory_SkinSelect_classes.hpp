#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Inventory_SkinSelect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dialog_Inventory_SkinSelect.Dialog_Inventory_SkinSelect_C
// 0x0000 (0x03DD - 0x03DD)
class ADialog_Inventory_SkinSelect_C : public ADialog_InGameBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Inventory_SkinSelect.Dialog_Inventory_SkinSelect_C");
		return ptr;
	}


	void Init(int* ItemID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
