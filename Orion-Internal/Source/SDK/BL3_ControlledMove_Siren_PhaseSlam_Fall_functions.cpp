// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Siren_PhaseSlam_Fall_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C.GroundSlam_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Siren_PhaseSlam_Fall_C::GroundSlam_End(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C.GroundSlam_End");

	UControlledMove_Siren_PhaseSlam_Fall_C_GroundSlam_End_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C.DoMelee
// (Public, BlueprintCallable, BlueprintEvent)

void UControlledMove_Siren_PhaseSlam_Fall_C::DoMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C.DoMelee");

	UControlledMove_Siren_PhaseSlam_Fall_C_DoMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C.ExecuteUbergraph_ControlledMove_Siren_PhaseSlam_Fall
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Siren_PhaseSlam_Fall_C::ExecuteUbergraph_ControlledMove_Siren_PhaseSlam_Fall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C.ExecuteUbergraph_ControlledMove_Siren_PhaseSlam_Fall");

	UControlledMove_Siren_PhaseSlam_Fall_C_ExecuteUbergraph_ControlledMove_Siren_PhaseSlam_Fall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
