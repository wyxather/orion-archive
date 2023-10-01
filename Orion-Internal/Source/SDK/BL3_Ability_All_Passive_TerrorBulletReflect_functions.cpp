// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_Passive_TerrorBulletReflect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_Passive_TerrorBulletReflect.Ability_All_Passive_TerrorBulletReflect_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_Passive_TerrorBulletReflect_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorBulletReflect.Ability_All_Passive_TerrorBulletReflect_C.OnActivated");

	UAbility_All_Passive_TerrorBulletReflect_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_Passive_TerrorBulletReflect.Ability_All_Passive_TerrorBulletReflect_C.ExecuteUbergraph_Ability_All_Passive_TerrorBulletReflect
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_Passive_TerrorBulletReflect_C::ExecuteUbergraph_Ability_All_Passive_TerrorBulletReflect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorBulletReflect.Ability_All_Passive_TerrorBulletReflect_C.ExecuteUbergraph_Ability_All_Passive_TerrorBulletReflect");

	UAbility_All_Passive_TerrorBulletReflect_C_ExecuteUbergraph_Ability_All_Passive_TerrorBulletReflect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
