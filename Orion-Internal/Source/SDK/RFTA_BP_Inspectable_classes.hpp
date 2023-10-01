#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Inspectable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Inspectable.BP_Inspectable_C
// 0x0080 (0x0428 - 0x03A8)
class ABP_Inspectable_C : public ABP_InspectableAbstract_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<E_InspectableHUDMode>                  Inspect_HUD_Mode;                                         // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	class UClass*                                      Dialog_BP;                                                // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Inspectable_HUD_C*                       HUD;                                                      // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Lore;                                                     // 0x03C8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnLoreNotify;                                             // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class APlayerController*                           CachedController;                                         // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnInspectableHUDInit;                                     // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnInspectableHUDForceUpdate;                              // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnNotifyRead;                                             // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnNotifyCacheUIPage;                                      // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Inspectable.BP_Inspectable_C");
		return ptr;
	}


	void OnInspectEnd();
	void EnablePlayerInteraction(class APlayerController** PlayerController, bool* enable);
	void InitLore();
	void SetLore(class UClass** Lore);
	void OnRep_Lore();
	void ReceiveBeginPlay();
	void On_Inspectable_Complete(struct FName* Result);
	void BndEvt__Inspectable_K2Node_ComponentBoundEvent_3_InspectableEvent__DelegateSignature(class UInspectableComponent** Component);
	void Request_Dialog_Next();
	void Request_Dialog_Prev();
	void OnNextDialog();
	void OnPrevDialog();
	void BeginTransition(class UInspectableComponent** Component);
	void ServerBeginInspect();
	void ServerEndInspect();
	void BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature(class UInspectableComponent** Component);
	void ForceUpdateUI();
	void OnNotifyReadEvent(struct FBookPage* Page);
	void OnNotifyCacheUIPageEvent(int* CurrentPage);
	void BndEvt__Inspectable_K2Node_ComponentBoundEvent_4_InspectableEvent__DelegateSignature(class UInspectableComponent** Component);
	void OnClientRequestEndInspect();
	void ServerRequestEndInspect();
	void BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectablePlayerEvent__DelegateSignature(class UInspectableComponent** Component, bool* bIsServerController);
	void NotifyCompleteInspect();
	void ExecuteUbergraph_BP_Inspectable(int* EntryPoint);
	void OnNotifyCacheUIPage__DelegateSignature(int* CurrentPage);
	void OnNotifyRead__DelegateSignature(struct FBookPage* Page);
	void OnInspectableHUDForceUpdate__DelegateSignature();
	void OnInspectableHUDInit__DelegateSignature();
	void OnLoreNotify__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
