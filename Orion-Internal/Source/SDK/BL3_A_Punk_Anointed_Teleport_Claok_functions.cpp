// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Punk_Anointed_Teleport_Claok_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Punk_Anointed_Teleport_Claok.A_Punk_Anointed_Teleport_Claok_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Punk_Anointed_Teleport_Claok_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_Teleport_Claok.A_Punk_Anointed_Teleport_Claok_C.OnBegin");

	UA_Punk_Anointed_Teleport_Claok_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Punk_Anointed_Teleport_Claok.A_Punk_Anointed_Teleport_Claok_C.ExecuteUbergraph_A_Punk_Anointed_Teleport_Claok
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Punk_Anointed_Teleport_Claok_C::ExecuteUbergraph_A_Punk_Anointed_Teleport_Claok(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_Teleport_Claok.A_Punk_Anointed_Teleport_Claok_C.ExecuteUbergraph_A_Punk_Anointed_Teleport_Claok");

	UA_Punk_Anointed_Teleport_Claok_C_ExecuteUbergraph_A_Punk_Anointed_Teleport_Claok_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
