// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_ZoneDoor_Intro_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interactive_ZoneDoor_Intro.Interactive_ZoneDoor_Intro_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AInteractive_ZoneDoor_Intro_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Intro.Interactive_ZoneDoor_Intro_C.ReceiveBeginPlay");

	AInteractive_ZoneDoor_Intro_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_ZoneDoor_Intro.Interactive_ZoneDoor_Intro_C.ExecuteUbergraph_Interactive_ZoneDoor_Intro
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_ZoneDoor_Intro_C::ExecuteUbergraph_Interactive_ZoneDoor_Intro(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Intro.Interactive_ZoneDoor_Intro_C.ExecuteUbergraph_Interactive_ZoneDoor_Intro");

	AInteractive_ZoneDoor_Intro_C_ExecuteUbergraph_Interactive_ZoneDoor_Intro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
