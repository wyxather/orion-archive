// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Character_Root_Broken_Axe_Projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Character_Root_Broken_Axe_Projectile.BP_Character_Root_Broken_Axe_Projectile_C.UserConstructionScript
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_Root_Broken_Axe_Projectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_Root_Broken_Axe_Projectile.BP_Character_Root_Broken_Axe_Projectile_C.UserConstructionScript");

	ABP_Character_Root_Broken_Axe_Projectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character_Root_Broken_Axe_Projectile.BP_Character_Root_Broken_Axe_Projectile_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_Character_Root_Broken_Axe_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_Root_Broken_Axe_Projectile.BP_Character_Root_Broken_Axe_Projectile_C.ReceiveBeginPlay");

	ABP_Character_Root_Broken_Axe_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character_Root_Broken_Axe_Projectile.BP_Character_Root_Broken_Axe_Projectile_C.ExecuteUbergraph_BP_Character_Root_Broken_Axe_Projectile
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Root_Broken_Axe_Projectile_C::ExecuteUbergraph_BP_Character_Root_Broken_Axe_Projectile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_Root_Broken_Axe_Projectile.BP_Character_Root_Broken_Axe_Projectile_C.ExecuteUbergraph_BP_Character_Root_Broken_Axe_Projectile");

	ABP_Character_Root_Broken_Axe_Projectile_C_ExecuteUbergraph_BP_Character_Root_Broken_Axe_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
