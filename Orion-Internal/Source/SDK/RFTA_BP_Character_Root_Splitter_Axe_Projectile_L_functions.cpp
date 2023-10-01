// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Character_Root_Splitter_Axe_Projectile_L_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Character_Root_Splitter_Axe_Projectile_L.BP_Character_Root_Splitter_Axe_Projectile_L_C.UserConstructionScript
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_Root_Splitter_Axe_Projectile_L_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_Root_Splitter_Axe_Projectile_L.BP_Character_Root_Splitter_Axe_Projectile_L_C.UserConstructionScript");

	ABP_Character_Root_Splitter_Axe_Projectile_L_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character_Root_Splitter_Axe_Projectile_L.BP_Character_Root_Splitter_Axe_Projectile_L_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_Character_Root_Splitter_Axe_Projectile_L_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_Root_Splitter_Axe_Projectile_L.BP_Character_Root_Splitter_Axe_Projectile_L_C.ReceiveBeginPlay");

	ABP_Character_Root_Splitter_Axe_Projectile_L_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character_Root_Splitter_Axe_Projectile_L.BP_Character_Root_Splitter_Axe_Projectile_L_C.ExecuteUbergraph_BP_Character_Root_Splitter_Axe_Projectile_L
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Root_Splitter_Axe_Projectile_L_C::ExecuteUbergraph_BP_Character_Root_Splitter_Axe_Projectile_L(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_Root_Splitter_Axe_Projectile_L.BP_Character_Root_Splitter_Axe_Projectile_L_C.ExecuteUbergraph_BP_Character_Root_Splitter_Axe_Projectile_L");

	ABP_Character_Root_Splitter_Axe_Projectile_L_C_ExecuteUbergraph_BP_Character_Root_Splitter_Axe_Projectile_L_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
