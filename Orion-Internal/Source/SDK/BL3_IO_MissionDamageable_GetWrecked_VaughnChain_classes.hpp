#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionDamageable_GetWrecked_VaughnChain_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionDamageable_GetWrecked_VaughnChain.IO_MissionDamageable_GetWrecked_VaughnChain_C
// 0x0020 (0x0748 - 0x0728)
class AIO_MissionDamageable_GetWrecked_VaughnChain_C : public AIO_MissionDamageable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0728(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABPChar_Vaughn_C*                            Vaughn;                                                   // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionDamageable_GetWrecked_VaughnChain.IO_MissionDamageable_GetWrecked_VaughnChain_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnAnimEnd_64FF6F3949E2D5143C27098CC8942B5A();
	void OnEnd_64FF6F3949E2D5143C27098CC8942B5A(EGbxActionEndState EndState, class AActor* Actor);
	void OnAnimEnd_A7A4ABFF4DE682A01AE89D9448771019();
	void OnEnd_A7A4ABFF4DE682A01AE89D9448771019(EGbxActionEndState EndState, class AActor* Actor);
	void OnAnimEnd_3454FAEE4E3389374995478CE079B796();
	void OnEnd_3454FAEE4E3389374995478CE079B796(EGbxActionEndState EndState, class AActor* Actor);
	void PlayFeedback_Destroying();
	void PlayFeedback_Destroyed();
	void BindToVaughn(class ABPChar_Vaughn_C* BPChar_Vaughn);
	void PlayFeedback_Default();
	void PlayFeedback_Damageable();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_IO_MissionDamageable_GetWrecked_VaughnChain(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
