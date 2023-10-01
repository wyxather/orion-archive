#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_ElectricRouter_Controller_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C
// 0x00C0 (0x0640 - 0x0580)
class AIO_ElectricRouter_Controller_C : public AIO_ElectricalSystem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    FX_Smoke;                                                 // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FX_Powered;                                               // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Spin_O_Dial;                                              // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UElementalInteractionComponent*              ElementalInteraction;                                     // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ElectricityOverlap;                                       // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FX_Shocked;                                               // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TimeLine01_ControlPanelMovement_443B22CF41CDC7ABBF433A9029B2F6AA;// 0x05C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeLine01_ControlPanelRotation_443B22CF41CDC7ABBF433A9029B2F6AA;// 0x05C4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimeLine01__Direction_443B22CF41CDC7ABBF433A9029B2F6AA;   // 0x05C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TimeLine01;                                               // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<Enum_ElectricState>                    ElectricState;                                            // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05D9(0x0007) MISSED OFFSET
	class AIO_Door_Parent_C*                           DoorToChange;                                             // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               OpensWhenPowered;                                         // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_Door_State>                       DoorState;                                                // 0x05E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x05EA(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicEmissive;                                          // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_Door_State>                       ActWhenPowered;                                           // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_ElectricOverload>                 Overload;                                                 // 0x05F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverloadOnUse;                                            // 0x05FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x05FB(0x0005) MISSED OFFSET
	class UGbxCondition*                               Cond_ElectricState_NewEnumerator0;                        // 0x0600(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_DoorState_NewEnumerator1;                            // 0x0608(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_DoorState_NewEnumerator2;                            // 0x0610(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_DoorState_NewEnumerator3;                            // 0x0618(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_ActWhenPowered_NewEnumerator1;                       // 0x0620(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_ActWhenPowered_NewEnumerator2;                       // 0x0628(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_ActWhenPowered_NewEnumerator3;                       // 0x0630(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_Overload_NewEnumerator2;                             // 0x0638(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C");
		return ptr;
	}


	void GetDoorState(TEnumAsByte<Enum_Door_State>* DoorState);
	void GetDoorLockedState(bool* Locked);
	void GetDoorInteractiveState(bool* Interactive);
	void GetDoorFeedbackState(TEnumAsByte<Enum_States_DoorLocked>* FeedbackState);
	void UserConstructionScript();
	void TimeLine01__FinishedFunc();
	void TimeLine01__UpdateFunc();
	void TimeLine01__EventTrigger__EventFunc();
	void SetDoorState(TEnumAsByte<Enum_Door_State> DoorState);
	void SetDoorLockedState(bool Locked_);
	void SetDoorInteractiveState(bool Interactive_);
	void SetDoorFeedbackState(TEnumAsByte<Enum_States_DoorLocked> FeedbackState);
	void StartElectrifiedFeedback();
	void StopElectrifiedFeedback();
	void BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_3_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_Panel_Electric(class UElementalInteractionData* State, bool bIsInitialState);
	void __UserState_ElectricState_2(bool bFromLoad);
	void __UserState_ElectricState_1(bool bFromLoad);
	void __UserState_Overload_2(bool bFromLoad);
	void ExecuteUbergraph_IO_ElectricRouter_Controller(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
