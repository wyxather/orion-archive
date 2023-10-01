// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_Tink_GunMelee_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARandom_Tink_GunMelee.ARandom_Tink_GunMelee_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARandom_Tink_GunMelee_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_Tink_GunMelee.ARandom_Tink_GunMelee_C.OnBegin");

	UARandom_Tink_GunMelee_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_Tink_GunMelee.ARandom_Tink_GunMelee_C.MeleeAttack
// (BlueprintCallable, BlueprintEvent)

void UARandom_Tink_GunMelee_C::MeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_Tink_GunMelee.ARandom_Tink_GunMelee_C.MeleeAttack");

	UARandom_Tink_GunMelee_C_MeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_Tink_GunMelee.ARandom_Tink_GunMelee_C.ExecuteUbergraph_ARandom_Tink_GunMelee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARandom_Tink_GunMelee_C::ExecuteUbergraph_ARandom_Tink_GunMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_Tink_GunMelee.ARandom_Tink_GunMelee_C.ExecuteUbergraph_ARandom_Tink_GunMelee");

	UARandom_Tink_GunMelee_C_ExecuteUbergraph_ARandom_Tink_GunMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
