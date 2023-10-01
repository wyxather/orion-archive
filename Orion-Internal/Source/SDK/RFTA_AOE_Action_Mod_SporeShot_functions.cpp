// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_AOE_Action_Mod_SporeShot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AOE_Action_Mod_SporeShot.AOE_Action_Mod_SporeShot_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAOE_Action_Mod_SporeShot_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AOE_Action_Mod_SporeShot.AOE_Action_Mod_SporeShot_C.OnActionStart");

	UAOE_Action_Mod_SporeShot_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AOE_Action_Mod_SporeShot.AOE_Action_Mod_SporeShot_C.ExecuteUbergraph_AOE_Action_Mod_SporeShot
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAOE_Action_Mod_SporeShot_C::ExecuteUbergraph_AOE_Action_Mod_SporeShot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AOE_Action_Mod_SporeShot.AOE_Action_Mod_SporeShot_C.ExecuteUbergraph_AOE_Action_Mod_SporeShot");

	UAOE_Action_Mod_SporeShot_C_ExecuteUbergraph_AOE_Action_Mod_SporeShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
