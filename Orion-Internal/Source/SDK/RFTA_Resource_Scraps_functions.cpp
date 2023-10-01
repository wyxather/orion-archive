// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Resource_Scraps_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Resource_Scraps.Resource_Scraps_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AResource_Scraps_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Resource_Scraps.Resource_Scraps_C.ReceiveTick");

	AResource_Scraps_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Resource_Scraps.Resource_Scraps_C.ExecuteUbergraph_Resource_Scraps
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AResource_Scraps_C::ExecuteUbergraph_Resource_Scraps(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Resource_Scraps.Resource_Scraps_C.ExecuteUbergraph_Resource_Scraps");

	AResource_Scraps_C_ExecuteUbergraph_Resource_Scraps_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
