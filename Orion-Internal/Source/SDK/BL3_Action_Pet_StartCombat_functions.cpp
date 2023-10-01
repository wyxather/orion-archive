// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Pet_StartCombat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Pet_StartCombat.Action_Pet_StartCombat_C.Notify_Dialog
// (BlueprintCallable, BlueprintEvent)

void UAction_Pet_StartCombat_C::Notify_Dialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Pet_StartCombat.Action_Pet_StartCombat_C.Notify_Dialog");

	UAction_Pet_StartCombat_C_Notify_Dialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Pet_StartCombat.Action_Pet_StartCombat_C.ExecuteUbergraph_Action_Pet_StartCombat
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Pet_StartCombat_C::ExecuteUbergraph_Action_Pet_StartCombat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Pet_StartCombat.Action_Pet_StartCombat_C.ExecuteUbergraph_Action_Pet_StartCombat");

	UAction_Pet_StartCombat_C_ExecuteUbergraph_Action_Pet_StartCombat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
