// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACharge_PetSpiderant_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.OnLoop
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_PetSpiderant_C::OnLoop(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.OnLoop");

	UACharge_PetSpiderant_C_OnLoop_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_PetSpiderant_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.OnEnd");

	UACharge_PetSpiderant_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.OnHitWall
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_PetSpiderant_C::OnHitWall(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.OnHitWall");

	UACharge_PetSpiderant_C_OnHitWall_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_PetSpiderant_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.OnBegin");

	UACharge_PetSpiderant_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.Notify_Melee
// (BlueprintCallable, BlueprintEvent)

void UACharge_PetSpiderant_C::Notify_Melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.Notify_Melee");

	UACharge_PetSpiderant_C_Notify_Melee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.ExecuteUbergraph_ACharge_PetSpiderant
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_PetSpiderant_C::ExecuteUbergraph_ACharge_PetSpiderant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.ExecuteUbergraph_ACharge_PetSpiderant");

	UACharge_PetSpiderant_C_ExecuteUbergraph_ACharge_PetSpiderant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
