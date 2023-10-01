// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Claptrap_TalkingLoop_B_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Claptrap_TalkingLoop_B.A_Claptrap_TalkingLoop_B_C.OnLoop
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Claptrap_TalkingLoop_B_C::OnLoop(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Claptrap_TalkingLoop_B.A_Claptrap_TalkingLoop_B_C.OnLoop");

	UA_Claptrap_TalkingLoop_B_C_OnLoop_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Claptrap_TalkingLoop_B.A_Claptrap_TalkingLoop_B_C.ExecuteUbergraph_A_Claptrap_TalkingLoop_B
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Claptrap_TalkingLoop_B_C::ExecuteUbergraph_A_Claptrap_TalkingLoop_B(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Claptrap_TalkingLoop_B.A_Claptrap_TalkingLoop_B_C.ExecuteUbergraph_A_Claptrap_TalkingLoop_B");

	UA_Claptrap_TalkingLoop_B_C_ExecuteUbergraph_A_Claptrap_TalkingLoop_B_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
