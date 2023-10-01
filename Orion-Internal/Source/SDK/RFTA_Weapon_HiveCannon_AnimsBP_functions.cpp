// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_HiveCannon_AnimsBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_HiveCannon_AnimsBP.Weapon_HiveCannon_AnimsBP_C.ExecuteUbergraph_Weapon_HiveCannon_AnimsBP
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeapon_HiveCannon_AnimsBP_C::ExecuteUbergraph_Weapon_HiveCannon_AnimsBP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_HiveCannon_AnimsBP.Weapon_HiveCannon_AnimsBP_C.ExecuteUbergraph_Weapon_HiveCannon_AnimsBP");

	UWeapon_HiveCannon_AnimsBP_C_ExecuteUbergraph_Weapon_HiveCannon_AnimsBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
