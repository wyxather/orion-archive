// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPTiesThatBindSphere_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamSourceSceneComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         res                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPTiesThatBindSphere_C::GetBeamSourceSceneComponent(class USceneComponent** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamSourceSceneComponent");

	ABPTiesThatBindSphere_C_GetBeamSourceSceneComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamDataForLinkedTarget
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AOakCharacter**          LinkedTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOakPhaseWebSphereBeamData outBeamData                    (Parm, OutParm)

void ABPTiesThatBindSphere_C::GetBeamDataForLinkedTarget(class AOakCharacter** LinkedTarget, struct FOakPhaseWebSphereBeamData* outBeamData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamDataForLinkedTarget");

	ABPTiesThatBindSphere_C_GetBeamDataForLinkedTarget_Params params;
	params.LinkedTarget = LinkedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outBeamData != nullptr)
		*outBeamData = params.outBeamData;
}


// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamSystem
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UParticleSystem*         res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPTiesThatBindSphere_C::GetBeamSystem(class UParticleSystem** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamSystem");

	ABPTiesThatBindSphere_C_GetBeamSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetSharedDamageData
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter**          LinkedTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageSourceClass              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOakPhaseWebSphere_SharedDamageData SharedDamageData               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPTiesThatBindSphere_C::GetSharedDamageData(class AOakCharacter** LinkedTarget, float* Damage, class UClass** DamageSourceClass, struct FOakPhaseWebSphere_SharedDamageData* SharedDamageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetSharedDamageData");

	ABPTiesThatBindSphere_C_GetSharedDamageData_Params params;
	params.LinkedTarget = LinkedTarget;
	params.Damage = Damage;
	params.DamageSourceClass = DamageSourceClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SharedDamageData != nullptr)
		*SharedDamageData = params.SharedDamageData;

	return params.ReturnValue;
}


// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetMaxTime
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABPTiesThatBindSphere_C::GetMaxTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetMaxTime");

	ABPTiesThatBindSphere_C_GetMaxTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPTiesThatBindSphere_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.UserConstructionScript");

	ABPTiesThatBindSphere_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPTiesThatBindSphere_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ReceiveBeginPlay");

	ABPTiesThatBindSphere_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.OnWebTargetAdded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AOakCharacter**          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPTiesThatBindSphere_C::OnWebTargetAdded(class AOakCharacter** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.OnWebTargetAdded");

	ABPTiesThatBindSphere_C_OnWebTargetAdded_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.OnGraspedTargetDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPTiesThatBindSphere_C::OnGraspedTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.OnGraspedTargetDied");

	ABPTiesThatBindSphere_C_OnGraspedTargetDied_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ApplySapRefund
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         RawAccumulateDamage            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPTiesThatBindSphere_C::ApplySapRefund(float* RawAccumulateDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ApplySapRefund");

	ABPTiesThatBindSphere_C_ApplySapRefund_Params params;
	params.RawAccumulateDamage = RawAccumulateDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ExecuteUbergraph_BPTiesThatBindSphere
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPTiesThatBindSphere_C::ExecuteUbergraph_BPTiesThatBindSphere(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ExecuteUbergraph_BPTiesThatBindSphere");

	ABPTiesThatBindSphere_C_ExecuteUbergraph_BPTiesThatBindSphere_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
