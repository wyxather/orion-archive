#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Screen_Terminal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Screen_Terminal.Widget_Screen_Terminal_C
// 0x005A (0x02CA - 0x0270)
class UWidget_Screen_Terminal_C : public UWidget_Screen_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAdvTextBlock*                               Body;                                                     // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusGroup*                                 FocusGroup_Options;                                       // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAdvTextBlock*                               Header;                                                   // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                Options;                                                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusButtonWidget*                          OverlayButton;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Content_Body;                                             // 0x02A0(0x0018) (Edit, BlueprintVisible)
	bool                                               Initialized;                                              // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	float                                              FillInSpeed;                                              // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                State;                                                    // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Page;                                                     // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FillingHeader;                                            // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FillingDialog;                                            // 0x02C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Screen_Terminal.Widget_Screen_Terminal_C");
		return ptr;
	}


	void SetOverrideLocalizationFontSize();
	void ShowOverlayButton(bool* Show);
	void FillHeader();
	void FillOptions();
	void FillDialog();
	void HasOptions(bool* Out);
	void HasDialogText(bool* Out);
	void Set_Content_Justification();
	struct FText Get_Subtext_Text();
	ESlateVisibility Get_Subtext_Visibility();
	void Add_Option(class UWidget_Screen_Option_C** Option);
	void Clear_Options();
	void OnDialogUpdate();
	void InitScreen();
	void BndEvt__Header_K2Node_ComponentBoundEvent_165_OnTextFilled__DelegateSignature();
	void OptionsUpdated();
	void BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_308_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void DelayFocus();
	void BndEvt__Body_K2Node_ComponentBoundEvent_18_OnTextFilled__DelegateSignature();
	void DelayFocusOverlayButton();
	void ExecuteUbergraph_Widget_Screen_Terminal(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
