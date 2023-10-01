#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Subtitles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Subtitles.Widget_Subtitles_C
// 0x0010 (0x0250 - 0x0240)
class UWidget_Subtitles_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                Subtitles;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Subtitles.Widget_Subtitles_C");
		return ptr;
	}


	void ShouldShowSubtitle(class AActor** Source, bool* Out);
	void RemoveSubtitle(class AActor** Context);
	void AddSubtitle(class AActor** Context, struct FText* Speaker, struct FText* Text);
	void Construct();
	void OnAddSubtitle_Event_1(class USubtitleInstance** Subtitle);
	void OnRemoveSubtitle_Event_1(class USubtitleInstance** Subtitle);
	void ExecuteUbergraph_Widget_Subtitles(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
