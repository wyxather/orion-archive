// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_WeaponReload_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PetLoader_WeaponReload.Action_PetLoader_WeaponReload_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_WeaponReload_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_WeaponReload.Action_PetLoader_WeaponReload_C.OnBegin");

	UAction_PetLoader_WeaponReload_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_WeaponReload.Action_PetLoader_WeaponReload_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_WeaponReload_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_WeaponReload.Action_PetLoader_WeaponReload_C.OnEnd");

	UAction_PetLoader_WeaponReload_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_WeaponReload.Action_PetLoader_WeaponReload_C.ExecuteUbergraph_Action_PetLoader_WeaponReload
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_WeaponReload_C::ExecuteUbergraph_Action_PetLoader_WeaponReload(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_WeaponReload.Action_PetLoader_WeaponReload_C.ExecuteUbergraph_Action_PetLoader_WeaponReload");

	UAction_PetLoader_WeaponReload_C_ExecuteUbergraph_Action_PetLoader_WeaponReload_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
