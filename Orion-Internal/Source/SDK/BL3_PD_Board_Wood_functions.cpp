// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Board_Wood_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PD_Board_Wood.PD_Board_Wood_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APD_Board_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Board_Wood.PD_Board_Wood_C.UserConstructionScript");

	APD_Board_Wood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Board_Wood.PD_Board_Wood_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APD_Board_Wood_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Board_Wood.PD_Board_Wood_C.ReceiveBeginPlay");

	APD_Board_Wood_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Board_Wood.PD_Board_Wood_C.ExecuteUbergraph_PD_Board_Wood
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APD_Board_Wood_C::ExecuteUbergraph_PD_Board_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Board_Wood.PD_Board_Wood_C.ExecuteUbergraph_PD_Board_Wood");

	APD_Board_Wood_C_ExecuteUbergraph_PD_Board_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
