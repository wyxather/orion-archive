// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Item_Armor_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Item_Armor_Base.Item_Armor_Base_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AItem_Armor_Base_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Armor_Base.Item_Armor_Base_C.ModifyInspectInfo");

	AItem_Armor_Base_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Item_Armor_Base.Item_Armor_Base_C.OnEquipped
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AItem_Armor_Base_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Armor_Base.Item_Armor_Base_C.OnEquipped");

	AItem_Armor_Base_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Armor_Base.Item_Armor_Base_C.OnUnequipped
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AItem_Armor_Base_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Armor_Base.Item_Armor_Base_C.OnUnequipped");

	AItem_Armor_Base_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Armor_Base.Item_Armor_Base_C.ExecuteUbergraph_Item_Armor_Base
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItem_Armor_Base_C::ExecuteUbergraph_Item_Armor_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Armor_Base.Item_Armor_Base_C.ExecuteUbergraph_Item_Armor_Base");

	AItem_Armor_Base_C_ExecuteUbergraph_Item_Armor_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
