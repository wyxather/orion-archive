// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARand_Pet_Fidgets_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARand_Pet_Fidgets_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.OnServerBegin");

	UARand_Pet_Fidgets_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARand_Pet_Fidgets_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.OnServerEnd");

	UARand_Pet_Fidgets_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.Notify_PetSpawnAmmo
// (BlueprintCallable, BlueprintEvent)

void UARand_Pet_Fidgets_C::Notify_PetSpawnAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.Notify_PetSpawnAmmo");

	UARand_Pet_Fidgets_C_Notify_PetSpawnAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.ExecuteUbergraph_ARand_Pet_Fidgets
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARand_Pet_Fidgets_C::ExecuteUbergraph_ARand_Pet_Fidgets(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.ExecuteUbergraph_ARand_Pet_Fidgets");

	UARand_Pet_Fidgets_C_ExecuteUbergraph_ARand_Pet_Fidgets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
