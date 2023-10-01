#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_CM_GUN_Alisma_IBFueltoDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_CM_GUN_Alisma_IBFueltoDamage.Init_CM_GUN_Alisma_IBFuelToDamage_C
// 0x0008 (0x0038 - 0x0030)
class UInit_CM_GUN_Alisma_IBFuelToDamage_C : public UAttributeInitializer
{
public:
	class UObject*                                     Player;                                                   // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_CM_GUN_Alisma_IBFueltoDamage.Init_CM_GUN_Alisma_IBFuelToDamage_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
