#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_CalledShot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Operative_CalledShot.Action_Operative_CalledShot_C
// 0x0008 (0x0280 - 0x0278)
class UAction_Operative_CalledShot_C : public UOakAction_Anim_ActionAbility_GRMLN
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Operative_CalledShot.Action_Operative_CalledShot_C");
		return ptr;
	}


	void FireAtTarget();
	void GetCommandRingActor(class ACommandRing_Operative_GRMLN** res);
	void StopTargetingBeam();
	void StartTargetingBeam();
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void AN_LoopStarted();
	void StopButtonPress();
	void AN_ShowDevice();
	void AN_HideDevice();
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_Operative_CalledShot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
