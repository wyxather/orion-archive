#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionNotify_EquipWepInterruptable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionNotify_EquipWepInterruptable.ActionNotify_EquipWepInterruptable_C
// 0x0000 (0x0040 - 0x0040)
class UActionNotify_EquipWepInterruptable_C : public UAnimNotify_GbxAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionNotify_EquipWepInterruptable.ActionNotify_EquipWepInterruptable_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
