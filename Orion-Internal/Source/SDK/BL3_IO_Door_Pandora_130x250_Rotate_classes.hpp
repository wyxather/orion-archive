#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Door_Pandora_130x250_Rotate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Door_Pandora_130x250_Rotate.IO_Door_Pandora_130x250_Rotate_C
// 0x0098 (0x0830 - 0x0798)
class AIO_Door_Pandora_130x250_Rotate_C : public AIO_Door_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Greeble_3;                                                // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Button_Generic_Cylindrical_V1;                         // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ImpactEffectReference;                                    // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BustedDoor;                                               // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DoorFrame;                                                // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        NormalDoor;                                               // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavMeshBox_Closed;                                        // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_0_Door1_rotation_EC07FFBF46E3FBB369671AB6CF0830C9;// 0x07E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0_0__Direction_EC07FFBF46E3FBB369671AB6CF0830C9; // 0x07E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              NewTime;                                                  // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07F4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    On_DoorKnock;                                             // 0x07F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<EMissionScriptedStates>                ShotgunnedState;                                          // 0x0808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0809(0x0007) MISSED OFFSET
	struct FWwisePlaybackInstance                      Audio_PlaybackInstance;                                   // 0x0810(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGbxCondition*                               Cond_ShotgunnedState_NewEnumerator1;                      // 0x0828(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Door_Pandora_130x250_Rotate.IO_Door_Pandora_130x250_Rotate_C");
		return ptr;
	}


	void ShotgunDoor();
	void UserConstructionScript();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void Timeline_0_0__Audio_Door_Close__EventFunc();
	void PlayDoorMovement(TEnumAsByte<Enum_Door_ReasonForTimeline>* Reason);
	void __UserState_ShotgunnedState_2(bool bFromLoad);
	void Audio_Play_Opening();
	void Audio_Play_Closing();
	void Audio_Stop_Closing();
	void Audio_Stop_Opening();
	void ExecuteUbergraph_IO_Door_Pandora_130x250_Rotate(int EntryPoint);
	void On_DoorKnock__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
