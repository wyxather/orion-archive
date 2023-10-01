// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagBarfer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_SkagBarfer.BPChar_SkagBarfer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagBarfer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagBarfer.BPChar_SkagBarfer_C.UserConstructionScript");

	ABPChar_SkagBarfer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagBarfer.BPChar_SkagBarfer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_SkagBarfer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagBarfer.BPChar_SkagBarfer_C.ReceiveBeginPlay");

	ABPChar_SkagBarfer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagBarfer.BPChar_SkagBarfer_C.ExecuteUbergraph_BPChar_SkagBarfer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagBarfer_C::ExecuteUbergraph_BPChar_SkagBarfer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagBarfer.BPChar_SkagBarfer_C.ExecuteUbergraph_BPChar_SkagBarfer");

	ABPChar_SkagBarfer_C_ExecuteUbergraph_BPChar_SkagBarfer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
