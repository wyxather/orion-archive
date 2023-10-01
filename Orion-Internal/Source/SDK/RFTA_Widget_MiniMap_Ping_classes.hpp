#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_Ping_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_MiniMap_Ping.Widget_MiniMap_Ping_C
// 0x0018 (0x02A0 - 0x0288)
class UWidget_MiniMap_Ping_C : public URemnantMiniMapWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMiniMapImage*                               PingAnim;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniMapImage*                               PingIcon;                                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MiniMap_Ping.Widget_MiniMap_Ping_C");
		return ptr;
	}


	void UpdateMinimapDisplay();
	void OnRegisteredToPanel(class UMiniMapPanel** MiniMapPanel);
	void ExecuteUbergraph_Widget_MiniMap_Ping(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
