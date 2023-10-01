// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Gore_GibParent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Gore_GibParent.BP_Gore_GibParent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Gore_GibParent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gore_GibParent.BP_Gore_GibParent_C.UserConstructionScript");

	ABP_Gore_GibParent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gore_GibParent.BP_Gore_GibParent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Gore_GibParent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gore_GibParent.BP_Gore_GibParent_C.ReceiveBeginPlay");

	ABP_Gore_GibParent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gore_GibParent.BP_Gore_GibParent_C.ExecuteUbergraph_BP_Gore_GibParent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gore_GibParent_C::ExecuteUbergraph_BP_Gore_GibParent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gore_GibParent.BP_Gore_GibParent_C.ExecuteUbergraph_BP_Gore_GibParent");

	ABP_Gore_GibParent_C_ExecuteUbergraph_BP_Gore_GibParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
