#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_Overview_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_MiniMap_Overview.Widget_MiniMap_Overview_C
// 0x0018 (0x0258 - 0x0240)
class UWidget_MiniMap_Overview_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMiniMapPanel*                               MiniMap_Widgets;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AMiniMapDisplayActor*                        CurrentDisplayActor;                                      // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MiniMap_Overview.Widget_MiniMap_Overview_C");
		return ptr;
	}


	void TryUnregisterPanel();
	void InitMiniMapWidget(class AMiniMapDisplayActor** DisplayActor);
	void Destruct();
	void ExecuteUbergraph_Widget_MiniMap_Overview(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
