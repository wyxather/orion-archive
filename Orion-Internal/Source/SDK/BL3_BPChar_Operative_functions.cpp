// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Operative_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Operative.BPChar_Operative_C.CanActivateTrapCard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Operative_C::CanActivateTrapCard(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.CanActivateTrapCard");

	ABPChar_Operative_C_CanActivateTrapCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPChar_Operative.BPChar_Operative_C.GetBarrierActionAbility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility_Barrier* res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Operative_C::GetBarrierActionAbility(class UOakActionAbility_Barrier** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetBarrierActionAbility");

	ABPChar_Operative_C_GetBarrierActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPChar_Operative.BPChar_Operative_C.GetOperativeStatusEffectOverrides
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCauseDamageStatusEffectOverrides Overrides                      (Parm, OutParm)

void ABPChar_Operative_C::GetOperativeStatusEffectOverrides(struct FCauseDamageStatusEffectOverrides* Overrides)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetOperativeStatusEffectOverrides");

	ABPChar_Operative_C_GetOperativeStatusEffectOverrides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Overrides != nullptr)
		*Overrides = params.Overrides;
}


// Function BPChar_Operative.BPChar_Operative_C.GetOperativeShieldRemainingPercent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ShieldPercentRemaining         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Operative_C::GetOperativeShieldRemainingPercent(float* ShieldPercentRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetOperativeShieldRemainingPercent");

	ABPChar_Operative_C_GetOperativeShieldRemainingPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShieldPercentRemaining != nullptr)
		*ShieldPercentRemaining = params.ShieldPercentRemaining;
}


// Function BPChar_Operative.BPChar_Operative_C.GetDigiCloneShieldRemainingPercent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ShieldPercentRemaining         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Operative_C::GetDigiCloneShieldRemainingPercent(float* ShieldPercentRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetDigiCloneShieldRemainingPercent");

	ABPChar_Operative_C_GetDigiCloneShieldRemainingPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShieldPercentRemaining != nullptr)
		*ShieldPercentRemaining = params.ShieldPercentRemaining;
}


// Function BPChar_Operative.BPChar_Operative_C.GetGRMLNActionAbility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UOakActionAbility_GRMLN* res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Operative_C::GetGRMLNActionAbility(class UOakActionAbility_GRMLN** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetGRMLNActionAbility");

	ABPChar_Operative_C_GetGRMLNActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPChar_Operative.BPChar_Operative_C.GetDigicloneActionAbility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UOakActionAbility_Digiclone* res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Operative_C::GetDigicloneActionAbility(class UOakActionAbility_Digiclone** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetDigicloneActionAbility");

	ABPChar_Operative_C_GetDigicloneActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPChar_Operative.BPChar_Operative_C.SpawnAndThrowOperativeGrenade
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnFromActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SpawnFromSocket                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Grenade                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Operative_C::SpawnAndThrowOperativeGrenade(class AActor* SpawnFromActor, const struct FName& SpawnFromSocket, bool* res, class AActor** Grenade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.SpawnAndThrowOperativeGrenade");

	ABPChar_Operative_C_SpawnAndThrowOperativeGrenade_Params params;
	params.SpawnFromActor = SpawnFromActor;
	params.SpawnFromSocket = SpawnFromSocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
	if (Grenade != nullptr)
		*Grenade = params.Grenade;
}


// Function BPChar_Operative.BPChar_Operative_C.BlockOperativeActionSkillActivation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldBlock                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Operative_C::BlockOperativeActionSkillActivation(bool* ShouldBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.BlockOperativeActionSkillActivation");

	ABPChar_Operative_C_BlockOperativeActionSkillActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldBlock != nullptr)
		*ShouldBlock = params.ShouldBlock;
}


// Function BPChar_Operative.BPChar_Operative_C.GetDroneSpawnLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void ABPChar_Operative_C::GetDroneSpawnLocation(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetDroneSpawnLocation");

	ABPChar_Operative_C_GetDroneSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Head
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxSkeletalMeshComponent* Head_Mesh                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Operative_C::Get_Skeletal_Mesh_Head(class UGbxSkeletalMeshComponent** Head_Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Head");

	ABPChar_Operative_C_Get_Skeletal_Mesh_Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Head_Mesh != nullptr)
		*Head_Mesh = params.Head_Mesh;
}


// Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Arms
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Arms_Mesh                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Operative_C::Get_Skeletal_Mesh_Arms(class USkeletalMeshComponent** Arms_Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Arms");

	ABPChar_Operative_C_Get_Skeletal_Mesh_Arms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arms_Mesh != nullptr)
		*Arms_Mesh = params.Arms_Mesh;
}


// Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Legs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxSkeletalMeshComponent* Legs                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Operative_C::Get_Skeletal_Mesh_Legs(class UGbxSkeletalMeshComponent** Legs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Legs");

	ABPChar_Operative_C_Get_Skeletal_Mesh_Legs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Legs != nullptr)
		*Legs = params.Legs;
}


// Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Skeletal_Mesh                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Operative_C::Get_Skeletal_Mesh(class USkeletalMeshComponent** Skeletal_Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh");

	ABPChar_Operative_C_Get_Skeletal_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Skeletal_Mesh != nullptr)
		*Skeletal_Mesh = params.Skeletal_Mesh;
}


// Function BPChar_Operative.BPChar_Operative_C.Get Materials Head
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)

void ABPChar_Operative_C::Get_Materials_Head(TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Materials Head");

	ABPChar_Operative_C_Get_Materials_Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function BPChar_Operative.BPChar_Operative_C.Get Materials Arms
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)

void ABPChar_Operative_C::Get_Materials_Arms(TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Materials Arms");

	ABPChar_Operative_C_Get_Materials_Arms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function BPChar_Operative.BPChar_Operative_C.Get Materials Legs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)

void ABPChar_Operative_C::Get_Materials_Legs(TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Materials Legs");

	ABPChar_Operative_C_Get_Materials_Legs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function BPChar_Operative.BPChar_Operative_C.Get Materials Skeletal Mesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)

void ABPChar_Operative_C::Get_Materials_Skeletal_Mesh(TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Materials Skeletal Mesh");

	ABPChar_Operative_C_Get_Materials_Skeletal_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function BPChar_Operative.BPChar_Operative_C.Get Materials FP Gun
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)

void ABPChar_Operative_C::Get_Materials_FP_Gun(TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Materials FP Gun");

	ABPChar_Operative_C_Get_Materials_FP_Gun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function BPChar_Operative.BPChar_Operative_C.Get Materials TP Gun
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)

void ABPChar_Operative_C::Get_Materials_TP_Gun(TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Materials TP Gun");

	ABPChar_Operative_C_Get_Materials_TP_Gun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function BPChar_Operative.BPChar_Operative_C.GetHeadMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           HeadMesh                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Operative_C::GetHeadMesh(class USkeletalMesh** HeadMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetHeadMesh");

	ABPChar_Operative_C_GetHeadMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HeadMesh != nullptr)
		*HeadMesh = params.HeadMesh;
}


// Function BPChar_Operative.BPChar_Operative_C.InnerDoCryoNovaAtLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDamage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Operative_C::InnerDoCryoNovaAtLocation(const struct FVector& InLocation, float InDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.InnerDoCryoNovaAtLocation");

	ABPChar_Operative_C_InnerDoCryoNovaAtLocation_Params params;
	params.InLocation = InLocation;
	params.InDamage = InDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Operative.BPChar_Operative_C.GetSecondaryActionAbility
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UOakActionAbility*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOakActionAbility* ABPChar_Operative_C::GetSecondaryActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetSecondaryActionAbility");

	ABPChar_Operative_C_GetSecondaryActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPChar_Operative.BPChar_Operative_C.GetPrimaryActionAbility
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UOakActionAbility*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOakActionAbility* ABPChar_Operative_C::GetPrimaryActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetPrimaryActionAbility");

	ABPChar_Operative_C_GetPrimaryActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPChar_Operative.BPChar_Operative_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Operative_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.UserConstructionScript");

	ABPChar_Operative_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Operative.BPChar_Operative_C.DigistructSNTRY__FinishedFunc
// (BlueprintEvent)

void ABPChar_Operative_C::DigistructSNTRY__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.DigistructSNTRY__FinishedFunc");

	ABPChar_Operative_C_DigistructSNTRY__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Operative.BPChar_Operative_C.DigistructSNTRY__UpdateFunc
// (BlueprintEvent)

void ABPChar_Operative_C::DigistructSNTRY__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.DigistructSNTRY__UpdateFunc");

	ABPChar_Operative_C_DigistructSNTRY__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Operative.BPChar_Operative_C.PlayerOperativeDroneSpawnAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Operative_C::PlayerOperativeDroneSpawnAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.PlayerOperativeDroneSpawnAnimation");

	ABPChar_Operative_C_PlayerOperativeDroneSpawnAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Operative.BPChar_Operative_C.HideOperativeDroneSpawnAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Operative_C::HideOperativeDroneSpawnAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.HideOperativeDroneSpawnAnimation");

	ABPChar_Operative_C_HideOperativeDroneSpawnAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Operative.BPChar_Operative_C.DoOperativeCryoNovaAtLocation
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Operative_C::DoOperativeCryoNovaAtLocation(const struct FVector& Location, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.DoOperativeCryoNovaAtLocation");

	ABPChar_Operative_C_DoOperativeCryoNovaAtLocation_Params params;
	params.Location = Location;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Operative.BPChar_Operative_C.SetOperativeDeviceVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Operative_C::SetOperativeDeviceVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.SetOperativeDeviceVisible");

	ABPChar_Operative_C_SetOperativeDeviceVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Operative.BPChar_Operative_C.SpawnCannonEmitterMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         CannonEmitter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  CannonComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Operative_C::SpawnCannonEmitterMulticast(class UParticleSystem* CannonEmitter, class USkeletalMeshComponent* CannonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.SpawnCannonEmitterMulticast");

	ABPChar_Operative_C_SpawnCannonEmitterMulticast_Params params;
	params.CannonEmitter = CannonEmitter;
	params.CannonComponent = CannonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Operative.BPChar_Operative_C.ExecuteUbergraph_BPChar_Operative
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Operative_C::ExecuteUbergraph_BPChar_Operative(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.ExecuteUbergraph_BPChar_Operative");

	ABPChar_Operative_C_ExecuteUbergraph_BPChar_Operative_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
