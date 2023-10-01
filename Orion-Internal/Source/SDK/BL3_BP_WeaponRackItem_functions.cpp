// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_WeaponRackItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WeaponRackItem.BP_WeaponRackItem_C.CanBePickedUp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AOakCharacter**          PickupInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UsedByInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AInventoryItemPickup**   WorldPickupActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WeaponRackItem_C::CanBePickedUp(class AOakCharacter** PickupInstigator, int* Quantity, bool* UsedByInstigator, class AInventoryItemPickup** WorldPickupActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRackItem.BP_WeaponRackItem_C.CanBePickedUp");

	ABP_WeaponRackItem_C_CanBePickedUp_Params params;
	params.PickupInstigator = PickupInstigator;
	params.Quantity = Quantity;
	params.UsedByInstigator = UsedByInstigator;
	params.WorldPickupActor = WorldPickupActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WeaponRackItem.BP_WeaponRackItem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponRackItem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRackItem.BP_WeaponRackItem_C.UserConstructionScript");

	ABP_WeaponRackItem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
