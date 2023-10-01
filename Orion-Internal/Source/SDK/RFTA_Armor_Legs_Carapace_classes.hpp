#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Armor_Legs_Carapace_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Armor_Legs_Carapace.Armor_Legs_Carapace_C
// 0x0008 (0x05D8 - 0x05D0)
class AArmor_Legs_Carapace_C : public AArmor_Legs_Base_C
{
public:
	class URemnantEntitlement_C*                       RemnantEntitlement;                                       // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Armor_Legs_Carapace.Armor_Legs_Carapace_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
