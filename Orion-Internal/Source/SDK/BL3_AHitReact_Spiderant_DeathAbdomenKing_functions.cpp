// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Spiderant_DeathAbdomenKing_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AHitReact_Spiderant_DeathAbdomenKing.AHitReact_Spiderant_DeathAbdomenKing_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Spiderant_DeathAbdomenKing_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Spiderant_DeathAbdomenKing.AHitReact_Spiderant_DeathAbdomenKing_C.OnBegin");

	UAHitReact_Spiderant_DeathAbdomenKing_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_Spiderant_DeathAbdomenKing.AHitReact_Spiderant_DeathAbdomenKing_C.ExecuteUbergraph_AHitReact_Spiderant_DeathAbdomenKing
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Spiderant_DeathAbdomenKing_C::ExecuteUbergraph_AHitReact_Spiderant_DeathAbdomenKing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Spiderant_DeathAbdomenKing.AHitReact_Spiderant_DeathAbdomenKing_C.ExecuteUbergraph_AHitReact_Spiderant_DeathAbdomenKing");

	UAHitReact_Spiderant_DeathAbdomenKing_C_ExecuteUbergraph_AHitReact_Spiderant_DeathAbdomenKing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
