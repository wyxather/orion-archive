// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Drone_VDayHeart_Buff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.TryBuffFeedbackLightProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_Drone_VDayHeart_Buff_C::TryBuffFeedbackLightProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.TryBuffFeedbackLightProjectile");

	AProj_Drone_VDayHeart_Buff_C_TryBuffFeedbackLightProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Drone_VDayHeart_Buff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.UserConstructionScript");

	AProj_Drone_VDayHeart_Buff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProj_Drone_VDayHeart_Buff_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire");

	AProj_Drone_VDayHeart_Buff_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.ExecuteUbergraph_Proj_Drone_VDayHeart_Buff
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Drone_VDayHeart_Buff_C::ExecuteUbergraph_Proj_Drone_VDayHeart_Buff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.ExecuteUbergraph_Proj_Drone_VDayHeart_Buff");

	AProj_Drone_VDayHeart_Buff_C_ExecuteUbergraph_Proj_Drone_VDayHeart_Buff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
