#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_PingWheelContext_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_PingWheelContext.Widget_PingWheelContext_C
// 0x0060 (0x02A0 - 0x0240)
class UWidget_PingWheelContext_C : public UUserWidget
{
public:
	class UPingSubContext*                             PingContext;                                              // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionPing                                 InitialPing;                                              // 0x0248(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PingWheelContext.Widget_PingWheelContext_C");
		return ptr;
	}


	void SetPing(struct FActionPing* Ping);
	void OnActivate();
	void NotifySelectedChanged(bool* Selected);
	void UpdateFromContext(class UPingSubContext** Context);
	void SetContext(class UPingSubContext** NewContext, struct FActionPing* InitialPing);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
