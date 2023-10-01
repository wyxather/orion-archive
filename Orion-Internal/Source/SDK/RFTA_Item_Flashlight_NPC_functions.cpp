// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Item_Flashlight_NPC_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Item_Flashlight_NPC.Item_Flashlight_NPC_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AItem_Flashlight_NPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Flashlight_NPC.Item_Flashlight_NPC_C.ReceiveBeginPlay");

	AItem_Flashlight_NPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Flashlight_NPC.Item_Flashlight_NPC_C.ExecuteUbergraph_Item_Flashlight_NPC
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItem_Flashlight_NPC_C::ExecuteUbergraph_Item_Flashlight_NPC(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Flashlight_NPC.Item_Flashlight_NPC_C.ExecuteUbergraph_Item_Flashlight_NPC");

	AItem_Flashlight_NPC_C_ExecuteUbergraph_Item_Flashlight_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
