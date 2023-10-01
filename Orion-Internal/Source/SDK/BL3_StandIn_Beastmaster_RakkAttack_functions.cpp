// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Beastmaster_RakkAttack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StandIn_Beastmaster_RakkAttack.StandIn_Beastmaster_RakkAttack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStandIn_Beastmaster_RakkAttack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_Beastmaster_RakkAttack.StandIn_Beastmaster_RakkAttack_C.UserConstructionScript");

	AStandIn_Beastmaster_RakkAttack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandIn_Beastmaster_RakkAttack.StandIn_Beastmaster_RakkAttack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStandIn_Beastmaster_RakkAttack_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_Beastmaster_RakkAttack.StandIn_Beastmaster_RakkAttack_C.ReceiveBeginPlay");

	AStandIn_Beastmaster_RakkAttack_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandIn_Beastmaster_RakkAttack.StandIn_Beastmaster_RakkAttack_C.ExecuteUbergraph_StandIn_Beastmaster_RakkAttack
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStandIn_Beastmaster_RakkAttack_C::ExecuteUbergraph_StandIn_Beastmaster_RakkAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_Beastmaster_RakkAttack.StandIn_Beastmaster_RakkAttack_C.ExecuteUbergraph_StandIn_Beastmaster_RakkAttack");

	AStandIn_Beastmaster_RakkAttack_C_ExecuteUbergraph_StandIn_Beastmaster_RakkAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
