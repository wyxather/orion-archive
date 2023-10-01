// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagPup_SuicideDetonate_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_SkagPup_SuicideDetonate.A_SkagPup_SuicideDetonate_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_SkagPup_SuicideDetonate_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagPup_SuicideDetonate.A_SkagPup_SuicideDetonate_C.OnBegin");

	UA_SkagPup_SuicideDetonate_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagPup_SuicideDetonate.A_SkagPup_SuicideDetonate_C.Detonate
// (BlueprintCallable, BlueprintEvent)

void UA_SkagPup_SuicideDetonate_C::Detonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagPup_SuicideDetonate.A_SkagPup_SuicideDetonate_C.Detonate");

	UA_SkagPup_SuicideDetonate_C_Detonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagPup_SuicideDetonate.A_SkagPup_SuicideDetonate_C.ExecuteUbergraph_A_SkagPup_SuicideDetonate
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_SkagPup_SuicideDetonate_C::ExecuteUbergraph_A_SkagPup_SuicideDetonate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagPup_SuicideDetonate.A_SkagPup_SuicideDetonate_C.ExecuteUbergraph_A_SkagPup_SuicideDetonate");

	UA_SkagPup_SuicideDetonate_C_ExecuteUbergraph_A_SkagPup_SuicideDetonate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
