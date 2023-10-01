#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_Tile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_MiniMap_Tile.Widget_MiniMap_Tile_C
// 0x0014 (0x029C - 0x0288)
class UWidget_MiniMap_Tile_C : public URemnantMiniMapWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMiniMapImage*                               TileImage;                                                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              LastAngle;                                                // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MiniMap_Tile.Widget_MiniMap_Tile_C");
		return ptr;
	}


	struct FWidgetTransform UpdateMiniMapWidget(struct FWidgetTransform* InTransform);
	void OnRegisteredToPanel(class UMiniMapPanel** MiniMapPanel);
	void UpdateLevelVisibility(int* DisplayLevel, int* MyLevel);
	void ExecuteUbergraph_Widget_MiniMap_Tile(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
