// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALoop_VarkidHunt02_QuadShot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ALoop_VarkidHunt02_QuadShot.ALoop_VarkidHunt02_QuadShot_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALoop_VarkidHunt02_QuadShot_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_VarkidHunt02_QuadShot.ALoop_VarkidHunt02_QuadShot_C.OnBegin");

	UALoop_VarkidHunt02_QuadShot_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_VarkidHunt02_QuadShot.ALoop_VarkidHunt02_QuadShot_C.Notify_StingerShot
// (BlueprintCallable, BlueprintEvent)

void UALoop_VarkidHunt02_QuadShot_C::Notify_StingerShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_VarkidHunt02_QuadShot.ALoop_VarkidHunt02_QuadShot_C.Notify_StingerShot");

	UALoop_VarkidHunt02_QuadShot_C_Notify_StingerShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_VarkidHunt02_QuadShot.ALoop_VarkidHunt02_QuadShot_C.ExecuteUbergraph_ALoop_VarkidHunt02_QuadShot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALoop_VarkidHunt02_QuadShot_C::ExecuteUbergraph_ALoop_VarkidHunt02_QuadShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_VarkidHunt02_QuadShot.ALoop_VarkidHunt02_QuadShot_C.ExecuteUbergraph_ALoop_VarkidHunt02_QuadShot");

	UALoop_VarkidHunt02_QuadShot_C_ExecuteUbergraph_ALoop_VarkidHunt02_QuadShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
