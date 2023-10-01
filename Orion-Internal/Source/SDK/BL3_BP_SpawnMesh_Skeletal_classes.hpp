#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_SpawnMesh_Skeletal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C
// 0x0010 (0x04F8 - 0x04E8)
class ABP_SpawnMesh_Skeletal_C : public ABP_SpawnMesh_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SpawnMeshSkel;                                            // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C");
		return ptr;
	}


	void SetAnimationTickEnabled(bool bEnabled);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__GbxAction_K2Node_ComponentBoundEvent_1_ActionComponentStopDelegate__DelegateSignature_SpawnMesh_ZipLine(class UClass* Action, EGbxActionEndState EndState);
	void ExecuteUbergraph_BP_SpawnMesh_Skeletal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
