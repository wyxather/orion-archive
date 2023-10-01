// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Spiderant_DeathKingScream_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AHitReact_Spiderant_DeathKingScream.AHitReact_Spiderant_DeathKingScream_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Spiderant_DeathKingScream_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Spiderant_DeathKingScream.AHitReact_Spiderant_DeathKingScream_C.OnBegin");

	UAHitReact_Spiderant_DeathKingScream_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_Spiderant_DeathKingScream.AHitReact_Spiderant_DeathKingScream_C.ExecuteUbergraph_AHitReact_Spiderant_DeathKingScream
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Spiderant_DeathKingScream_C::ExecuteUbergraph_AHitReact_Spiderant_DeathKingScream(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Spiderant_DeathKingScream.AHitReact_Spiderant_DeathKingScream_C.ExecuteUbergraph_AHitReact_Spiderant_DeathKingScream");

	UAHitReact_Spiderant_DeathKingScream_C_ExecuteUbergraph_AHitReact_Spiderant_DeathKingScream_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
