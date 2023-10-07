#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x268 - 0x260)
// WidgetBlueprintGeneratedClass JobLicenseIcon.JobLicenseIcon_C
class UJobLicenseIcon_C : public UUserWidget
{
public:
	class UAcqImage*                             Img_License;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UJobLicenseIcon_C* GetDefaultObj();

	void SetIcon(class UTexture2D* Texture);
};

}


