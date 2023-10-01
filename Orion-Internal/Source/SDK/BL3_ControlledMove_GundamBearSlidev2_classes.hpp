#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_GundamBearSlidev2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControlledMove_GundamBearSlidev2.ControlledMove_GundamBearSlidev2_C
// 0x0018 (0x08C0 - 0x08A8)
class UControlledMove_GundamBearSlidev2_C : public UOakControlledMove
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A8(0x0008) (Transient, DuplicateTransient)
	class UMeshComponent*                              NewMesh;                                                  // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      NewInstigator;                                            // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_GundamBearSlidev2.ControlledMove_GundamBearSlidev2_C");
		return ptr;
	}


	void OnStart(float* MoveDuration, class AActor** TargetActor);
	void OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator);
	void ExecuteUbergraph_ControlledMove_GundamBearSlidev2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
