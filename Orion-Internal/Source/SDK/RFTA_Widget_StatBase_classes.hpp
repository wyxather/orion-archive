#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_StatBase.Widget_StatBase_C
// 0x000C (0x0255 - 0x0249)
class UWidget_StatBase_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	struct FName                                       StatNameID;                                               // 0x024C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid;                                                    // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatBase.Widget_StatBase_C");
		return ptr;
	}


	void Init(struct FInspectStat* Stat, bool* Comparing, struct FInspectStat* CompareStat, struct FInspectInfo* InspectInfo);
	void InitFromInspectInfo(struct FInspectInfo* InspectInfo, bool* Comparing, struct FInspectInfo* InspectInfoCompare);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
