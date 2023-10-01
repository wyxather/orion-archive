#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PhaseTranceSingularity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C
// 0x0020 (0x05A8 - 0x0588)
class ABP_PhaseTranceSingularity_C : public APhaseTranceSingularityActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0588(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USingularityComponent*                       SingularityComponent;                                     // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             ParticleSystemShutdownSystem;                             // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C");
		return ptr;
	}


	void GetIgnoredActors(TArray<class AActor*>* res);
	void GetSingularityDuration(float* res);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ConfigureSingularity();
	void OnShutdownRequested(bool* bForced);
	void CleanShutdownMulticast();
	void ReleaseParticleSystem();
	void ExecuteUbergraph_BP_PhaseTranceSingularity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
