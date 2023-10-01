// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_VehicleDeath_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_VehicleDeath_Base.Action_VehicleDeath_Base_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_VehicleDeath_Base_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_VehicleDeath_Base.Action_VehicleDeath_Base_C.OnBegin");

	UAction_VehicleDeath_Base_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_VehicleDeath_Base.Action_VehicleDeath_Base_C.OnAnimEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_VehicleDeath_Base_C::OnAnimEnd(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_VehicleDeath_Base.Action_VehicleDeath_Base_C.OnAnimEnd");

	UAction_VehicleDeath_Base_C_OnAnimEnd_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_VehicleDeath_Base.Action_VehicleDeath_Base_C.ExecuteUbergraph_Action_VehicleDeath_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_VehicleDeath_Base_C::ExecuteUbergraph_Action_VehicleDeath_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_VehicleDeath_Base.Action_VehicleDeath_Base_C.ExecuteUbergraph_Action_VehicleDeath_Base");

	UAction_VehicleDeath_Base_C_ExecuteUbergraph_Action_VehicleDeath_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
