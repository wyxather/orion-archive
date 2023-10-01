#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_PetSkag_HornKnockupTest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C
// 0x0008 (0x08B0 - 0x08A8)
class UControlledMove_PetSkag_HornKnockupTest_C : public UOakControlledMove
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C");
		return ptr;
	}


	void OnStop(bool* bInterrupted);
	void OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator);
	void ExecuteUbergraph_ControlledMove_PetSkag_HornKnockupTest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
