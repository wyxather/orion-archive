// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ADirection_Spiderant_Flinch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ADirection_Spiderant_Flinch.ADirection_Spiderant_Flinch_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UADirection_Spiderant_Flinch_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ADirection_Spiderant_Flinch.ADirection_Spiderant_Flinch_C.OnBegin");

	UADirection_Spiderant_Flinch_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ADirection_Spiderant_Flinch.ADirection_Spiderant_Flinch_C.ExecuteUbergraph_ADirection_Spiderant_Flinch
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UADirection_Spiderant_Flinch_C::ExecuteUbergraph_ADirection_Spiderant_Flinch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ADirection_Spiderant_Flinch.ADirection_Spiderant_Flinch_C.ExecuteUbergraph_ADirection_Spiderant_Flinch");

	UADirection_Spiderant_Flinch_C_ExecuteUbergraph_ADirection_Spiderant_Flinch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
