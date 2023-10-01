// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Operative_Digiclone_FrontEnd_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStandIn_Operative_Digiclone_FrontEnd_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C.UserConstructionScript");

	AStandIn_Operative_Digiclone_FrontEnd_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStandIn_Operative_Digiclone_FrontEnd_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C.ReceiveBeginPlay");

	AStandIn_Operative_Digiclone_FrontEnd_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C.ExecuteUbergraph_StandIn_Operative_Digiclone_FrontEnd
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStandIn_Operative_Digiclone_FrontEnd_C::ExecuteUbergraph_StandIn_Operative_Digiclone_FrontEnd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C.ExecuteUbergraph_StandIn_Operative_Digiclone_FrontEnd");

	AStandIn_Operative_Digiclone_FrontEnd_C_ExecuteUbergraph_StandIn_Operative_Digiclone_FrontEnd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
