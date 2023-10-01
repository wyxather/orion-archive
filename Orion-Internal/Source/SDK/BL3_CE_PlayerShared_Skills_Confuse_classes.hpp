#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CE_PlayerShared_Skills_Confuse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C
// 0x0020 (0x0168 - 0x0148)
class UCE_PlayerShared_Skills_Confuse_C : public UOakAction_CoordinatedEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (Transient, DuplicateTransient)
	class UTeamComponent*                              TeamComp;                                                 // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTeam*                                       ConfusedActorTeam;                                        // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter*                               ConfusedActor;                                            // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C");
		return ptr;
	}


	void On_Confuse_Target_death(class AActor* DamageReceiver, class AActor* DamageCauser);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_CE_PlayerShared_Skills_Confuse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
