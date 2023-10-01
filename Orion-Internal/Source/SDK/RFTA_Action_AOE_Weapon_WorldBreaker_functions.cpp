// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Weapon_WorldBreaker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_AOE_Weapon_WorldBreaker.Action_AOE_Weapon_WorldBreaker_C.Get Socket Location
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  InSocketName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UAction_AOE_Weapon_WorldBreaker_C::Get_Socket_Location(struct FName* InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Weapon_WorldBreaker.Action_AOE_Weapon_WorldBreaker_C.Get Socket Location");

	UAction_AOE_Weapon_WorldBreaker_C_Get_Socket_Location_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Action_AOE_Weapon_WorldBreaker.Action_AOE_Weapon_WorldBreaker_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_AOE_Weapon_WorldBreaker_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Weapon_WorldBreaker.Action_AOE_Weapon_WorldBreaker_C.OnActionStart");

	UAction_AOE_Weapon_WorldBreaker_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_AOE_Weapon_WorldBreaker.Action_AOE_Weapon_WorldBreaker_C.ExecuteUbergraph_Action_AOE_Weapon_WorldBreaker
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_AOE_Weapon_WorldBreaker_C::ExecuteUbergraph_Action_AOE_Weapon_WorldBreaker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Weapon_WorldBreaker.Action_AOE_Weapon_WorldBreaker_C.ExecuteUbergraph_Action_AOE_Weapon_WorldBreaker");

	UAction_AOE_Weapon_WorldBreaker_C_ExecuteUbergraph_Action_AOE_Weapon_WorldBreaker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
