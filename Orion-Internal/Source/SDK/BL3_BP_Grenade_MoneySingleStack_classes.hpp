#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Grenade_MoneySingleStack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Grenade_MoneySingleStack.BP_Grenade_MoneySingleStack_C
// 0x0000 (0x04F0 - 0x04F0)
class ABP_Grenade_MoneySingleStack_C : public ABP_Money_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_MoneySingleStack.BP_Grenade_MoneySingleStack_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
