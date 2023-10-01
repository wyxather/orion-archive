#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_TutorialPagePip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_TutorialPagePip.Widget_TutorialPagePip_C
// 0x0008 (0x0248 - 0x0240)
class UWidget_TutorialPagePip_C : public UUserWidget
{
public:
	class UImage*                                      Image_1;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TutorialPagePip.Widget_TutorialPagePip_C");
		return ptr;
	}


	void SetCurrent(bool* Current);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
