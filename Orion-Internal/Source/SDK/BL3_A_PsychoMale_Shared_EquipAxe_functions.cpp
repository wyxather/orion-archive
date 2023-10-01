// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Shared_EquipAxe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PsychoMale_Shared_EquipAxe.A_PsychoMale_Shared_EquipAxe_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_Shared_EquipAxe_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_EquipAxe.A_PsychoMale_Shared_EquipAxe_C.OnBegin");

	UA_PsychoMale_Shared_EquipAxe_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Shared_EquipAxe.A_PsychoMale_Shared_EquipAxe_C.Notify_SpawnAxe
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_Shared_EquipAxe_C::Notify_SpawnAxe()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_EquipAxe.A_PsychoMale_Shared_EquipAxe_C.Notify_SpawnAxe");

	UA_PsychoMale_Shared_EquipAxe_C_Notify_SpawnAxe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Shared_EquipAxe.A_PsychoMale_Shared_EquipAxe_C.ExecuteUbergraph_A_PsychoMale_Shared_EquipAxe
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_Shared_EquipAxe_C::ExecuteUbergraph_A_PsychoMale_Shared_EquipAxe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_EquipAxe.A_PsychoMale_Shared_EquipAxe_C.ExecuteUbergraph_A_PsychoMale_Shared_EquipAxe");

	UA_PsychoMale_Shared_EquipAxe_C_ExecuteUbergraph_A_PsychoMale_Shared_EquipAxe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
