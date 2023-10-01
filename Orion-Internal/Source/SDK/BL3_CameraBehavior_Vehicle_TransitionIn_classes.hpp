#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CameraBehavior_Vehicle_TransitionIn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C
// 0x0018 (0x0048 - 0x0030)
class UCameraBehavior_Vehicle_TransitionIn_C : public UCameraBehavior
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (Transient, DuplicateTransient)
	class UGbxActionComponent*                         ActionComponent;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      PlayerMesh;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C");
		return ptr;
	}


	void Update(float* DeltaTime, class UCameraState** State);
	void Start(class UCameraState** State);
	void ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
