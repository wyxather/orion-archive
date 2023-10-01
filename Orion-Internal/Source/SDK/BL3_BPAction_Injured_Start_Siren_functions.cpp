// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAction_Injured_Start_Siren_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAction_Injured_Start_Siren_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.OnServerEnd");

	UBPAction_Injured_Start_Siren_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.FadeOutArms
// (BlueprintCallable, BlueprintEvent)

void UBPAction_Injured_Start_Siren_C::FadeOutArms()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.FadeOutArms");

	UBPAction_Injured_Start_Siren_C_FadeOutArms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.ExecuteUbergraph_BPAction_Injured_Start_Siren
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAction_Injured_Start_Siren_C::ExecuteUbergraph_BPAction_Injured_Start_Siren(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.ExecuteUbergraph_BPAction_Injured_Start_Siren");

	UBPAction_Injured_Start_Siren_C_ExecuteUbergraph_BPAction_Injured_Start_Siren_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
