// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Beastmaster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.TryForceSpawnPetAtLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Beastmaster_C::TryForceSpawnPetAtLocation(const struct FVector& Location, bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.TryForceSpawnPetAtLocation");

	ABPChar_Beastmaster_C_TryForceSpawnPetAtLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetCurrentPet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AOakCharacter*           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Beastmaster_C::GetCurrentPet(class AOakCharacter** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetCurrentPet");

	ABPChar_Beastmaster_C_GetCurrentPet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetHeadMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           HeadMesh                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Beastmaster_C::GetHeadMesh(class USkeletalMesh** HeadMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetHeadMesh");

	ABPChar_Beastmaster_C_GetHeadMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HeadMesh != nullptr)
		*HeadMesh = params.HeadMesh;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.SetupCallResponse
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Beastmaster_C::SetupCallResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.SetupCallResponse");

	ABPChar_Beastmaster_C_SetupCallResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetPet
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AOakCharacter*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AOakCharacter* ABPChar_Beastmaster_C::GetPet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetPet");

	ABPChar_Beastmaster_C_GetPet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetPrimaryActionAbility
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UOakActionAbility*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOakActionAbility* ABPChar_Beastmaster_C::GetPrimaryActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetPrimaryActionAbility");

	ABPChar_Beastmaster_C_GetPrimaryActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Beastmaster_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.UserConstructionScript");

	ABPChar_Beastmaster_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.OnDialogSequenceFinished_3
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Beastmaster_C::OnDialogSequenceFinished_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.OnDialogSequenceFinished_3");

	ABPChar_Beastmaster_C_OnDialogSequenceFinished_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.SetNewPetThreatScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewScale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Beastmaster_C::SetNewPetThreatScale(float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.SetNewPetThreatScale");

	ABPChar_Beastmaster_C_SetNewPetThreatScale_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.PlayPetAudioCallAndResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_BeastmasterDialogAction> DialogType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Beastmaster_C::PlayPetAudioCallAndResponse(TEnumAsByte<Enum_BeastmasterDialogAction> DialogType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.PlayPetAudioCallAndResponse");

	ABPChar_Beastmaster_C_PlayPetAudioCallAndResponse_Params params;
	params.DialogType = DialogType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.OnInventoryPickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 PickedUpActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Beastmaster_C::OnInventoryPickedUp(class AActor** PickedUpActor, int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.OnInventoryPickedUp");

	ABPChar_Beastmaster_C_OnInventoryPickedUp_Params params;
	params.PickedUpActor = PickedUpActor;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_Beastmaster_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.ReceiveBeginPlay");

	ABPChar_Beastmaster_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.HideBackpack
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Beastmaster_C::HideBackpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.HideBackpack");

	ABPChar_Beastmaster_C_HideBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.ShowBackpack
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Beastmaster_C::ShowBackpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.ShowBackpack");

	ABPChar_Beastmaster_C_ShowBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.OnResourceNowFilled_AttackCommand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_Beastmaster_C::OnResourceNowFilled_AttackCommand(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.OnResourceNowFilled_AttackCommand");

	ABPChar_Beastmaster_C_OnResourceNowFilled_AttackCommand_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Beastmaster.BPChar_Beastmaster_C.ExecuteUbergraph_BPChar_Beastmaster
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Beastmaster_C::ExecuteUbergraph_BPChar_Beastmaster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Beastmaster.BPChar_Beastmaster_C.ExecuteUbergraph_BPChar_Beastmaster");

	ABPChar_Beastmaster_C_ExecuteUbergraph_BPChar_Beastmaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
