#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_Player_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_MiniMap_Player.Widget_MiniMap_Player_C
// 0x0028 (0x02B0 - 0x0288)
class UWidget_MiniMap_Player_C : public URemnantMiniMapWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_2;                                                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniMapImage*                               PlayerIcon;                                               // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                    // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MiniMap_Player.Widget_MiniMap_Player_C");
		return ptr;
	}


	void UpdateLevelVisibility(int* DisplayLevel, int* MyLevel);
	void OnRegisteredToPanel(class UMiniMapPanel** MiniMapPanel);
	void ExecuteUbergraph_Widget_MiniMap_Player(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
