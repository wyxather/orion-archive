#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemStatPrimary_ROF_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C
// 0x0076 (0x03C8 - 0x0352)
class UWidget_ItemStatPrimary_ROF_C : public UWidget_ItemStatPrimary_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0352(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       ClipSizeStatName;                                         // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectStat                                ClipSizeStat;                                             // 0x0368(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C");
		return ptr;
	}


	struct FText Get_StatValue_Text_1();
	void Refresh();
	void Init(struct FInspectStat* Stat, bool* Comparing, struct FInspectStat* CompareStat, struct FInspectInfo* InspectInfo);
	void ExecuteUbergraph_Widget_ItemStatPrimary_ROF(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
