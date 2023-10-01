#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AttInit_MoxxiEvent_ActionSkillCooldown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AttInit_MoxxiEvent_ActionSkillCooldown.AttInit_MoxxiEvent_ActionSkillCooldown_C
// 0x0008 (0x0038 - 0x0030)
class UAttInit_MoxxiEvent_ActionSkillCooldown_C : public UAttributeInitializer
{
public:
	class UDataTable*                                  DataTable;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AttInit_MoxxiEvent_ActionSkillCooldown.AttInit_MoxxiEvent_ActionSkillCooldown_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
