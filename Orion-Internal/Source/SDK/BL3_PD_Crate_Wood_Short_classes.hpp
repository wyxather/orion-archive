#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Crate_Wood_Short_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PD_Crate_Wood_Short.PD_Crate_Wood_Short_C
// 0x0000 (0x0559 - 0x0559)
class APD_Crate_Wood_Short_C : public ABP_LootableDestructible_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PD_Crate_Wood_Short.PD_Crate_Wood_Short_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
