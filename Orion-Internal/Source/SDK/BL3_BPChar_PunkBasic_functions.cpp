// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PunkBasic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_PunkBasic.BPChar_PunkBasic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PunkBasic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PunkBasic.BPChar_PunkBasic_C.UserConstructionScript");

	ABPChar_PunkBasic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PunkBasic.BPChar_PunkBasic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_PunkBasic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PunkBasic.BPChar_PunkBasic_C.ReceiveBeginPlay");

	ABPChar_PunkBasic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PunkBasic.BPChar_PunkBasic_C.ExecuteUbergraph_BPChar_PunkBasic
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PunkBasic_C::ExecuteUbergraph_BPChar_PunkBasic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PunkBasic.BPChar_PunkBasic_C.ExecuteUbergraph_BPChar_PunkBasic");

	ABPChar_PunkBasic_C_ExecuteUbergraph_BPChar_PunkBasic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
