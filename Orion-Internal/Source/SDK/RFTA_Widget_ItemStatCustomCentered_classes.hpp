#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemStatCustomCentered_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C
// 0x0073 (0x02C8 - 0x0255)
class UWidget_ItemStatCustomCentered_C : public UWidget_StatBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAdvTextBlock*                               StatName;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInspectStat                                Stat;                                                     // 0x0268(0x0060) (Edit, BlueprintVisible, ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C");
		return ptr;
	}


	void Refresh();
	void Construct();
	void Init(struct FInspectStat* Stat, bool* Comparing, struct FInspectStat* CompareStat, struct FInspectInfo* InspectInfo);
	void ExecuteUbergraph_Widget_ItemStatCustomCentered(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
