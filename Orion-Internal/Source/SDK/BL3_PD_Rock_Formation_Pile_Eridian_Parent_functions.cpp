// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Rock_Formation_Pile_Eridian_Parent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APD_Rock_Formation_Pile_Eridian_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.UserConstructionScript");

	APD_Rock_Formation_Pile_Eridian_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.Dissolve__FinishedFunc
// (BlueprintEvent)

void APD_Rock_Formation_Pile_Eridian_Parent_C::Dissolve__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.Dissolve__FinishedFunc");

	APD_Rock_Formation_Pile_Eridian_Parent_C_Dissolve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.Dissolve__UpdateFunc
// (BlueprintEvent)

void APD_Rock_Formation_Pile_Eridian_Parent_C::Dissolve__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.Dissolve__UpdateFunc");

	APD_Rock_Formation_Pile_Eridian_Parent_C_Dissolve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_4_TakeAnyPipelineDamageDelegate__DelegateSignature_PD_Rock_Formation_Pile_Eridian
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void APD_Rock_Formation_Pile_Eridian_Parent_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_4_TakeAnyPipelineDamageDelegate__DelegateSignature_PD_Rock_Formation_Pile_Eridian(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_4_TakeAnyPipelineDamageDelegate__DelegateSignature_PD_Rock_Formation_Pile_Eridian");

	APD_Rock_Formation_Pile_Eridian_Parent_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_4_TakeAnyPipelineDamageDelegate__DelegateSignature_PD_Rock_Formation_Pile_Eridian_Params params;
	params.DamageReceiver = DamageReceiver;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.Damaged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpulseDir                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APD_Rock_Formation_Pile_Eridian_Parent_C::Damaged(const struct FVector& HitLocation, const struct FVector& ImpulseDir, class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.Damaged");

	APD_Rock_Formation_Pile_Eridian_Parent_C_Damaged_Params params;
	params.HitLocation = HitLocation;
	params.ImpulseDir = ImpulseDir;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APD_Rock_Formation_Pile_Eridian_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.ReceiveBeginPlay");

	APD_Rock_Formation_Pile_Eridian_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.DestroyCrystal
// (BlueprintCallable, BlueprintEvent)

void APD_Rock_Formation_Pile_Eridian_Parent_C::DestroyCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.DestroyCrystal");

	APD_Rock_Formation_Pile_Eridian_Parent_C_DestroyCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.FractureCrystal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDestructibleComponent*  Crystal                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APD_Rock_Formation_Pile_Eridian_Parent_C::FractureCrystal(class UDestructibleComponent* Crystal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.FractureCrystal");

	APD_Rock_Formation_Pile_Eridian_Parent_C_FractureCrystal_Params params;
	params.Crystal = Crystal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Parent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APD_Rock_Formation_Pile_Eridian_Parent_C::ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Parent");

	APD_Rock_Formation_Pile_Eridian_Parent_C_ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.CrystalDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APD_Rock_Formation_Pile_Eridian_Parent_C::CrystalDestroyed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.CrystalDestroyed__DelegateSignature");

	APD_Rock_Formation_Pile_Eridian_Parent_C_CrystalDestroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
