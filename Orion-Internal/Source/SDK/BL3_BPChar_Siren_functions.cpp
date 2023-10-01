// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Siren_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Siren.BPChar_Siren_C.GetSoulSapProjectile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Siren_C::GetSoulSapProjectile(class UClass** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetSoulSapProjectile");

	ABPChar_Siren_C_GetSoulSapProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPChar_Siren.BPChar_Siren_C.GetStillnessOfMindControlledMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Siren_C::GetStillnessOfMindControlledMove(class UClass** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetStillnessOfMindControlledMove");

	ABPChar_Siren_C_GetStillnessOfMindControlledMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPChar_Siren.BPChar_Siren_C.SirenHasAscendantSkill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Siren_C::SirenHasAscendantSkill(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.SirenHasAscendantSkill");

	ABPChar_Siren_C_SirenHasAscendantSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPChar_Siren.BPChar_Siren_C.GetSirenGhostArmsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxSkeletalMeshComponent* _3rd_Person_Mesh               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGbxSkeletalMeshComponent* _1st_Person_Mesh               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Siren_C::GetSirenGhostArmsComponent(class UGbxSkeletalMeshComponent** _3rd_Person_Mesh, class UGbxSkeletalMeshComponent** _1st_Person_Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetSirenGhostArmsComponent");

	ABPChar_Siren_C_GetSirenGhostArmsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_3rd_Person_Mesh != nullptr)
		*_3rd_Person_Mesh = params._3rd_Person_Mesh;
	if (_1st_Person_Mesh != nullptr)
		*_1st_Person_Mesh = params._1st_Person_Mesh;
}


// Function BPChar_Siren.BPChar_Siren_C.GetPhaseCastProjectileComponents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Body                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGbxSkeletalMeshComponent* Head                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  GhostArms                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Siren_C::GetPhaseCastProjectileComponents(class USkeletalMeshComponent** Body, class UGbxSkeletalMeshComponent** Head, class USkeletalMeshComponent** GhostArms)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetPhaseCastProjectileComponents");

	ABPChar_Siren_C_GetPhaseCastProjectileComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Body != nullptr)
		*Body = params.Body;
	if (Head != nullptr)
		*Head = params.Head;
	if (GhostArms != nullptr)
		*GhostArms = params.GhostArms;
}


// Function BPChar_Siren.BPChar_Siren_C.GetSirenArmsReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxSkeletalMeshComponent* Skel_Mesh_3rd                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGbxSkeletalMeshComponent* Skel_Mesh_1st                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Siren_C::GetSirenArmsReference(class UGbxSkeletalMeshComponent** Skel_Mesh_3rd, class UGbxSkeletalMeshComponent** Skel_Mesh_1st)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetSirenArmsReference");

	ABPChar_Siren_C_GetSirenArmsReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Skel_Mesh_3rd != nullptr)
		*Skel_Mesh_3rd = params.Skel_Mesh_3rd;
	if (Skel_Mesh_1st != nullptr)
		*Skel_Mesh_1st = params.Skel_Mesh_1st;
}


// Function BPChar_Siren.BPChar_Siren_C.GetPhaseTranceAbility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility_PhaseTrance* res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Siren_C::GetPhaseTranceAbility(class UOakActionAbility_PhaseTrance** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetPhaseTranceAbility");

	ABPChar_Siren_C_GetPhaseTranceAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPChar_Siren.BPChar_Siren_C.GetHeadMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           HeadMesh                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Siren_C::GetHeadMesh(class USkeletalMesh** HeadMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetHeadMesh");

	ABPChar_Siren_C_GetHeadMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HeadMesh != nullptr)
		*HeadMesh = params.HeadMesh;
}


// Function BPChar_Siren.BPChar_Siren_C.GetPrimaryActionAbility
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UOakActionAbility*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOakActionAbility* ABPChar_Siren_C::GetPrimaryActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetPrimaryActionAbility");

	ABPChar_Siren_C_GetPrimaryActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPChar_Siren.BPChar_Siren_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Siren_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.UserConstructionScript");

	ABPChar_Siren_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.FadeArms3rd__FinishedFunc
// (BlueprintEvent)

void ABPChar_Siren_C::FadeArms3rd__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.FadeArms3rd__FinishedFunc");

	ABPChar_Siren_C_FadeArms3rd__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.FadeArms3rd__UpdateFunc
// (BlueprintEvent)

void ABPChar_Siren_C::FadeArms3rd__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.FadeArms3rd__UpdateFunc");

	ABPChar_Siren_C_FadeArms3rd__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.TattooFlare__FinishedFunc
// (BlueprintEvent)

void ABPChar_Siren_C::TattooFlare__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.TattooFlare__FinishedFunc");

	ABPChar_Siren_C_TattooFlare__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.TattooFlare__UpdateFunc
// (BlueprintEvent)

void ABPChar_Siren_C::TattooFlare__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.TattooFlare__UpdateFunc");

	ABPChar_Siren_C_TattooFlare__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.SetArmsMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Siren_C::SetArmsMaterial(class UMaterialInstance* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.SetArmsMaterial");

	ABPChar_Siren_C_SetArmsMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.Play3rdPersonArmFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInstant                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Siren_C::Play3rdPersonArmFade(bool bInstant, bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.Play3rdPersonArmFade");

	ABPChar_Siren_C_Play3rdPersonArmFade_Params params;
	params.bInstant = bInstant;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.PlayTattooFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Siren_C::PlayTattooFade(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.PlayTattooFade");

	ABPChar_Siren_C_PlayTattooFade_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.SetArmsElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPhaseTranceElementalType      Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Siren_C::SetArmsElement(EPhaseTranceElementalType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.SetArmsElement");

	ABPChar_Siren_C_SetArmsElement_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.HandleInstant3rdPersonArmFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Siren_C::HandleInstant3rdPersonArmFade(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.HandleInstant3rdPersonArmFade");

	ABPChar_Siren_C_HandleInstant3rdPersonArmFade_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.Handle3rdPersonArmFadeTransition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Siren_C::Handle3rdPersonArmFadeTransition(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.Handle3rdPersonArmFadeTransition");

	ABPChar_Siren_C_Handle3rdPersonArmFadeTransition_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Siren
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_Siren_C::BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Siren(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Siren");

	ABPChar_Siren_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Siren_Params params;
	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_Siren_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.ReceiveBeginPlay");

	ABPChar_Siren_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.InterruptArmFade
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Siren_C::InterruptArmFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.InterruptArmFade");

	ABPChar_Siren_C_InterruptArmFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Siren
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABPChar_Siren_C::BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Siren(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Siren");

	ABPChar_Siren_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Siren_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.PhasegraspEndedAndEnemyKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Killed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Siren_C::PhasegraspEndedAndEnemyKilled(bool Killed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.PhasegraspEndedAndEnemyKilled");

	ABPChar_Siren_C_PhasegraspEndedAndEnemyKilled_Params params;
	params.Killed = Killed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Siren.BPChar_Siren_C.ExecuteUbergraph_BPChar_Siren
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Siren_C::ExecuteUbergraph_BPChar_Siren(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.ExecuteUbergraph_BPChar_Siren");

	ABPChar_Siren_C_ExecuteUbergraph_BPChar_Siren_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
