#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_RecallOrb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C
// 0x002F (0x02E8 - 0x02B9)
class UAction_Phasetrance_RecallOrb_C : public UAction_Phasetrance_Common_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (Transient, DuplicateTransient)
	class UActionSkill_Siren_Phasetrance_C*            Phasetrance;                                              // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AProj_Siren_DLCSkill_WalkingPotato_Base_C*   Orb;                                                      // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   GhostArms3rd;                                             // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   GhostArms1st;                                             // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C");
		return ptr;
	}


	void AN_SummonOrb();
	void OnServerBegin(class AActor** Actor);
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_Action_Phasetrance_RecallOrb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
