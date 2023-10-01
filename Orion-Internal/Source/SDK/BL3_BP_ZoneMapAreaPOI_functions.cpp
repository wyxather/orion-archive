// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMapAreaPOI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZoneMapAreaPOI.BP_ZoneMapAreaPOI_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_ZoneMapAreaPOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMapAreaPOI.BP_ZoneMapAreaPOI_C.ReceiveBeginPlay");

	UBP_ZoneMapAreaPOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMapAreaPOI.BP_ZoneMapAreaPOI_C.ExecuteUbergraph_BP_ZoneMapAreaPOI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ZoneMapAreaPOI_C::ExecuteUbergraph_BP_ZoneMapAreaPOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMapAreaPOI.BP_ZoneMapAreaPOI_C.ExecuteUbergraph_BP_ZoneMapAreaPOI");

	UBP_ZoneMapAreaPOI_C_ExecuteUbergraph_BP_ZoneMapAreaPOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
