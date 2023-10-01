// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Gunner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Gunner.BPChar_Gunner_C.GetPrimaryActionAbility
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UOakActionAbility*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOakActionAbility* ABPChar_Gunner_C::GetPrimaryActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Gunner.BPChar_Gunner_C.GetPrimaryActionAbility");

	ABPChar_Gunner_C_GetPrimaryActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPChar_Gunner.BPChar_Gunner_C.GetHeadMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           HeadMesh                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Gunner_C::GetHeadMesh(class USkeletalMesh** HeadMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Gunner.BPChar_Gunner_C.GetHeadMesh");

	ABPChar_Gunner_C_GetHeadMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HeadMesh != nullptr)
		*HeadMesh = params.HeadMesh;
}


// Function BPChar_Gunner.BPChar_Gunner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Gunner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Gunner.BPChar_Gunner_C.UserConstructionScript");

	ABPChar_Gunner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Gunner.BPChar_Gunner_C.SetGunnerDeviceVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Gunner_C::SetGunnerDeviceVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Gunner.BPChar_Gunner_C.SetGunnerDeviceVisible");

	ABPChar_Gunner_C_SetGunnerDeviceVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Gunner.BPChar_Gunner_C.SetGunnerHologramVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Gunner_C::SetGunnerHologramVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Gunner.BPChar_Gunner_C.SetGunnerHologramVisible");

	ABPChar_Gunner_C_SetGunnerHologramVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Gunner.BPChar_Gunner_C.SetGunnerHologramTemplate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Template                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Gunner_C::SetGunnerHologramTemplate(class UParticleSystem* Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Gunner.BPChar_Gunner_C.SetGunnerHologramTemplate");

	ABPChar_Gunner_C_SetGunnerHologramTemplate_Params params;
	params.Template = Template;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Gunner.BPChar_Gunner_C.ExecuteUbergraph_BPChar_Gunner
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Gunner_C::ExecuteUbergraph_BPChar_Gunner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Gunner.BPChar_Gunner_C.ExecuteUbergraph_BPChar_Gunner");

	ABPChar_Gunner_C_ExecuteUbergraph_BPChar_Gunner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
