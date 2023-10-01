// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_GravityCoreShot_AOE_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.GetDamage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_GravityCoreShot_AOE_C::GetDamage(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.GetDamage");

	UAction_Mod_GravityCoreShot_AOE_C_GetDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.Get Socket Location
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  InSocketName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UAction_Mod_GravityCoreShot_AOE_C::Get_Socket_Location(struct FName* InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.Get Socket Location");

	UAction_Mod_GravityCoreShot_AOE_C_Get_Socket_Location_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_GravityCoreShot_AOE_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.OnActionStart");

	UAction_Mod_GravityCoreShot_AOE_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.PreprocessAOE
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumHits                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_GravityCoreShot_AOE_C::PreprocessAOE(int* NumHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.PreprocessAOE");

	UAction_Mod_GravityCoreShot_AOE_C_PreprocessAOE_Params params;
	params.NumHits = NumHits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.ExecuteUbergraph_Action_Mod_GravityCoreShot_AOE
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_GravityCoreShot_AOE_C::ExecuteUbergraph_Action_Mod_GravityCoreShot_AOE(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.ExecuteUbergraph_Action_Mod_GravityCoreShot_AOE");

	UAction_Mod_GravityCoreShot_AOE_C_ExecuteUbergraph_Action_Mod_GravityCoreShot_AOE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
