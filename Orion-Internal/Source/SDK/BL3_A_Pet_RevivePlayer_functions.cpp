// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Pet_RevivePlayer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Pet_RevivePlayer.A_Pet_RevivePlayer_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Pet_RevivePlayer_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_RevivePlayer.A_Pet_RevivePlayer_C.OnServerBegin");

	UA_Pet_RevivePlayer_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Pet_RevivePlayer.A_Pet_RevivePlayer_C.ExecuteUbergraph_A_Pet_RevivePlayer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Pet_RevivePlayer_C::ExecuteUbergraph_A_Pet_RevivePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_RevivePlayer.A_Pet_RevivePlayer_C.ExecuteUbergraph_A_Pet_RevivePlayer");

	UA_Pet_RevivePlayer_C_ExecuteUbergraph_A_Pet_RevivePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
