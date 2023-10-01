// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_EnforcerGun_DoorSmall_Barricaded_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ASpawn_EnforcerGun_DoorSmall_Barricaded.ASpawn_EnforcerGun_DoorSmall_Barricaded_C.Notify_BarricadeBreak
// (BlueprintCallable, BlueprintEvent)

void UASpawn_EnforcerGun_DoorSmall_Barricaded_C::Notify_BarricadeBreak()
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_EnforcerGun_DoorSmall_Barricaded.ASpawn_EnforcerGun_DoorSmall_Barricaded_C.Notify_BarricadeBreak");

	UASpawn_EnforcerGun_DoorSmall_Barricaded_C_Notify_BarricadeBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_EnforcerGun_DoorSmall_Barricaded.ASpawn_EnforcerGun_DoorSmall_Barricaded_C.ExecuteUbergraph_ASpawn_EnforcerGun_DoorSmall_Barricaded
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_EnforcerGun_DoorSmall_Barricaded_C::ExecuteUbergraph_ASpawn_EnforcerGun_DoorSmall_Barricaded(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_EnforcerGun_DoorSmall_Barricaded.ASpawn_EnforcerGun_DoorSmall_Barricaded_C.ExecuteUbergraph_ASpawn_EnforcerGun_DoorSmall_Barricaded");

	UASpawn_EnforcerGun_DoorSmall_Barricaded_C_ExecuteUbergraph_ASpawn_EnforcerGun_DoorSmall_Barricaded_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
