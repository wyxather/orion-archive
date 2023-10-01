// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_Cloak_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.Notify_Stealth
// (BlueprintCallable, BlueprintEvent)

void UAction_Beastmaster_Cloak_Base_C::Notify_Stealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.Notify_Stealth");

	UAction_Beastmaster_Cloak_Base_C_Notify_Stealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.Notify_StealthFeedback
// (BlueprintCallable, BlueprintEvent)

void UAction_Beastmaster_Cloak_Base_C::Notify_StealthFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.Notify_StealthFeedback");

	UAction_Beastmaster_Cloak_Base_C_Notify_StealthFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.ExecuteUbergraph_Action_Beastmaster_Cloak_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_Cloak_Base_C::ExecuteUbergraph_Action_Beastmaster_Cloak_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.ExecuteUbergraph_Action_Beastmaster_Cloak_Base");

	UAction_Beastmaster_Cloak_Base_C_ExecuteUbergraph_Action_Beastmaster_Cloak_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
