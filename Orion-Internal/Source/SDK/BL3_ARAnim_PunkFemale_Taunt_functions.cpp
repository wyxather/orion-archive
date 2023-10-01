// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_PunkFemale_Taunt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARAnim_PunkFemale_Taunt.ARAnim_PunkFemale_Taunt_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_PunkFemale_Taunt_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkFemale_Taunt.ARAnim_PunkFemale_Taunt_C.OnEnd");

	UARAnim_PunkFemale_Taunt_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_PunkFemale_Taunt.ARAnim_PunkFemale_Taunt_C.ExecuteUbergraph_ARAnim_PunkFemale_Taunt
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_PunkFemale_Taunt_C::ExecuteUbergraph_ARAnim_PunkFemale_Taunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkFemale_Taunt.ARAnim_PunkFemale_Taunt_C.ExecuteUbergraph_ARAnim_PunkFemale_Taunt");

	UARAnim_PunkFemale_Taunt_C_ExecuteUbergraph_ARAnim_PunkFemale_Taunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
