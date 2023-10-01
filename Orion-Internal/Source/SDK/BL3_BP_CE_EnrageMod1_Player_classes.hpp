#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_EnrageMod1_Player_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C
// 0x0021 (0x0199 - 0x0178)
class UBP_CE_EnrageMod1_Player_C : public UOakAction_CoordinatedEffect_ActionAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0178(0x0008) (Transient, DuplicateTransient)
	struct FStatusEffectInstanceReference              Mod1SE;                                                   // 0x0180(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bAppliedScreenParticle;                                   // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C");
		return ptr;
	}


	void IsLocallyControlled(bool* bRes);
	void OnBegin(class AActor** Actor);
	void OnServerBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_BP_CE_EnrageMod1_Player(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
