// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_DigiClone_Summoned_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_DigiClone_Summoned.Action_DigiClone_Summoned_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_DigiClone_Summoned_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DigiClone_Summoned.Action_DigiClone_Summoned_C.OnServerBegin");

	UAction_DigiClone_Summoned_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DigiClone_Summoned.Action_DigiClone_Summoned_C.ExecuteUbergraph_Action_DigiClone_Summoned
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_DigiClone_Summoned_C::ExecuteUbergraph_Action_DigiClone_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DigiClone_Summoned.Action_DigiClone_Summoned_C.ExecuteUbergraph_Action_DigiClone_Summoned");

	UAction_DigiClone_Summoned_C_ExecuteUbergraph_Action_DigiClone_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
