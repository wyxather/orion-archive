// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tink_Turret_Idle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Tink_Turret_Idle.A_Tink_Turret_Idle_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_Turret_Idle_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_Turret_Idle.A_Tink_Turret_Idle_C.OnBegin");

	UA_Tink_Turret_Idle_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_Turret_Idle.A_Tink_Turret_Idle_C.ExecuteUbergraph_A_Tink_Turret_Idle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_Turret_Idle_C::ExecuteUbergraph_A_Tink_Turret_Idle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_Turret_Idle.A_Tink_Turret_Idle_C.ExecuteUbergraph_A_Tink_Turret_Idle");

	UA_Tink_Turret_Idle_C_ExecuteUbergraph_A_Tink_Turret_Idle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
