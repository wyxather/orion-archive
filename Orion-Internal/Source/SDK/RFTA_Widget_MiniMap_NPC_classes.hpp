#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_MiniMap_NPC.Widget_MiniMap_NPC_C
// 0x0010 (0x0298 - 0x0288)
class UWidget_MiniMap_NPC_C : public URemnantMiniMapWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMiniMapImage*                               Image;                                                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MiniMap_NPC.Widget_MiniMap_NPC_C");
		return ptr;
	}


	struct FWidgetTransform UpdateMiniMapWidget(struct FWidgetTransform* InTransform);
	void UpdateFactionColor(EAffiliation* Faction);
	void OnRegisteredToPanel(class UMiniMapPanel** MiniMapPanel);
	void OnFactionChanged(class ACharacterGunfire** Character);
	void ExecuteUbergraph_Widget_MiniMap_NPC(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
