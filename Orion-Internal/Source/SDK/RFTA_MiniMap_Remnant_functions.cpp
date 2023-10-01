// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_MiniMap_Remnant_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MiniMap_Remnant.MiniMap_Remnant_C.AddToActiveMinimap
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UMiniMap_Remnant_C::AddToActiveMinimap()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Remnant.MiniMap_Remnant_C.AddToActiveMinimap");

	UMiniMap_Remnant_C_AddToActiveMinimap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Remnant.MiniMap_Remnant_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UMiniMap_Remnant_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Remnant.MiniMap_Remnant_C.ReceiveBeginPlay");

	UMiniMap_Remnant_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Remnant.MiniMap_Remnant_C.ReceiveEndPlay
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMap_Remnant_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Remnant.MiniMap_Remnant_C.ReceiveEndPlay");

	UMiniMap_Remnant_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Remnant.MiniMap_Remnant_C.AutoAddToMiniMap
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMiniMap_Remnant_C::AutoAddToMiniMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Remnant.MiniMap_Remnant_C.AutoAddToMiniMap");

	UMiniMap_Remnant_C_AutoAddToMiniMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Remnant.MiniMap_Remnant_C.ExecuteUbergraph_MiniMap_Remnant
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMap_Remnant_C::ExecuteUbergraph_MiniMap_Remnant(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Remnant.MiniMap_Remnant_C.ExecuteUbergraph_MiniMap_Remnant");

	UMiniMap_Remnant_C_ExecuteUbergraph_MiniMap_Remnant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
