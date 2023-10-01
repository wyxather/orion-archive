#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_PhaseCast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_PhaseCast.StandIn_PhaseCast_C
// 0x0028 (0x05A8 - 0x0580)
class AStandIn_PhaseCast_C : public AStandInAuxiliaryActor_Siren
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   GhostArms;                                                // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   HeadMesh;                                                 // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Mesh;                                                     // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_PhaseCast.StandIn_PhaseCast_C");
		return ptr;
	}


	void SetGhostMaterials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_PhaseCast(class UGbxCustomizationData* Customization);
	void ExecuteUbergraph_StandIn_PhaseCast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
