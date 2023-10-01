// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMap_AIPOI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZoneMap_AIPOI.BP_ZoneMap_AIPOI_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_ZoneMap_AIPOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_AIPOI.BP_ZoneMap_AIPOI_C.ReceiveBeginPlay");

	UBP_ZoneMap_AIPOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_AIPOI.BP_ZoneMap_AIPOI_C.ExecuteUbergraph_BP_ZoneMap_AIPOI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ZoneMap_AIPOI_C::ExecuteUbergraph_BP_ZoneMap_AIPOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_AIPOI.BP_ZoneMap_AIPOI_C.ExecuteUbergraph_BP_ZoneMap_AIPOI");

	UBP_ZoneMap_AIPOI_C_ExecuteUbergraph_BP_ZoneMap_AIPOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
