// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_TinkLoot_Gib_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AHitReact_TinkLoot_Gib.AHitReact_TinkLoot_Gib_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_TinkLoot_Gib_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_TinkLoot_Gib.AHitReact_TinkLoot_Gib_C.OnBegin");

	UAHitReact_TinkLoot_Gib_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_TinkLoot_Gib.AHitReact_TinkLoot_Gib_C.ExecuteUbergraph_AHitReact_TinkLoot_Gib
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_TinkLoot_Gib_C::ExecuteUbergraph_AHitReact_TinkLoot_Gib(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_TinkLoot_Gib.AHitReact_TinkLoot_Gib_C.ExecuteUbergraph_AHitReact_TinkLoot_Gib");

	UAHitReact_TinkLoot_Gib_C_ExecuteUbergraph_AHitReact_TinkLoot_Gib_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
