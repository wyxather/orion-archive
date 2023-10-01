// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tink_Anointed_Teleport_UnCloak_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Tink_Anointed_Teleport_UnCloak.A_Tink_Anointed_Teleport_UnCloak_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_Anointed_Teleport_UnCloak_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_Anointed_Teleport_UnCloak.A_Tink_Anointed_Teleport_UnCloak_C.OnBegin");

	UA_Tink_Anointed_Teleport_UnCloak_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_Anointed_Teleport_UnCloak.A_Tink_Anointed_Teleport_UnCloak_C.ExecuteUbergraph_A_Tink_Anointed_Teleport_UnCloak
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_Anointed_Teleport_UnCloak_C::ExecuteUbergraph_A_Tink_Anointed_Teleport_UnCloak(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_Anointed_Teleport_UnCloak.A_Tink_Anointed_Teleport_UnCloak_C.ExecuteUbergraph_A_Tink_Anointed_Teleport_UnCloak");

	UA_Tink_Anointed_Teleport_UnCloak_C_ExecuteUbergraph_A_Tink_Anointed_Teleport_UnCloak_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
