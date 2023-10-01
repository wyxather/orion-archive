// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_AnimDeath_InOutrunnerDriver_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_AnimDeath_InOutrunnerDriver.Action_AnimDeath_InOutrunnerDriver_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_AnimDeath_InOutrunnerDriver_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AnimDeath_InOutrunnerDriver.Action_AnimDeath_InOutrunnerDriver_C.OnBegin");

	UAction_AnimDeath_InOutrunnerDriver_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_AnimDeath_InOutrunnerDriver.Action_AnimDeath_InOutrunnerDriver_C.ExecuteUbergraph_Action_AnimDeath_InOutrunnerDriver
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_AnimDeath_InOutrunnerDriver_C::ExecuteUbergraph_Action_AnimDeath_InOutrunnerDriver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AnimDeath_InOutrunnerDriver.Action_AnimDeath_InOutrunnerDriver_C.ExecuteUbergraph_Action_AnimDeath_InOutrunnerDriver");

	UAction_AnimDeath_InOutrunnerDriver_C_ExecuteUbergraph_Action_AnimDeath_InOutrunnerDriver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
