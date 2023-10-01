// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALoop_PsychoMale_Badass_Spin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALoop_PsychoMale_Badass_Spin_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.OnBegin");

	UALoop_PsychoMale_Badass_Spin_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALoop_PsychoMale_Badass_Spin_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.OnEnd");

	UALoop_PsychoMale_Badass_Spin_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALoop_PsychoMale_Badass_Spin_C::OnStop(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.OnStop");

	UALoop_PsychoMale_Badass_Spin_C_OnStop_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.Notify_SpinDamage
// (BlueprintCallable, BlueprintEvent)

void UALoop_PsychoMale_Badass_Spin_C::Notify_SpinDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.Notify_SpinDamage");

	UALoop_PsychoMale_Badass_Spin_C_Notify_SpinDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.ExecuteUbergraph_ALoop_PsychoMale_Badass_Spin
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALoop_PsychoMale_Badass_Spin_C::ExecuteUbergraph_ALoop_PsychoMale_Badass_Spin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.ExecuteUbergraph_ALoop_PsychoMale_Badass_Spin");

	UALoop_PsychoMale_Badass_Spin_C_ExecuteUbergraph_ALoop_PsychoMale_Badass_Spin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
