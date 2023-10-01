#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPMenu_GFxVendingMachineMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPMenu_GFxVendingMachineMenu.BPMenu_GFxVendingMachineMenu_C
// 0x0000 (0x10F0 - 0x10F0)
class UBPMenu_GFxVendingMachineMenu_C : public UGFxVendingMachineMenu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPMenu_GFxVendingMachineMenu.BPMenu_GFxVendingMachineMenu_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
