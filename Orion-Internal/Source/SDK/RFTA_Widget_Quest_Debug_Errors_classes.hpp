#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Quest_Debug_Errors_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Quest_Debug_Errors.Widget_Quest_Debug_Errors_C
// 0x0034 (0x0274 - 0x0240)
class UWidget_Quest_Debug_Errors_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                Errors;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Label;                                                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Title;                                                    // 0x0258(0x0018) (Edit, BlueprintVisible)
	float                                              Spacing;                                                  // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Quest_Debug_Errors.Widget_Quest_Debug_Errors_C");
		return ptr;
	}


	void SetComponent(class UQuestComponent** QuestComponent);
	void Construct();
	void ExecuteUbergraph_Widget_Quest_Debug_Errors(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
