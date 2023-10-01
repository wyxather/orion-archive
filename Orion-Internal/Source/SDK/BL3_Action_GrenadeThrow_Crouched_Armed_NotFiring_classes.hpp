#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_GrenadeThrow_Crouched_Armed_NotFiring_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_GrenadeThrow_Crouched_Armed_NotFiring.Action_GrenadeThrow_Crouched_Armed_NotFiring_C
// 0x0008 (0x0230 - 0x0228)
class UAction_GrenadeThrow_Crouched_Armed_NotFiring_C : public UAction_GrenadeThrow_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_GrenadeThrow_Crouched_Armed_NotFiring.Action_GrenadeThrow_Crouched_Armed_NotFiring_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_GrenadeThrow_Crouched_Armed_NotFiring(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
