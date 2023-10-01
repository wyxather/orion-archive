// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Resource_Special_GlowingFragment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Resource_Special_GlowingFragment.Resource_Special_GlowingFragment_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AResource_Special_GlowingFragment_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Resource_Special_GlowingFragment.Resource_Special_GlowingFragment_C.ReceiveBeginPlay");

	AResource_Special_GlowingFragment_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Resource_Special_GlowingFragment.Resource_Special_GlowingFragment_C.ExecuteUbergraph_Resource_Special_GlowingFragment
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AResource_Special_GlowingFragment_C::ExecuteUbergraph_Resource_Special_GlowingFragment(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Resource_Special_GlowingFragment.Resource_Special_GlowingFragment_C.ExecuteUbergraph_Resource_Special_GlowingFragment");

	AResource_Special_GlowingFragment_C_ExecuteUbergraph_Resource_Special_GlowingFragment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
