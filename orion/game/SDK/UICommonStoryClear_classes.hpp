#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x3C0 - 0x358)
// WidgetBlueprintGeneratedClass UICommonStoryClear.UICommonStoryClear_C
class UUICommonStoryClear_C : public UStoryNotificationBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      BusinessOpen;                                      // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CouplingOpen;                                      // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SubStoryOpen;                                      // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             Img_BusinessImage_01;                              // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_CouplingImage_01;                              // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_CouplingImage_02;                              // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          KSTextBlock;                                       // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          KSTextBlock_249;                                   // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             LIne;                                              // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      CouplingList;                                      // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              MarchantMaterial;                                  // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUICommonStoryClear_C* GetDefaultObj();

	void OnResetHiddenFlag();
	void HideTemporaryInternal(bool IsHidden, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser);
	void SetTitleText(class FName TitleLabel);
	void SetSymbol(class FName MainStoryLabel);
	void Open_Innner();
	void SetBodyText(class FName FormatLabel, class FName TitleLabel);
	bool OpenSubStory(class FName TitleLabel, class FName FormatTextLabel);
	bool OpenMarchant(class FName MainStoryLabel, class FName TitleLabel, class FName FormatTextLabel);
	bool OpenCoupling(class FName MainStoryLabel, class FName TitleLabel, class FName FormatTextLabel);
	void Construct();
	void ExecuteUbergraph_UICommonStoryClear(int32 EntryPoint);
};

}


