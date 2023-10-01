#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Melee_Operative_BarrierBash_Success_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Melee_Operative_BarrierBash_Success.Action_Melee_Operative_BarrierBash_Success_C
// 0x0008 (0x0248 - 0x0240)
class UAction_Melee_Operative_BarrierBash_Success_C : public UAction_Melee_Operative_Success_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Melee_Operative_BarrierBash_Success.Action_Melee_Operative_BarrierBash_Success_C");
		return ptr;
	}


	void TurnOffOperativeBlades();
	void TurnOnOperativeBlades();
	void ExecuteUbergraph_Action_Melee_Operative_BarrierBash_Success(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
