// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_PunkMale_DoorSmallCloth_Combat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ASpawn_PunkMale_DoorSmallCloth_Combat.ASpawn_PunkMale_DoorSmallCloth_Combat_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_PunkMale_DoorSmallCloth_Combat_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_PunkMale_DoorSmallCloth_Combat.ASpawn_PunkMale_DoorSmallCloth_Combat_C.OnBegin");

	UASpawn_PunkMale_DoorSmallCloth_Combat_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_PunkMale_DoorSmallCloth_Combat.ASpawn_PunkMale_DoorSmallCloth_Combat_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_PunkMale_DoorSmallCloth_Combat_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_PunkMale_DoorSmallCloth_Combat.ASpawn_PunkMale_DoorSmallCloth_Combat_C.OnEnd");

	UASpawn_PunkMale_DoorSmallCloth_Combat_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_PunkMale_DoorSmallCloth_Combat.ASpawn_PunkMale_DoorSmallCloth_Combat_C.ExecuteUbergraph_ASpawn_PunkMale_DoorSmallCloth_Combat
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_PunkMale_DoorSmallCloth_Combat_C::ExecuteUbergraph_ASpawn_PunkMale_DoorSmallCloth_Combat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_PunkMale_DoorSmallCloth_Combat.ASpawn_PunkMale_DoorSmallCloth_Combat_C.ExecuteUbergraph_ASpawn_PunkMale_DoorSmallCloth_Combat");

	UASpawn_PunkMale_DoorSmallCloth_Combat_C_ExecuteUbergraph_ASpawn_PunkMale_DoorSmallCloth_Combat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
