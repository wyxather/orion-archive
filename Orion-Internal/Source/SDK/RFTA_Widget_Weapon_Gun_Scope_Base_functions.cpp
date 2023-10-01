// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Weapon_Gun_Scope_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Weapon_Gun_Scope_Base.Widget_Weapon_Gun_Scope_Base_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARangedWeapon**          InRangedWeapon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Weapon_Gun_Scope_Base_C::Init(class ARangedWeapon** InRangedWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Weapon_Gun_Scope_Base.Widget_Weapon_Gun_Scope_Base_C.Init");

	UWidget_Weapon_Gun_Scope_Base_C_Init_Params params;
	params.InRangedWeapon = InRangedWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
