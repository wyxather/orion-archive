#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Beastmaster_Trap_Mod5Amount_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Beastmaster_Trap_Mod5Amount.Init_Beastmaster_Trap_Mod5Amount_C
// 0x0018 (0x0048 - 0x0030)
class UInit_Beastmaster_Trap_Mod5Amount_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                       MaxDrops;                                                 // 0x0030(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Beastmaster_Trap_Mod5Amount.Init_Beastmaster_Trap_Mod5Amount_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
