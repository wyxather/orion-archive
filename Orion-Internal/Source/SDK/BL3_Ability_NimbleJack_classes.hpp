#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_NimbleJack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_NimbleJack.Ability_NimbleJack_C
// 0x0010 (0x0108 - 0x00F8)
class UAbility_NimbleJack_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class UPawnMovementComponent*                      CharMovement;                                             // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_NimbleJack.Ability_NimbleJack_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void OnRegistered();
	void ExecuteUbergraph_Ability_NimbleJack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
