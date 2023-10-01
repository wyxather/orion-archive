#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_VanquisherFireRate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_VanquisherFireRate.Ability_VanquisherFireRate_C
// 0x0010 (0x0108 - 0x00F8)
class UAbility_VanquisherFireRate_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter*                               OakChar;                                                  // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_VanquisherFireRate.Ability_VanquisherFireRate_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void OnActivated();
	void ExecuteUbergraph_Ability_VanquisherFireRate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
