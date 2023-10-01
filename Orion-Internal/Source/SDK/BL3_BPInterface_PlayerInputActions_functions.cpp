// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInterface_PlayerInputActions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.DoMelee
// (Public, BlueprintCallable, BlueprintEvent)

void UBPInterface_PlayerInputActions_C::DoMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.DoMelee");

	UBPInterface_PlayerInputActions_C_DoMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.GroundSlam_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPInterface_PlayerInputActions_C::GroundSlam_End(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.GroundSlam_End");

	UBPInterface_PlayerInputActions_C_GroundSlam_End_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
