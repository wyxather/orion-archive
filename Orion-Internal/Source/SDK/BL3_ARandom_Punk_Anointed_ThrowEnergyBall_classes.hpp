#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_Punk_Anointed_ThrowEnergyBall_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C
// 0x0010 (0x0248 - 0x0238)
class UARandom_Punk_Anointed_ThrowEnergyBall_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void MeleeStrike();
	void ThrowLeftHand();
	void ExecuteUbergraph_ARandom_Punk_Anointed_ThrowEnergyBall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
