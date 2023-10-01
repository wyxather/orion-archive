// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_MIRV_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.AIProjectile_CanBeStolen
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATEDProjectile_MIRV_Base_C::AIProjectile_CanBeStolen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.AIProjectile_CanBeStolen");

	ATEDProjectile_MIRV_Base_C_AIProjectile_CanBeStolen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.FuelOut
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_MIRV_Base_C::FuelOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.FuelOut");

	ATEDProjectile_MIRV_Base_C_FuelOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_MIRV_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.UserConstructionScript");

	ATEDProjectile_MIRV_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.OnBehaviorInitialized
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass**                 BehaviorClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_MIRV_Base_C::OnBehaviorInitialized(class UClass** BehaviorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.OnBehaviorInitialized");

	ATEDProjectile_MIRV_Base_C_OnBehaviorInitialized_Params params;
	params.BehaviorClass = BehaviorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATEDProjectile_MIRV_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.ReceiveBeginPlay");

	ATEDProjectile_MIRV_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.ExecuteUbergraph_TEDProjectile_MIRV_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_MIRV_Base_C::ExecuteUbergraph_TEDProjectile_MIRV_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.ExecuteUbergraph_TEDProjectile_MIRV_Base");

	ATEDProjectile_MIRV_Base_C_ExecuteUbergraph_TEDProjectile_MIRV_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
