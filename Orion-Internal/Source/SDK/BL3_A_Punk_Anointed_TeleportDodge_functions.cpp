// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Punk_Anointed_TeleportDodge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Punk_Anointed_TeleportDodge.A_Punk_Anointed_TeleportDodge_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Punk_Anointed_TeleportDodge_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_TeleportDodge.A_Punk_Anointed_TeleportDodge_C.OnBegin");

	UA_Punk_Anointed_TeleportDodge_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Punk_Anointed_TeleportDodge.A_Punk_Anointed_TeleportDodge_C.ExecuteUbergraph_A_Punk_Anointed_TeleportDodge
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Punk_Anointed_TeleportDodge_C::ExecuteUbergraph_A_Punk_Anointed_TeleportDodge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_TeleportDodge.A_Punk_Anointed_TeleportDodge_C.ExecuteUbergraph_A_Punk_Anointed_TeleportDodge");

	UA_Punk_Anointed_TeleportDodge_C_ExecuteUbergraph_A_Punk_Anointed_TeleportDodge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
