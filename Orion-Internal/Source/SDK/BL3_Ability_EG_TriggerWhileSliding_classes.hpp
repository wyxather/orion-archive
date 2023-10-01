#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_EG_TriggerWhileSliding_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C
// 0x0010 (0x0108 - 0x00F8)
class UAbility_EG_TriggerWhileSliding_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter*                               OakChar;                                                  // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void OnRegistered();
	void ExecuteUbergraph_Ability_EG_TriggerWhileSliding(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
