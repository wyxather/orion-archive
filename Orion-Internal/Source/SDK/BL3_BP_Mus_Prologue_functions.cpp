// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Mus_Prologue_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Mus_Prologue.BP_Mus_Prologue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Mus_Prologue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mus_Prologue.BP_Mus_Prologue_C.UserConstructionScript");

	ABP_Mus_Prologue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mus_Prologue.BP_Mus_Prologue_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Mus_Prologue_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mus_Prologue.BP_Mus_Prologue_C.ReceiveBeginPlay");

	ABP_Mus_Prologue_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mus_Prologue.BP_Mus_Prologue_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mus_Prologue_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mus_Prologue.BP_Mus_Prologue_C.ReceiveEndPlay");

	ABP_Mus_Prologue_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mus_Prologue.BP_Mus_Prologue_C.StopLevelMusic
// (BlueprintCallable, BlueprintEvent)

void ABP_Mus_Prologue_C::StopLevelMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mus_Prologue.BP_Mus_Prologue_C.StopLevelMusic");

	ABP_Mus_Prologue_C_StopLevelMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mus_Prologue.BP_Mus_Prologue_C.StartLevelMusic
// (BlueprintCallable, BlueprintEvent)

void ABP_Mus_Prologue_C::StartLevelMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mus_Prologue.BP_Mus_Prologue_C.StartLevelMusic");

	ABP_Mus_Prologue_C_StartLevelMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mus_Prologue.BP_Mus_Prologue_C.ExecuteUbergraph_BP_Mus_Prologue
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mus_Prologue_C::ExecuteUbergraph_BP_Mus_Prologue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mus_Prologue.BP_Mus_Prologue_C.ExecuteUbergraph_BP_Mus_Prologue");

	ABP_Mus_Prologue_C_ExecuteUbergraph_BP_Mus_Prologue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
