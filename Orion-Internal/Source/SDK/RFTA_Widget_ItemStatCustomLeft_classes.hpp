#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemStatCustomLeft_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_ItemStatCustomLeft.Widget_ItemStatCustomLeft_C
// 0x0070 (0x02B0 - 0x0240)
class UWidget_ItemStatCustomLeft_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAdvTextBlock*                               StatName;                                                 // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInspectStat                                Stat;                                                     // 0x0250(0x0060) (Edit, BlueprintVisible, ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStatCustomLeft.Widget_ItemStatCustomLeft_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_Widget_ItemStatCustomLeft(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
