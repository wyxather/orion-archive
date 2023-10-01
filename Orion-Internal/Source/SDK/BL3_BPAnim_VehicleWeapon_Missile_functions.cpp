// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_VehicleWeapon_Missile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_VehicleWeapon_Missile.BPAnim_VehicleWeapon_Missile_C.ExecuteUbergraph_BPAnim_VehicleWeapon_Missile
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_VehicleWeapon_Missile_C::ExecuteUbergraph_BPAnim_VehicleWeapon_Missile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_VehicleWeapon_Missile.BPAnim_VehicleWeapon_Missile_C.ExecuteUbergraph_BPAnim_VehicleWeapon_Missile");

	UBPAnim_VehicleWeapon_Missile_C_ExecuteUbergraph_BPAnim_VehicleWeapon_Missile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
