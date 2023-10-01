#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Screen_Option_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Screen_Option.Widget_Screen_Option_C
// 0x0048 (0x02F8 - 0x02B0)
class UWidget_Screen_Option_C : public UFocusWidget
{
public:
	struct FDialogOption                               Option;                                                   // 0x02B0(0x0040) (Edit, BlueprintVisible)
	class UWidget_Screen_C*                            Parent_Screen;                                            // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Screen_Option.Widget_Screen_Option_C");
		return ptr;
	}


	void On_Option_Selected();
	void Set_Option_Value(class UWidget_Screen_C** Screen, struct FDialogOption* Option);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
