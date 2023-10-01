#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Siren_Phasetrance_QuickenBonus_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Siren_Phasetrance_QuickenBonus.Init_Siren_Phasetrance_QuickenBonus_C
// 0x0018 (0x0048 - 0x0030)
class UInit_Siren_Phasetrance_QuickenBonus_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                       QuickenScalar;                                            // 0x0030(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Siren_Phasetrance_QuickenBonus.Init_Siren_Phasetrance_QuickenBonus_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
