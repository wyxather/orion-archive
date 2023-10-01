// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Breakable_Window_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Breakable_Window.BP_Breakable_Window_C.OnDeath
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ABP_Breakable_Window_C::OnDeath(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Breakable_Window.BP_Breakable_Window_C.OnDeath");

	ABP_Breakable_Window_C_OnDeath_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Breakable_Window.BP_Breakable_Window_C.OnNotifyDead
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_Breakable_Window_C::OnNotifyDead(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Breakable_Window.BP_Breakable_Window_C.OnNotifyDead");

	ABP_Breakable_Window_C_OnNotifyDead_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Breakable_Window.BP_Breakable_Window_C.ExecuteUbergraph_BP_Breakable_Window
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Breakable_Window_C::ExecuteUbergraph_BP_Breakable_Window(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Breakable_Window.BP_Breakable_Window_C.ExecuteUbergraph_BP_Breakable_Window");

	ABP_Breakable_Window_C_ExecuteUbergraph_BP_Breakable_Window_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
