#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Inspectable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Inspectable.Widget_Inspectable_C
// 0x0010 (0x0250 - 0x0240)
class UWidget_Inspectable_C : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    On_Request_Close;                                         // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Inspectable.Widget_Inspectable_C");
		return ptr;
	}


	void On_Request_Close__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
