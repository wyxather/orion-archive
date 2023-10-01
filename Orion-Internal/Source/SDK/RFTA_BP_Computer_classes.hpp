#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Computer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Computer.BP_Computer_C
// 0x007C (0x04A4 - 0x0428)
class ABP_Computer_C : public ABP_Inspectable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Interact_Validator;                                       // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Computer_Type_Multiple_SC;                                // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPersistenceComponent*                       Persistence;                                              // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Computer_Powered_Off_TypingOnly_SC;                       // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Computer_Power_Off_SC;                                    // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Computer_Power_On_SC;                                     // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PowerUser_C*                             PowerUser;                                                // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            Widget__UI_;                                              // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDialogComponent*                            Event_Tree;                                               // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnTerminalSelect;                                         // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               Locked;                                                   // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	struct FName                                       QuestNameID;                                              // 0x0494(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       EventName;                                                // 0x049C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Computer.BP_Computer_C");
		return ptr;
	}


	void UpdateTriggerState();
	void IsLocked(bool* Out);
	void SetPowerEnabled(bool* Enabled);
	void Refresh_Focus();
	void Get_Terminal(class UWidget_Terminal_C** Widget_Terminal);
	void Get_Widget_Interaction(class UWidgetInteractionComponent** WidgetInteraction);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(struct FKey* Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(struct FKey* Key);
	void TerminalSelect();
	void On_Dialog_Complete();
	void On_Inspectable_Complete(struct FName* Result);
	void BndEvt__PowerUser_K2Node_ComponentBoundEvent_0_OnEnabled__DelegateSignature(bool* Enabled);
	void BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectableEvent__DelegateSignature(class UInspectableComponent** Component);
	void SetTriggerState(bool* State);
	void SFX_Keyboard_On();
	void SendEventToQuest();
	void ReceiveBeginPlay();
	void OnReset();
	void OnInitQuestEntity();
	void ExecuteUbergraph_BP_Computer(int* EntryPoint);
	void OnTerminalSelect__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
