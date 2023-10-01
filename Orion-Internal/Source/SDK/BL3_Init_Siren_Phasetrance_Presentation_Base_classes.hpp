#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Siren_Phasetrance_Presentation_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Siren_Phasetrance_Presentation_Base.Init_Siren_Phasetrance_Presentation_Base_C
// 0x0018 (0x0048 - 0x0030)
class UInit_Siren_Phasetrance_Presentation_Base_C : public UAttributeInitializer
{
public:
	class UOakActionAbilityAugmentData_PhaseTrance_Attack* AttackData;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UOakActionAbilityAugmentData_PhaseTrance_Effect* EffectData;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UOakActionAbilityAugmentData_PhaseTrance_Element* ElementData;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Siren_Phasetrance_Presentation_Base.Init_Siren_Phasetrance_Presentation_Base_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
