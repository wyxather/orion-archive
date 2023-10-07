#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibOptionUI.LibOptionUI_C
class ULibOptionUI_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibOptionUI_C* GetDefaultObj();

	void CreateOptionMenuItem(struct FOptionItemData& OptionItemData, class UObject* __WorldContext, class UListItemWidget_Opt_Base** Widget);
};

}


