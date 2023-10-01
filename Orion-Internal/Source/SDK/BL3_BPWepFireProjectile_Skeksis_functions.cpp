// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWepFireProjectile_Skeksis_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWepFireProjectile_Skeksis_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C.ReceiveBeginPlay");

	UBPWepFireProjectile_Skeksis_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C.NotifyUseFinished_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWepFireProjectile_Skeksis_C::NotifyUseFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C.NotifyUseFinished_Event");

	UBPWepFireProjectile_Skeksis_C_NotifyUseFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C.ExecuteUbergraph_BPWepFireProjectile_Skeksis
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWepFireProjectile_Skeksis_C::ExecuteUbergraph_BPWepFireProjectile_Skeksis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C.ExecuteUbergraph_BPWepFireProjectile_Skeksis");

	UBPWepFireProjectile_Skeksis_C_ExecuteUbergraph_BPWepFireProjectile_Skeksis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
