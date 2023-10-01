// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Pet_KilledEnemy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Pet_KilledEnemy.Action_Pet_KilledEnemy_C.Notify_Response
// (BlueprintCallable, BlueprintEvent)

void UAction_Pet_KilledEnemy_C::Notify_Response()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Pet_KilledEnemy.Action_Pet_KilledEnemy_C.Notify_Response");

	UAction_Pet_KilledEnemy_C_Notify_Response_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Pet_KilledEnemy.Action_Pet_KilledEnemy_C.ExecuteUbergraph_Action_Pet_KilledEnemy
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Pet_KilledEnemy_C::ExecuteUbergraph_Action_Pet_KilledEnemy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Pet_KilledEnemy.Action_Pet_KilledEnemy_C.ExecuteUbergraph_Action_Pet_KilledEnemy");

	UAction_Pet_KilledEnemy_C_ExecuteUbergraph_Action_Pet_KilledEnemy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
