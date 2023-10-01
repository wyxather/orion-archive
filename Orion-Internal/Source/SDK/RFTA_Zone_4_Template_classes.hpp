#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Zone_4_Template_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Zone_4_Template.Quest_Intro_01_C
// 0x008D (0x03CD - 0x0340)
class AQuest_Intro_01_C : public ALevelScriptActorGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ULevelSequence*>                      VaultSequence;                                            // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      PreloadCharacter_Wraith;                                  // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      PreloadCharacter_Broken;                                  // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              Lighting_Group_A;                                         // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              Lighting_Group_B;                                         // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              Lighting_Group_D;                                         // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              Lighting_Group_F;                                         // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              Lighting_Group_G;                                         // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              Lighting_Group_Outside;                                   // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Show_Group_A;                                             // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Show_Group_B;                                             // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Show_Group_D;                                             // 0x03CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Show_Group_F;                                             // 0x03CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Show_Group_G;                                             // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Zone_4_Template.Quest_Intro_01_C");
		return ptr;
	}


	void Set_Group_Vis(class UObject** Other, bool* Visible, TArray<class AActor*>* Group);
	void BndEvt__TriggerA_Show_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor);
	void BndEvt__TriggerB_Hide_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor);
	void BndEvt__TriggerB_Show_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor);
	void BndEvt__TriggerD_Hide_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor);
	void BndEvt__TriggerD_Show_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor);
	void BndEvt__TriggerF_Hide_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor);
	void BndEvt__TriggerA_GeneralPlacementTest_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor);
	void ReceiveBeginPlay();
	void Hide_Lighting_Groups___Start();
	void BndEvt__TriggerVolume8_3_K2Node_ActorBoundEvent_11_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor);
	void BndEvt__TriggerVolume4_K2Node_ActorBoundEvent_12_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor);
	void ExecuteUbergraph_Quest_Intro_01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
