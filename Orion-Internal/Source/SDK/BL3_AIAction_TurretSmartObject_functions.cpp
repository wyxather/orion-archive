// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_TurretSmartObject_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_TurretSmartObject.AIAction_TurretSmartObject_C.ExecuteUbergraph_AIAction_TurretSmartObject
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_TurretSmartObject_C::ExecuteUbergraph_AIAction_TurretSmartObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_TurretSmartObject.AIAction_TurretSmartObject_C.ExecuteUbergraph_AIAction_TurretSmartObject");

	UAIAction_TurretSmartObject_C_ExecuteUbergraph_AIAction_TurretSmartObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
