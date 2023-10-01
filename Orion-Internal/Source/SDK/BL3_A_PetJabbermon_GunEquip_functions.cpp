// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_GunEquip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetJabbermon_GunEquip.A_PetJabbermon_GunEquip_C.Notify_Equip
// (BlueprintCallable, BlueprintEvent)

void UA_PetJabbermon_GunEquip_C::Notify_Equip()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_GunEquip.A_PetJabbermon_GunEquip_C.Notify_Equip");

	UA_PetJabbermon_GunEquip_C_Notify_Equip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_GunEquip.A_PetJabbermon_GunEquip_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_GunEquip_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_GunEquip.A_PetJabbermon_GunEquip_C.OnServerEnd");

	UA_PetJabbermon_GunEquip_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_GunEquip.A_PetJabbermon_GunEquip_C.ExecuteUbergraph_A_PetJabbermon_GunEquip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_GunEquip_C::ExecuteUbergraph_A_PetJabbermon_GunEquip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_GunEquip.A_PetJabbermon_GunEquip_C.ExecuteUbergraph_A_PetJabbermon_GunEquip");

	UA_PetJabbermon_GunEquip_C_ExecuteUbergraph_A_PetJabbermon_GunEquip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
