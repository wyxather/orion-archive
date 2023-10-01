// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Root_Rot_Bomb_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.OnNotifyTakeDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_Root_Rot_Bomb_C::OnNotifyTakeDamage(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.OnNotifyTakeDamage");

	ABP_Root_Rot_Bomb_C_OnNotifyTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_Root_Rot_Bomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.ReceiveBeginPlay");

	ABP_Root_Rot_Bomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.OnTimer
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_Root_Rot_Bomb_C::OnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.OnTimer");

	ABP_Root_Rot_Bomb_C_OnTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.ExecuteUbergraph_BP_Root_Rot_Bomb
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Root_Rot_Bomb_C::ExecuteUbergraph_BP_Root_Rot_Bomb(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.ExecuteUbergraph_BP_Root_Rot_Bomb");

	ABP_Root_Rot_Bomb_C_ExecuteUbergraph_BP_Root_Rot_Bomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
