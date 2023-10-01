// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Rakk_PhoenixFakeDeath_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AHitReact_Rakk_PhoenixFakeDeath.AHitReact_Rakk_PhoenixFakeDeath_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Rakk_PhoenixFakeDeath_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Rakk_PhoenixFakeDeath.AHitReact_Rakk_PhoenixFakeDeath_C.OnBegin");

	UAHitReact_Rakk_PhoenixFakeDeath_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_Rakk_PhoenixFakeDeath.AHitReact_Rakk_PhoenixFakeDeath_C.ModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PreviousCustomMode             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Rakk_PhoenixFakeDeath_C::ModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Rakk_PhoenixFakeDeath.AHitReact_Rakk_PhoenixFakeDeath_C.ModeChanged");

	UAHitReact_Rakk_PhoenixFakeDeath_C_ModeChanged_Params params;
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_Rakk_PhoenixFakeDeath.AHitReact_Rakk_PhoenixFakeDeath_C.ExecuteUbergraph_AHitReact_Rakk_PhoenixFakeDeath
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Rakk_PhoenixFakeDeath_C::ExecuteUbergraph_AHitReact_Rakk_PhoenixFakeDeath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Rakk_PhoenixFakeDeath.AHitReact_Rakk_PhoenixFakeDeath_C.ExecuteUbergraph_AHitReact_Rakk_PhoenixFakeDeath");

	UAHitReact_Rakk_PhoenixFakeDeath_C_ExecuteUbergraph_AHitReact_Rakk_PhoenixFakeDeath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
