#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StartingGearCard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_StartingGearCard.Widget_StartingGearCard_C
// 0x0008 (0x0248 - 0x0240)
class UWidget_StartingGearCard_C : public UUserWidget
{
public:
	class UWidget_ItemCard_C*                          ItemCard;                                                 // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StartingGearCard.Widget_StartingGearCard_C");
		return ptr;
	}


	void SetInfo(struct FInspectInfo* Info);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
