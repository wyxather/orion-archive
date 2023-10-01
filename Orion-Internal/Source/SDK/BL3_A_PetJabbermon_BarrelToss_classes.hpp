#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_BarrelToss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C
// 0x0018 (0x0240 - 0x0228)
class UA_PetJabbermon_BarrelToss_C : public UA_Pet_AttackCommand_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      NewBarrelActor;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter*                               OwnerChar;                                                // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C");
		return ptr;
	}


	void Notify_Throw();
	void OnServerBegin(class AActor** Actor);
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_A_PetJabbermon_BarrelToss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
