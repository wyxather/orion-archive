// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Shotgun_AnimsBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Shotgun_AnimsBP.Weapon_Shotgun_AnimsBP_C.BlueprintUpdateAnimation
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeapon_Shotgun_AnimsBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Shotgun_AnimsBP.Weapon_Shotgun_AnimsBP_C.BlueprintUpdateAnimation");

	UWeapon_Shotgun_AnimsBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Shotgun_AnimsBP.Weapon_Shotgun_AnimsBP_C.ExecuteUbergraph_Weapon_Shotgun_AnimsBP
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeapon_Shotgun_AnimsBP_C::ExecuteUbergraph_Weapon_Shotgun_AnimsBP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Shotgun_AnimsBP.Weapon_Shotgun_AnimsBP_C.ExecuteUbergraph_Weapon_Shotgun_AnimsBP");

	UWeapon_Shotgun_AnimsBP_C_ExecuteUbergraph_Weapon_Shotgun_AnimsBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
