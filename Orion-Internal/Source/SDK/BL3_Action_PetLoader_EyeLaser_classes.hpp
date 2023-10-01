#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_EyeLaser_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C
// 0x0030 (0x03E8 - 0x03B8)
class UAction_PetLoader_EyeLaser_C : public UGbxAction_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class UBPEventHub_Beastmaster_C*                   EventHubOwner;                                            // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EyeBeamSocket;                                            // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWwisePlaybackInstance                      EyeBeamAudioPlayback;                                     // 0x03D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C");
		return ptr;
	}


	void AttackCommandUsed();
	void CustomEvent();
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void Start_EyeLaser();
	void Stop_EyeLaser();
	void CustomEvent_4();
	void Start_EyeLaserCharge();
	void OnServerBegin(class AActor** Actor);
	void Audio_EyeBeam_Charge();
	void ExecuteUbergraph_Action_PetLoader_EyeLaser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
