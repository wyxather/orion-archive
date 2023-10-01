// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Item_Trinket_TriggerOnEquip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.OnEquipped
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AItem_Trinket_TriggerOnEquip_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.OnEquipped");

	AItem_Trinket_TriggerOnEquip_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.OnUnequipped
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AItem_Trinket_TriggerOnEquip_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.OnUnequipped");

	AItem_Trinket_TriggerOnEquip_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.ExecuteUbergraph_Item_Trinket_TriggerOnEquip
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItem_Trinket_TriggerOnEquip_C::ExecuteUbergraph_Item_Trinket_TriggerOnEquip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.ExecuteUbergraph_Item_Trinket_TriggerOnEquip");

	AItem_Trinket_TriggerOnEquip_C_ExecuteUbergraph_Item_Trinket_TriggerOnEquip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
