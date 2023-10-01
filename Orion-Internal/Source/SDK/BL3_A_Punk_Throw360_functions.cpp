// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Punk_Throw360_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Punk_Throw360.A_Punk_Throw360_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Punk_Throw360_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Throw360.A_Punk_Throw360_C.OnBegin");

	UA_Punk_Throw360_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Punk_Throw360.A_Punk_Throw360_C.Melee180Strike
// (BlueprintCallable, BlueprintEvent)

void UA_Punk_Throw360_C::Melee180Strike()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Throw360.A_Punk_Throw360_C.Melee180Strike");

	UA_Punk_Throw360_C_Melee180Strike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Punk_Throw360.A_Punk_Throw360_C.ExecuteUbergraph_A_Punk_Throw360
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Punk_Throw360_C::ExecuteUbergraph_A_Punk_Throw360(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Throw360.A_Punk_Throw360_C.ExecuteUbergraph_A_Punk_Throw360");

	UA_Punk_Throw360_C_ExecuteUbergraph_A_Punk_Throw360_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
