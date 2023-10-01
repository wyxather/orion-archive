// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_PlayerInPlayerBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C.OnTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_PlayerInPlayerBase_C::OnTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C.OnTick");

	UAction_PlayerInPlayerBase_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C.ExecuteUbergraph_Action_PlayerInPlayerBase
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_PlayerInPlayerBase_C::ExecuteUbergraph_Action_PlayerInPlayerBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C.ExecuteUbergraph_Action_PlayerInPlayerBase");

	UAction_PlayerInPlayerBase_C_ExecuteUbergraph_Action_PlayerInPlayerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
