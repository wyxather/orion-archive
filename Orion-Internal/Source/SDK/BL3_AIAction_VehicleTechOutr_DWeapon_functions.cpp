// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VehicleTechOutr_DWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_VehicleTechOutr_DWeapon.AIAction_VehicleTechOutr_DWeapon_C.ExecuteUbergraph_AIAction_VehicleTechOutr_DWeapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_VehicleTechOutr_DWeapon_C::ExecuteUbergraph_AIAction_VehicleTechOutr_DWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_VehicleTechOutr_DWeapon.AIAction_VehicleTechOutr_DWeapon_C.ExecuteUbergraph_AIAction_VehicleTechOutr_DWeapon");

	UAIAction_VehicleTechOutr_DWeapon_C_ExecuteUbergraph_AIAction_VehicleTechOutr_DWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
