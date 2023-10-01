// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_mm_BP_Cinematic_RootBroken_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.Set Visual
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnedMeshComponent**  VisualMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh**          New_VisualMesh                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Amm_BP_Cinematic_RootBroken_C::Set_Visual(class USkinnedMeshComponent** VisualMesh, class USkeletalMesh** New_VisualMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.Set Visual");

	Amm_BP_Cinematic_RootBroken_C_Set_Visual_Params params;
	params.VisualMesh = VisualMesh;
	params.New_VisualMesh = New_VisualMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.Set Weapons
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void Amm_BP_Cinematic_RootBroken_C::Set_Weapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.Set Weapons");

	Amm_BP_Cinematic_RootBroken_C_Set_Weapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.UserConstructionScript
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Amm_BP_Cinematic_RootBroken_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.UserConstructionScript");

	Amm_BP_Cinematic_RootBroken_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.DissolveRoot__FinishedFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void Amm_BP_Cinematic_RootBroken_C::DissolveRoot__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.DissolveRoot__FinishedFunc");

	Amm_BP_Cinematic_RootBroken_C_DissolveRoot__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.DissolveRoot__UpdateFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void Amm_BP_Cinematic_RootBroken_C::DissolveRoot__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.DissolveRoot__UpdateFunc");

	Amm_BP_Cinematic_RootBroken_C_DissolveRoot__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.DissolveCharacter
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void Amm_BP_Cinematic_RootBroken_C::DissolveCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.DissolveCharacter");

	Amm_BP_Cinematic_RootBroken_C_DissolveCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.ResetDissolve
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void Amm_BP_Cinematic_RootBroken_C::ResetDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.ResetDissolve");

	Amm_BP_Cinematic_RootBroken_C_ResetDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void Amm_BP_Cinematic_RootBroken_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.ReceiveBeginPlay");

	Amm_BP_Cinematic_RootBroken_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.ExecuteUbergraph_mm_BP_Cinematic_RootBroken
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Amm_BP_Cinematic_RootBroken_C::ExecuteUbergraph_mm_BP_Cinematic_RootBroken(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mm_BP_Cinematic_RootBroken.mm_BP_Cinematic_RootBroken_C.ExecuteUbergraph_mm_BP_Cinematic_RootBroken");

	Amm_BP_Cinematic_RootBroken_C_ExecuteUbergraph_mm_BP_Cinematic_RootBroken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
