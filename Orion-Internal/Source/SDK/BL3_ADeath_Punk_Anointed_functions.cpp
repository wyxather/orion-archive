// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ADeath_Punk_Anointed_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ADeath_Punk_Anointed.ADeath_Punk_Anointed_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UADeath_Punk_Anointed_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ADeath_Punk_Anointed.ADeath_Punk_Anointed_C.OnBegin");

	UADeath_Punk_Anointed_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ADeath_Punk_Anointed.ADeath_Punk_Anointed_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UADeath_Punk_Anointed_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ADeath_Punk_Anointed.ADeath_Punk_Anointed_C.OnEnd");

	UADeath_Punk_Anointed_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ADeath_Punk_Anointed.ADeath_Punk_Anointed_C.ExecuteUbergraph_ADeath_Punk_Anointed
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UADeath_Punk_Anointed_C::ExecuteUbergraph_ADeath_Punk_Anointed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ADeath_Punk_Anointed.ADeath_Punk_Anointed_C.ExecuteUbergraph_ADeath_Punk_Anointed");

	UADeath_Punk_Anointed_C_ExecuteUbergraph_ADeath_Punk_Anointed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
