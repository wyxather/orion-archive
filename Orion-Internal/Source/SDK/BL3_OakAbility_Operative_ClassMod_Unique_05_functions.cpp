// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Operative_ClassMod_Unique_05_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Operative_ClassMod_Unique_05.OakAbility_Operative_ClassMod_Unique_05_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Operative_ClassMod_Unique_05_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_ClassMod_Unique_05.OakAbility_Operative_ClassMod_Unique_05_C.OnActivated");

	UOakAbility_Operative_ClassMod_Unique_05_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_ClassMod_Unique_05.OakAbility_Operative_ClassMod_Unique_05_C.OnCausedMaxResourceEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOakStatusEffectResourceEffectType ResourceEffectType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Operative_ClassMod_Unique_05_C::OnCausedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_ClassMod_Unique_05.OakAbility_Operative_ClassMod_Unique_05_C.OnCausedMaxResourceEffect");

	UOakAbility_Operative_ClassMod_Unique_05_C_OnCausedMaxResourceEffect_Params params;
	params.Target = Target;
	params.ResourceEffectType = ResourceEffectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_ClassMod_Unique_05.OakAbility_Operative_ClassMod_Unique_05_C.ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_05
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Operative_ClassMod_Unique_05_C::ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_05(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_ClassMod_Unique_05.OakAbility_Operative_ClassMod_Unique_05_C.ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_05");

	UOakAbility_Operative_ClassMod_Unique_05_C_ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_05_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
