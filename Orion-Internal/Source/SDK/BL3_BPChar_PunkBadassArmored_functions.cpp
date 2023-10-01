// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PunkBadassArmored_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_PunkBadassArmored.BPChar_PunkBadassArmored_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PunkBadassArmored_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PunkBadassArmored.BPChar_PunkBadassArmored_C.UserConstructionScript");

	ABPChar_PunkBadassArmored_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PunkBadassArmored.BPChar_PunkBadassArmored_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_PunkBadassArmored_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PunkBadassArmored.BPChar_PunkBadassArmored_C.ReceiveBeginPlay");

	ABPChar_PunkBadassArmored_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PunkBadassArmored.BPChar_PunkBadassArmored_C.ExecuteUbergraph_BPChar_PunkBadassArmored
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PunkBadassArmored_C::ExecuteUbergraph_BPChar_PunkBadassArmored(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PunkBadassArmored.BPChar_PunkBadassArmored_C.ExecuteUbergraph_BPChar_PunkBadassArmored");

	ABPChar_PunkBadassArmored_C_ExecuteUbergraph_BPChar_PunkBadassArmored_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
