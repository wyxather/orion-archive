#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Archetype_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Archetype.Widget_Archetype_C
// 0x00C8 (0x0308 - 0x0240)
class UWidget_Archetype_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Scrapper;                                                 // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Ex_Cultist;                                               // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Hunter;                                                   // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFocusGroup*                                 ArchetypeFocusGroup;                                      // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusButtonWidget*                          CultistButton;                                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      CultistImage;                                             // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CultistLabel;                                             // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Description;                                              // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusButtonWidget*                          HunterButton;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      HunterImage;                                              // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  HunterLabel;                                              // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icon;                                                     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Label;                                                    // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusButtonWidget*                          ScrapperButton;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ScrapperImage;                                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ScrapperLabel;                                            // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                StartingGear;                                             // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URemnantArchetype*                           Archetype;                                                // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ArchetypeBP;                                              // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFocusWidget*                                ParentFocusWidget;                                        // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFocus;                                                 // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Check;                                                    // 0x02E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PressToConfirm;                                           // 0x02EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02EB(0x0001) MISSED OFFSET
	int                                                ClassChoosen;                                             // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    SelectArchetype;                                          // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget_ButtonEx_C*                          ExitButtonCallback;                                       // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Archetype.Widget_Archetype_C");
		return ptr;
	}


	void CheckHasAnyFocus(bool* HasAnyFocus);
	void InitArchetypeLabels(class UClass** HunterArchetypeRef, class UClass** CultistArchetypeRef, class UClass** ScrapperArchetypeRef);
	struct FLinearColor Pin_Opacity();
	void InitFocus(class UFocusWidget** ParentFocusWidget, class UWidget_ButtonEx_C** ExitMenuButton);
	void SetArchetypeBP(class UClass** Archetype);
	void SetArchetype(class URemnantArchetype** Archetype);
	struct FText Get_Description_Text_1();
	struct FText Get_Label_Text_1();
	void Construct();
	void BndEvt__HunterButton_K2Node_ComponentBoundEvent_334_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__CultistButton_K2Node_ComponentBoundEvent_437_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_495_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void OnExitClicked(class UWidget** Widget);
	void BndEvt__HunterButton_K2Node_ComponentBoundEvent_276_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__CultistButton_K2Node_ComponentBoundEvent_346_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_403_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_216_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__CultistButton_K2Node_ComponentBoundEvent_265_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__HunterButton_K2Node_ComponentBoundEvent_321_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void ExecuteUbergraph_Widget_Archetype(int* EntryPoint);
	void SelectArchetype__DelegateSignature(class URemnantArchetype** Archetype);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
