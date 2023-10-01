// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trinket_RingOfTheAdmiral_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trinket_RingOfTheAdmiral.Trinket_RingOfTheAdmiral_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrinket_RingOfTheAdmiral_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_RingOfTheAdmiral.Trinket_RingOfTheAdmiral_C.ModifyInspectInfo");

	ATrinket_RingOfTheAdmiral_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Trinket_RingOfTheAdmiral.Trinket_RingOfTheAdmiral_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ATrinket_RingOfTheAdmiral_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_RingOfTheAdmiral.Trinket_RingOfTheAdmiral_C.OnComputeStats");

	ATrinket_RingOfTheAdmiral_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trinket_RingOfTheAdmiral.Trinket_RingOfTheAdmiral_C.ExecuteUbergraph_Trinket_RingOfTheAdmiral
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrinket_RingOfTheAdmiral_C::ExecuteUbergraph_Trinket_RingOfTheAdmiral(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_RingOfTheAdmiral.Trinket_RingOfTheAdmiral_C.ExecuteUbergraph_Trinket_RingOfTheAdmiral");

	ATrinket_RingOfTheAdmiral_C_ExecuteUbergraph_Trinket_RingOfTheAdmiral_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
