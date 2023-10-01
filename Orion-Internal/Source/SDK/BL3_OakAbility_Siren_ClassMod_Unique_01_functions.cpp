// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Unique_01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Siren_ClassMod_Unique_01_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.OnActivated");

	UOakAbility_Siren_ClassMod_Unique_01_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.SirenUnique01_GraspedTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGbxCharacter*           GraspedTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_01_C::SirenUnique01_GraspedTarget(class AGbxCharacter* GraspedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.SirenUnique01_GraspedTarget");

	UOakAbility_Siren_ClassMod_Unique_01_C_SirenUnique01_GraspedTarget_Params params;
	params.GraspedTarget = GraspedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_01_C::ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_01");

	UOakAbility_Siren_ClassMod_Unique_01_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
