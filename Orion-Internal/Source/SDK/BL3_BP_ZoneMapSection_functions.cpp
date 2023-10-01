// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMapSection_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZoneMapSection.BP_ZoneMapSection_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMapSection_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMapSection.BP_ZoneMapSection_C.UserConstructionScript");

	ABP_ZoneMapSection_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMapSection.BP_ZoneMapSection_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ZoneMapSection_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMapSection.BP_ZoneMapSection_C.ReceiveBeginPlay");

	ABP_ZoneMapSection_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMapSection.BP_ZoneMapSection_C.ExecuteUbergraph_BP_ZoneMapSection
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMapSection_C::ExecuteUbergraph_BP_ZoneMapSection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMapSection.BP_ZoneMapSection_C.ExecuteUbergraph_BP_ZoneMapSection");

	ABP_ZoneMapSection_C_ExecuteUbergraph_BP_ZoneMapSection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
