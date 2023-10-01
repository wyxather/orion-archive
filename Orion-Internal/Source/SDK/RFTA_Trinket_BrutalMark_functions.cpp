// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trinket_BrutalMark_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trinket_BrutalMark.Trinket_BrutalMark_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrinket_BrutalMark_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_BrutalMark.Trinket_BrutalMark_C.ModifyInspectInfo");

	ATrinket_BrutalMark_C_ModifyInspectInfo_Params params;
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


// Function Trinket_BrutalMark.Trinket_BrutalMark_C.OnEquipped
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ATrinket_BrutalMark_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_BrutalMark.Trinket_BrutalMark_C.OnEquipped");

	ATrinket_BrutalMark_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trinket_BrutalMark.Trinket_BrutalMark_C.ExecuteUbergraph_Trinket_BrutalMark
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrinket_BrutalMark_C::ExecuteUbergraph_Trinket_BrutalMark(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_BrutalMark.Trinket_BrutalMark_C.ExecuteUbergraph_Trinket_BrutalMark");

	ATrinket_BrutalMark_C_ExecuteUbergraph_Trinket_BrutalMark_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
