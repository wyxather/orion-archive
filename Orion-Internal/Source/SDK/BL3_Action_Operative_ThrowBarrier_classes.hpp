#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_ThrowBarrier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C
// 0x0008 (0x0280 - 0x0278)
class UAction_Operative_ThrowBarrier_C : public UOakAction_Anim_ActionAbility_Barrier
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnBeginBringUpWeapon(class AActor** Actor);
	void AnimNotify_ThrowProjectile();
	void AN_PerformBarrierTossFeedback();
	void ExecuteUbergraph_Action_Operative_ThrowBarrier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
