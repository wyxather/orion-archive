// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_JAK_Fakobs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_Fakobs_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C.ReceiveBeginPlay");

	UBPWeaponFireProjectileComponent_JAK_Fakobs_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C.UsedWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  InputChannel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_JAK_Fakobs_C::UsedWeapon(unsigned char InputChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C.UsedWeapon");

	UBPWeaponFireProjectileComponent_JAK_Fakobs_C_UsedWeapon_Params params;
	params.InputChannel = InputChannel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Fakobs
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_JAK_Fakobs_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Fakobs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Fakobs");

	UBPWeaponFireProjectileComponent_JAK_Fakobs_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Fakobs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
