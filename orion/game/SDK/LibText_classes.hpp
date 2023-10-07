#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibText.LibText_C
class ULibText_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibText_C* GetDefaultObj();

	void ConvFontImageText_Language(class FName ImageTextName, class UObject* __WorldContext, class FName* Name);
	void ConvFontImageText_US(class FName BaseKeyName, class UObject* __WorldContext, class FName* Name);
	void ConvFontImageText_UK(class FName BaseKeyName, class UObject* __WorldContext, class FName* Name);
	void ConvFontImageText_FR(class FName BaseKeyName, class UObject* __WorldContext, class FName* Name);
	void ConvFontImageText_ES(class FName BaseKeyName, class UObject* __WorldContext, class FName* Name);
	void ConvFontImageText_DE(class FName BaseKeyName, class UObject* __WorldContext, class FName* Name);
	void ConvFontImageText_IT(class FName ImageTextName, class UObject* __WorldContext, class FName* Name);
	void ConvFontImageText_GetControllerKey(class FName BaseKeyName, class UObject* __WorldContext, bool* OutFound, class FName* OutKeyName);
	void ConvFontImageText_Controller(class FName ImageTextName, class UObject* __WorldContext, bool* Found, class FName* OutName);
	void ConvFontImageText(class FName ImageTextName, class UObject* __WorldContext, class FText* Name);
};

}


