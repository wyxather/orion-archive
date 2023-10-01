// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_BurningBarrel_A_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BurningBarrel_A.BP_BurningBarrel_A_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_BurningBarrel_A_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BurningBarrel_A.BP_BurningBarrel_A_C.ReceiveBeginPlay");

	ABP_BurningBarrel_A_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BurningBarrel_A.BP_BurningBarrel_A_C.ExecuteUbergraph_BP_BurningBarrel_A
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BurningBarrel_A_C::ExecuteUbergraph_BP_BurningBarrel_A(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BurningBarrel_A.BP_BurningBarrel_A_C.ExecuteUbergraph_BP_BurningBarrel_A");

	ABP_BurningBarrel_A_C_ExecuteUbergraph_BP_BurningBarrel_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
