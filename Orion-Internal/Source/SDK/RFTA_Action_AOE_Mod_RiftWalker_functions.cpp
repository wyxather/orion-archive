// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Mod_RiftWalker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_AOE_Mod_RiftWalker_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.ModifyDamage");

	UAction_AOE_Mod_RiftWalker_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_AOE_Mod_RiftWalker_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.OnActionStart");

	UAction_AOE_Mod_RiftWalker_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.ExecuteUbergraph_Action_AOE_Mod_RiftWalker
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_AOE_Mod_RiftWalker_C::ExecuteUbergraph_Action_AOE_Mod_RiftWalker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.ExecuteUbergraph_Action_AOE_Mod_RiftWalker");

	UAction_AOE_Mod_RiftWalker_C_ExecuteUbergraph_Action_AOE_Mod_RiftWalker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
