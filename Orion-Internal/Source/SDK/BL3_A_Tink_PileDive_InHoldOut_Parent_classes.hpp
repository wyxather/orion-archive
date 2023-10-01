#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tink_PileDive_InHoldOut_Parent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C
// 0x0018 (0x0250 - 0x0238)
class UA_Tink_PileDive_InHoldOut_Parent_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      CurrentPile;                                              // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      MySelf;                                                   // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C");
		return ptr;
	}


	void TinkOutOfPile();
	void SpawnTurret();
	void TinkEnterPile();
	void TinkExitPile();
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_A_Tink_PileDive_InHoldOut_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
