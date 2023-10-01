#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_StatList.Widget_StatList_C
// 0x00B7 (0x0300 - 0x0249)
class UWidget_StatList_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                List;                                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInspectInfo                                InspectInfo;                                              // 0x0260(0x0080) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FName                                       Category;                                                 // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Spacing;                                                  // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AttributeList_;                                           // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	TArray<struct FName>                               HideStat;                                                 // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatList.Widget_StatList_C");
		return ptr;
	}


	void GetWidgetForStat(struct FName* Name, class UWidget_ItemStat_C** Widget);
	void BuildList();
	void SetInspectInfo(struct FInspectInfo* Info);
	void Construct();
	void ExecuteUbergraph_Widget_StatList(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
