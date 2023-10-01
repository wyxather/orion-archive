// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Operative_CM_Hib_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Operative_CM_Hib.OakAbility_Operative_CM_Hib_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Operative_CM_Hib_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Hib.OakAbility_Operative_CM_Hib_C.OnActivated");

	UOakAbility_Operative_CM_Hib_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_CM_Hib.OakAbility_Operative_CM_Hib_C.ExecuteUbergraph_OakAbility_Operative_CM_Hib
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Operative_CM_Hib_C::ExecuteUbergraph_OakAbility_Operative_CM_Hib(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Hib.OakAbility_Operative_CM_Hib_C.ExecuteUbergraph_OakAbility_Operative_CM_Hib");

	UOakAbility_Operative_CM_Hib_C_ExecuteUbergraph_OakAbility_Operative_CM_Hib_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
