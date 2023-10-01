// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_Tink_GoonPack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ASpawn_Tink_GoonPack.ASpawn_Tink_GoonPack_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_Tink_GoonPack_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_Tink_GoonPack.ASpawn_Tink_GoonPack_C.OnServerEnd");

	UASpawn_Tink_GoonPack_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_Tink_GoonPack.ASpawn_Tink_GoonPack_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_Tink_GoonPack_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_Tink_GoonPack.ASpawn_Tink_GoonPack_C.OnServerBegin");

	UASpawn_Tink_GoonPack_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_Tink_GoonPack.ASpawn_Tink_GoonPack_C.ExecuteUbergraph_ASpawn_Tink_GoonPack
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_Tink_GoonPack_C::ExecuteUbergraph_ASpawn_Tink_GoonPack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_Tink_GoonPack.ASpawn_Tink_GoonPack_C.ExecuteUbergraph_ASpawn_Tink_GoonPack");

	UASpawn_Tink_GoonPack_C_ExecuteUbergraph_ASpawn_Tink_GoonPack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
