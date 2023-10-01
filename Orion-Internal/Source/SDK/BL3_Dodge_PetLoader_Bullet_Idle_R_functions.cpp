// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Dodge_PetLoader_Bullet_Idle_R_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dodge_PetLoader_Bullet_Idle_R.Dodge_PetLoader_Bullet_Idle_R_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDodge_PetLoader_Bullet_Idle_R_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodge_PetLoader_Bullet_Idle_R.Dodge_PetLoader_Bullet_Idle_R_C.OnBegin");

	UDodge_PetLoader_Bullet_Idle_R_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dodge_PetLoader_Bullet_Idle_R.Dodge_PetLoader_Bullet_Idle_R_C.Loader_JumpEnd
// (BlueprintCallable, BlueprintEvent)

void UDodge_PetLoader_Bullet_Idle_R_C::Loader_JumpEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodge_PetLoader_Bullet_Idle_R.Dodge_PetLoader_Bullet_Idle_R_C.Loader_JumpEnd");

	UDodge_PetLoader_Bullet_Idle_R_C_Loader_JumpEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dodge_PetLoader_Bullet_Idle_R.Dodge_PetLoader_Bullet_Idle_R_C.Loader_JumpStart
// (BlueprintCallable, BlueprintEvent)

void UDodge_PetLoader_Bullet_Idle_R_C::Loader_JumpStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodge_PetLoader_Bullet_Idle_R.Dodge_PetLoader_Bullet_Idle_R_C.Loader_JumpStart");

	UDodge_PetLoader_Bullet_Idle_R_C_Loader_JumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dodge_PetLoader_Bullet_Idle_R.Dodge_PetLoader_Bullet_Idle_R_C.ExecuteUbergraph_Dodge_PetLoader_Bullet_Idle_R
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDodge_PetLoader_Bullet_Idle_R_C::ExecuteUbergraph_Dodge_PetLoader_Bullet_Idle_R(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodge_PetLoader_Bullet_Idle_R.Dodge_PetLoader_Bullet_Idle_R_C.ExecuteUbergraph_Dodge_PetLoader_Bullet_Idle_R");

	UDodge_PetLoader_Bullet_Idle_R_C_ExecuteUbergraph_Dodge_PetLoader_Bullet_Idle_R_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
