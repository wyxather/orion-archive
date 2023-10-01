// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_Siren_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IBPChar_Siren.IBPChar_Siren_C.GetSoulSapProjectile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Siren_C::GetSoulSapProjectile(class UClass** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.GetSoulSapProjectile");

	UIBPChar_Siren_C_GetSoulSapProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IBPChar_Siren.IBPChar_Siren_C.GetStillnessOfMindControlledMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Siren_C::GetStillnessOfMindControlledMove(class UClass** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.GetStillnessOfMindControlledMove");

	UIBPChar_Siren_C_GetStillnessOfMindControlledMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IBPChar_Siren.IBPChar_Siren_C.SirenHasAscendantSkill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Siren_C::SirenHasAscendantSkill(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.SirenHasAscendantSkill");

	UIBPChar_Siren_C_SirenHasAscendantSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IBPChar_Siren.IBPChar_Siren_C.GetSirenGhostArmsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxSkeletalMeshComponent* _3rd_Person_Mesh               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGbxSkeletalMeshComponent* _1st_Person_Mesh               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UIBPChar_Siren_C::GetSirenGhostArmsComponent(class UGbxSkeletalMeshComponent** _3rd_Person_Mesh, class UGbxSkeletalMeshComponent** _1st_Person_Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.GetSirenGhostArmsComponent");

	UIBPChar_Siren_C_GetSirenGhostArmsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_3rd_Person_Mesh != nullptr)
		*_3rd_Person_Mesh = params._3rd_Person_Mesh;
	if (_1st_Person_Mesh != nullptr)
		*_1st_Person_Mesh = params._1st_Person_Mesh;
}


// Function IBPChar_Siren.IBPChar_Siren_C.SetArmsElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPhaseTranceElementalType      Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Siren_C::SetArmsElement(EPhaseTranceElementalType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.SetArmsElement");

	UIBPChar_Siren_C_SetArmsElement_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Siren.IBPChar_Siren_C.PlayTattooFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Siren_C::PlayTattooFade(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.PlayTattooFade");

	UIBPChar_Siren_C_PlayTattooFade_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Siren.IBPChar_Siren_C.SetArmsMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Siren_C::SetArmsMaterial(class UMaterialInstance* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.SetArmsMaterial");

	UIBPChar_Siren_C_SetArmsMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Siren.IBPChar_Siren_C.Play3rdPersonArmFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInstant                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Siren_C::Play3rdPersonArmFade(bool bInstant, bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.Play3rdPersonArmFade");

	UIBPChar_Siren_C_Play3rdPersonArmFade_Params params;
	params.bInstant = bInstant;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Siren.IBPChar_Siren_C.GetPhaseCastProjectileComponents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Body                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGbxSkeletalMeshComponent* Head                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  GhostArms                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UIBPChar_Siren_C::GetPhaseCastProjectileComponents(class USkeletalMeshComponent** Body, class UGbxSkeletalMeshComponent** Head, class USkeletalMeshComponent** GhostArms)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.GetPhaseCastProjectileComponents");

	UIBPChar_Siren_C_GetPhaseCastProjectileComponents_Params params;

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


// Function IBPChar_Siren.IBPChar_Siren_C.GetSirenArmsReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxSkeletalMeshComponent* Skel_Mesh_3rd                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGbxSkeletalMeshComponent* Skel_Mesh_1st                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UIBPChar_Siren_C::GetSirenArmsReference(class UGbxSkeletalMeshComponent** Skel_Mesh_3rd, class UGbxSkeletalMeshComponent** Skel_Mesh_1st)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.GetSirenArmsReference");

	UIBPChar_Siren_C_GetSirenArmsReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Skel_Mesh_3rd != nullptr)
		*Skel_Mesh_3rd = params.Skel_Mesh_3rd;
	if (Skel_Mesh_1st != nullptr)
		*Skel_Mesh_1st = params.Skel_Mesh_1st;
}


// Function IBPChar_Siren.IBPChar_Siren_C.GetPhaseTranceAbility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility_PhaseTrance* res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Siren_C::GetPhaseTranceAbility(class UOakActionAbility_PhaseTrance** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.GetPhaseTranceAbility");

	UIBPChar_Siren_C_GetPhaseTranceAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
