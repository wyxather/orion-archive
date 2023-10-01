// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Character_Root_Priest_SeedCaller_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Character_Root_Priest_SeedCaller.Action_Character_Root_Priest_SeedCaller_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Character_Root_Priest_SeedCaller_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Root_Priest_SeedCaller.Action_Character_Root_Priest_SeedCaller_C.OnActionStart");

	UAction_Character_Root_Priest_SeedCaller_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Character_Root_Priest_SeedCaller.Action_Character_Root_Priest_SeedCaller_C.ExecuteUbergraph_Action_Character_Root_Priest_SeedCaller
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Character_Root_Priest_SeedCaller_C::ExecuteUbergraph_Action_Character_Root_Priest_SeedCaller(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Root_Priest_SeedCaller.Action_Character_Root_Priest_SeedCaller_C.ExecuteUbergraph_Action_Character_Root_Priest_SeedCaller");

	UAction_Character_Root_Priest_SeedCaller_C_ExecuteUbergraph_Action_Character_Root_Priest_SeedCaller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
