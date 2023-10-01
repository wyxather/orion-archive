#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Screen_Terminal_Option_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C
// 0x006A (0x0362 - 0x02F8)
class UWidget_Screen_Terminal_Option_C : public UWidget_Screen_Option_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_1;                                                 // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusButtonWidget*                          FocusButton;                                              // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAdvTextBlock*                               OptionLabel;                                              // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDialogOption                               DialogOption;                                             // 0x0318(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AutoFill;                                                 // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	float                                              FillInSpeed;                                              // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               FillingIn;                                                // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FilledIn;                                                 // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C");
		return ptr;
	}


	void SetOverrideLocalizationFontSize();
	void FillIn();
	struct FSlateColor Get_Label_ColorAndOpacity_1();
	void Construct();
	void Set_Option_Value(class UWidget_Screen_C** Screen, struct FDialogOption* Option);
	void BndEvt__UI_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__OptionLabel_K2Node_ComponentBoundEvent_75_OnTextFilled__DelegateSignature();
	void ExecuteUbergraph_Widget_Screen_Terminal_Option(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
