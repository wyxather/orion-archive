// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMapDynamicPOI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZoneMapDynamicPOI.BP_ZoneMapDynamicPOI_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_ZoneMapDynamicPOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMapDynamicPOI.BP_ZoneMapDynamicPOI_C.ReceiveBeginPlay");

	UBP_ZoneMapDynamicPOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMapDynamicPOI.BP_ZoneMapDynamicPOI_C.ExecuteUbergraph_BP_ZoneMapDynamicPOI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ZoneMapDynamicPOI_C::ExecuteUbergraph_BP_ZoneMapDynamicPOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMapDynamicPOI.BP_ZoneMapDynamicPOI_C.ExecuteUbergraph_BP_ZoneMapDynamicPOI");

	UBP_ZoneMapDynamicPOI_C_ExecuteUbergraph_BP_ZoneMapDynamicPOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
