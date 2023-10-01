#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_DragonHeartPin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_DragonHeartPin.Widget_DragonHeartPin_C
// 0x0008 (0x0248 - 0x0240)
class UWidget_DragonHeartPin_C : public UUserWidget
{
public:
	class UImage*                                      DragonHeartPin;                                           // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_DragonHeartPin.Widget_DragonHeartPin_C");
		return ptr;
	}


	void SetEnabled(bool* Enabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
