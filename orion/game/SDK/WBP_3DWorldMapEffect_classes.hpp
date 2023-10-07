#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x268 - 0x260)
// WidgetBlueprintGeneratedClass WBP_3DWorldMapEffect.WBP_3DWorldMapEffect_C
class UWBP_3DWorldMapEffect_C : public UUserWidget
{
public:
	class UAcqImage*                             Img_DarkEffect;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_3DWorldMapEffect_C* GetDefaultObj();

	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

}


