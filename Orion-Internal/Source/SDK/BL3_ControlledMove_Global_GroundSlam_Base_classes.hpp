#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Global_GroundSlam_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C
// 0x0020 (0x08C8 - 0x08A8)
class UControlledMove_Global_GroundSlam_Base_C : public UOakControlledMove
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A8(0x0008) (Transient, DuplicateTransient)
	class APlayerController*                           PlayerController;                                         // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x08B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              HighGroundSlamThreshold;                                  // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C");
		return ptr;
	}


	void DoMelee();
	void GroundSlam_End(float Distance);
	void OnStart(float* MoveDuration, class AActor** TargetActor);
	void OnStop(bool* bInterrupted);
	void ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
