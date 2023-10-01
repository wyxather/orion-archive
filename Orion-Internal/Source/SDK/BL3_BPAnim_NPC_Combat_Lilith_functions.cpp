// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_NPC_Combat_Lilith_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_NPC_Combat_Lilith.BPAnim_NPC_Combat_Lilith_C.OnStanceChanged
// (Event, Public, BlueprintEvent)

void UBPAnim_NPC_Combat_Lilith_C::OnStanceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_NPC_Combat_Lilith.BPAnim_NPC_Combat_Lilith_C.OnStanceChanged");

	UBPAnim_NPC_Combat_Lilith_C_OnStanceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_NPC_Combat_Lilith.BPAnim_NPC_Combat_Lilith_C.AnimNotify_InjuredLoop
// (BlueprintCallable, BlueprintEvent)

void UBPAnim_NPC_Combat_Lilith_C::AnimNotify_InjuredLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_NPC_Combat_Lilith.BPAnim_NPC_Combat_Lilith_C.AnimNotify_InjuredLoop");

	UBPAnim_NPC_Combat_Lilith_C_AnimNotify_InjuredLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAnim_NPC_Combat_Lilith.BPAnim_NPC_Combat_Lilith_C.ExecuteUbergraph_BPAnim_NPC_Combat_Lilith
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_NPC_Combat_Lilith_C::ExecuteUbergraph_BPAnim_NPC_Combat_Lilith(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_NPC_Combat_Lilith.BPAnim_NPC_Combat_Lilith_C.ExecuteUbergraph_BPAnim_NPC_Combat_Lilith");

	UBPAnim_NPC_Combat_Lilith_C_ExecuteUbergraph_BPAnim_NPC_Combat_Lilith_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
