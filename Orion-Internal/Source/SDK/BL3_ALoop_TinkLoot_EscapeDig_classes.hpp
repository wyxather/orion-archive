#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALoop_TinkLoot_EscapeDig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C
// 0x0010 (0x03C8 - 0x03B8)
class UALoop_TinkLoot_EscapeDig_C : public UGbxAction_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C");
		return ptr;
	}


	void StartDig();
	void Escape();
	void OnServerBegin(class AActor** Actor);
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void Notify_DigDust();
	void ExecuteUbergraph_ALoop_TinkLoot_EscapeDig(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
