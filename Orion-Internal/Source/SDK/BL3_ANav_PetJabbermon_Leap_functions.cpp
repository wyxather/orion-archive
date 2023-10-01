// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_PetJabbermon_Leap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ANav_PetJabbermon_Leap.ANav_PetJabbermon_Leap_C.Notify_Landed_Pet
// (BlueprintCallable, BlueprintEvent)

void UANav_PetJabbermon_Leap_C::Notify_Landed_Pet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_PetJabbermon_Leap.ANav_PetJabbermon_Leap_C.Notify_Landed_Pet");

	UANav_PetJabbermon_Leap_C_Notify_Landed_Pet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_PetJabbermon_Leap.ANav_PetJabbermon_Leap_C.ExecuteUbergraph_ANav_PetJabbermon_Leap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_PetJabbermon_Leap_C::ExecuteUbergraph_ANav_PetJabbermon_Leap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_PetJabbermon_Leap.ANav_PetJabbermon_Leap_C.ExecuteUbergraph_ANav_PetJabbermon_Leap");

	UANav_PetJabbermon_Leap_C_ExecuteUbergraph_ANav_PetJabbermon_Leap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
