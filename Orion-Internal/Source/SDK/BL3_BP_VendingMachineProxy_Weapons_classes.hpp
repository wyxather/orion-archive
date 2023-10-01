#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VendingMachineProxy_Weapons_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VendingMachineProxy_Weapons.BP_VendingMachineProxy_Weapons_C
// 0x0000 (0x0A9C - 0x0A9C)
class ABP_VendingMachineProxy_Weapons_C : public ABP_VendingMachineProxyBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VendingMachineProxy_Weapons.BP_VendingMachineProxy_Weapons_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
