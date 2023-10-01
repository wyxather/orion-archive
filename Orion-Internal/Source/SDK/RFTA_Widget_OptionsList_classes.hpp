#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_OptionsList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_OptionsList.Widget_OptionsList_C
// 0x004C (0x028C - 0x0240)
class UWidget_OptionsList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFocusButtonWidget*                          FocusButton;                                              // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                  // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  List;                                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ControllerDiagram_C*                 Widget_ControllerDiagram;                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FName                                       Category;                                                 // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SubCategory;                                              // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FName>                               PCSetting;                                                // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsPC;                                                     // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Reset_PC_Image_Cache;                                     // 0x0289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsMainMenu;                                               // 0x028A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               ControllerActive;                                         // 0x028B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_OptionsList.Widget_OptionsList_C");
		return ptr;
	}


	void OnVSyncApplied(class UUserSetting** AppliedSetting, class UGameUserSettingsGunfire** UserSettings);
	ESlateVisibility Get_Controller_Visibility_1();
	ESlateVisibility Get_Keybind_Visibility_1();
	void FocusFirst();
	void ResetOptions();
	void GetCategorySettings(class UGameUserSettingsGunfire** GameUserSettingsGunfire, TArray<class UUserSetting*>* UserSettings);
	void GetListMaxIndex(int* MaxIndex);
	void CleanList();
	void ToggleResolutionOptions(bool* Enabled);
	void OnFullscreenModeApplied(class UUserSetting** AppliedSetting, class UGameUserSettingsGunfire** UserSettings);
	void UpdateVideoSetting(class UGameUserSettingsGunfire** UserSettings);
	void IsKeyAlreadyBound(struct FKey* Key, bool* Out);
	void BuildList();
	void Construct();
	void ResetScrollOffset();
	void Destruct();
	void DeviceChanged(int* ControllerId, EInputDevice* CurrentInputDevice);
	void ResetToDefault();
	void PopulateList();
	void Conditionally_Reset_PC_Image_Cache();
	void ExecuteUbergraph_Widget_OptionsList(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
