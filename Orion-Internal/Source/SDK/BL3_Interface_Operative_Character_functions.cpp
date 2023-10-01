// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_Operative_Character_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interface_Operative_Character.Interface_Operative_Character_C.CanActivateTrapCard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_Character_C::CanActivateTrapCard(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.CanActivateTrapCard");

	UInterface_Operative_Character_C_CanActivateTrapCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.SetOperativeDeviceVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_Character_C::SetOperativeDeviceVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.SetOperativeDeviceVisible");

	UInterface_Operative_Character_C_SetOperativeDeviceVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.GetBarrierActionAbility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility_Barrier* res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_Character_C::GetBarrierActionAbility(class UOakActionAbility_Barrier** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.GetBarrierActionAbility");

	UInterface_Operative_Character_C_GetBarrierActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.GetOperativeStatusEffectOverrides
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCauseDamageStatusEffectOverrides Overrides                      (Parm, OutParm)

void UInterface_Operative_Character_C::GetOperativeStatusEffectOverrides(struct FCauseDamageStatusEffectOverrides* Overrides)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.GetOperativeStatusEffectOverrides");

	UInterface_Operative_Character_C_GetOperativeStatusEffectOverrides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Overrides != nullptr)
		*Overrides = params.Overrides;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.GetDigiCloneShieldRemainingPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ShieldPercentRemaining         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_Character_C::GetDigiCloneShieldRemainingPercent(float* ShieldPercentRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.GetDigiCloneShieldRemainingPercent");

	UInterface_Operative_Character_C_GetDigiCloneShieldRemainingPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShieldPercentRemaining != nullptr)
		*ShieldPercentRemaining = params.ShieldPercentRemaining;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.GetOperativeShieldRemainingPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ShieldPercentRemaining         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_Character_C::GetOperativeShieldRemainingPercent(float* ShieldPercentRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.GetOperativeShieldRemainingPercent");

	UInterface_Operative_Character_C_GetOperativeShieldRemainingPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShieldPercentRemaining != nullptr)
		*ShieldPercentRemaining = params.ShieldPercentRemaining;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.GetGRMLNActionAbility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UOakActionAbility_GRMLN* res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_Character_C::GetGRMLNActionAbility(class UOakActionAbility_GRMLN** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.GetGRMLNActionAbility");

	UInterface_Operative_Character_C_GetGRMLNActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.GetDigicloneActionAbility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UOakActionAbility_Digiclone* res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_Character_C::GetDigicloneActionAbility(class UOakActionAbility_Digiclone** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.GetDigicloneActionAbility");

	UInterface_Operative_Character_C_GetDigicloneActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.SpawnAndThrowOperativeGrenade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnFromActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SpawnFromSocket                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Grenade                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_Character_C::SpawnAndThrowOperativeGrenade(class AActor* SpawnFromActor, const struct FName& SpawnFromSocket, bool* res, class AActor** Grenade)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.SpawnAndThrowOperativeGrenade");

	UInterface_Operative_Character_C_SpawnAndThrowOperativeGrenade_Params params;
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


// Function Interface_Operative_Character.Interface_Operative_Character_C.DoOperativeCryoNovaAtLocation
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_Character_C::DoOperativeCryoNovaAtLocation(const struct FVector& Location, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.DoOperativeCryoNovaAtLocation");

	UInterface_Operative_Character_C_DoOperativeCryoNovaAtLocation_Params params;
	params.Location = Location;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.BlockOperativeActionSkillActivation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldBlock                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_Character_C::BlockOperativeActionSkillActivation(bool* ShouldBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.BlockOperativeActionSkillActivation");

	UInterface_Operative_Character_C_BlockOperativeActionSkillActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldBlock != nullptr)
		*ShouldBlock = params.ShouldBlock;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.GetDroneSpawnLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void UInterface_Operative_Character_C::GetDroneSpawnLocation(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.GetDroneSpawnLocation");

	UInterface_Operative_Character_C_GetDroneSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.HideOperativeDroneSpawnAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UInterface_Operative_Character_C::HideOperativeDroneSpawnAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.HideOperativeDroneSpawnAnimation");

	UInterface_Operative_Character_C_HideOperativeDroneSpawnAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.PlayerOperativeDroneSpawnAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UInterface_Operative_Character_C::PlayerOperativeDroneSpawnAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.PlayerOperativeDroneSpawnAnimation");

	UInterface_Operative_Character_C_PlayerOperativeDroneSpawnAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials TP Gun
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)

void UInterface_Operative_Character_C::Get_Materials_TP_Gun(TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials TP Gun");

	UInterface_Operative_Character_C_Get_Materials_TP_Gun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials FP Gun
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)

void UInterface_Operative_Character_C::Get_Materials_FP_Gun(TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials FP Gun");

	UInterface_Operative_Character_C_Get_Materials_FP_Gun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Skeletal Mesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)

void UInterface_Operative_Character_C::Get_Materials_Skeletal_Mesh(TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Skeletal Mesh");

	UInterface_Operative_Character_C_Get_Materials_Skeletal_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Legs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)

void UInterface_Operative_Character_C::Get_Materials_Legs(TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Legs");

	UInterface_Operative_Character_C_Get_Materials_Legs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Arms
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)

void UInterface_Operative_Character_C::Get_Materials_Arms(TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Arms");

	UInterface_Operative_Character_C_Get_Materials_Arms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Head
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)

void UInterface_Operative_Character_C::Get_Materials_Head(TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Head");

	UInterface_Operative_Character_C_Get_Materials_Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Skeletal_Mesh                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInterface_Operative_Character_C::Get_Skeletal_Mesh(class USkeletalMeshComponent** Skeletal_Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh");

	UInterface_Operative_Character_C_Get_Skeletal_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Skeletal_Mesh != nullptr)
		*Skeletal_Mesh = params.Skeletal_Mesh;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Legs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxSkeletalMeshComponent* Legs                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInterface_Operative_Character_C::Get_Skeletal_Mesh_Legs(class UGbxSkeletalMeshComponent** Legs)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Legs");

	UInterface_Operative_Character_C_Get_Skeletal_Mesh_Legs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Legs != nullptr)
		*Legs = params.Legs;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Arms
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Arms_Mesh                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInterface_Operative_Character_C::Get_Skeletal_Mesh_Arms(class USkeletalMeshComponent** Arms_Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Arms");

	UInterface_Operative_Character_C_Get_Skeletal_Mesh_Arms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arms_Mesh != nullptr)
		*Arms_Mesh = params.Arms_Mesh;
}


// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Head
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxSkeletalMeshComponent* Head_Mesh                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInterface_Operative_Character_C::Get_Skeletal_Mesh_Head(class UGbxSkeletalMeshComponent** Head_Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Head");

	UInterface_Operative_Character_C_Get_Skeletal_Mesh_Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Head_Mesh != nullptr)
		*Head_Mesh = params.Head_Mesh;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
