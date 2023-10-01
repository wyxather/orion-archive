// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_StatBase.Widget_StatBase_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectStat*           Stat                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectStat*           CompareStat                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_StatBase_C::Init(struct FInspectStat* Stat, bool* Comparing, struct FInspectStat* CompareStat, struct FInspectInfo* InspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatBase.Widget_StatBase_C.Init");

	UWidget_StatBase_C_Init_Params params;
	params.Stat = Stat;
	params.Comparing = Comparing;
	params.CompareStat = CompareStat;
	params.InspectInfo = InspectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatBase.Widget_StatBase_C.InitFromInspectInfo
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectInfo*           InspectInfoCompare             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_StatBase_C::InitFromInspectInfo(struct FInspectInfo* InspectInfo, bool* Comparing, struct FInspectInfo* InspectInfoCompare)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatBase.Widget_StatBase_C.InitFromInspectInfo");

	UWidget_StatBase_C_InitFromInspectInfo_Params params;
	params.InspectInfo = InspectInfo;
	params.Comparing = Comparing;
	params.InspectInfoCompare = InspectInfoCompare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
