#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACharge_Varkid_Shared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ACharge_Varkid_Shared.ACharge_Varkid_Shared_C
// 0x0008 (0x0148 - 0x0140)
class UACharge_Varkid_Shared_C : public UGbxAction_AICharge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0140(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ACharge_Varkid_Shared.ACharge_Varkid_Shared_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void Notify_HitTarget();
	void OnMiss(class AActor** Actor);
	void OnLoop(class AActor** Actor);
	void OnHitWall(class AActor** Actor);
	void OnReachCliff(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void Notify_StopDamage();
	void ExecuteUbergraph_ACharge_Varkid_Shared(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
