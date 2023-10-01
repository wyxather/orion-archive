#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Screen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Screen.Widget_Screen_C
// 0x0030 (0x0270 - 0x0240)
class UWidget_Screen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDialogComponent*                            DialogComponent;                                          // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Active;                                                   // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	class UClass*                                      DialogOptionBP;                                           // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_Terminal_C*                          Terminal;                                                 // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     CachedFocusParent;                                        // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Screen.Widget_Screen_C");
		return ptr;
	}


	void OptionsUpdated();
	void InitScreen();
	struct FSlateColor Get_Context_Color_Parent_();
	void Set_Button_Style(class UWidget_Screen_Option_C** Option_Button);
	void Get_Inspector(class APlayerController** Player_Controller);
	void RefreshFocus();
	void GetAttributeValue(struct FName* Key, struct FText* Value);
	void InitScreenInternal(class UDialogComponent** DialogueComponent, class UWidget_Terminal_C** Terminal, class UWidget** FocusParent);
	void Clear_Options();
	void Add_Option(class UWidget_Screen_Option_C** Option);
	void Update_Options();
	void OnOptionsUpdate();
	void OnDialogUpdate();
	void ExecuteUbergraph_Widget_Screen(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
