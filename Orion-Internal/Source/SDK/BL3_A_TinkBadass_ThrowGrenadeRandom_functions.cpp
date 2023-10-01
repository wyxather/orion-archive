// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_TinkBadass_ThrowGrenadeRandom_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_TinkBadass_ThrowGrenadeRandom.A_TinkBadass_ThrowGrenadeRandom_C.Throw
// (BlueprintCallable, BlueprintEvent)

void UA_TinkBadass_ThrowGrenadeRandom_C::Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_TinkBadass_ThrowGrenadeRandom.A_TinkBadass_ThrowGrenadeRandom_C.Throw");

	UA_TinkBadass_ThrowGrenadeRandom_C_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_TinkBadass_ThrowGrenadeRandom.A_TinkBadass_ThrowGrenadeRandom_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_TinkBadass_ThrowGrenadeRandom_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_TinkBadass_ThrowGrenadeRandom.A_TinkBadass_ThrowGrenadeRandom_C.OnBegin");

	UA_TinkBadass_ThrowGrenadeRandom_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_TinkBadass_ThrowGrenadeRandom.A_TinkBadass_ThrowGrenadeRandom_C.ExecuteUbergraph_A_TinkBadass_ThrowGrenadeRandom
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_TinkBadass_ThrowGrenadeRandom_C::ExecuteUbergraph_A_TinkBadass_ThrowGrenadeRandom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_TinkBadass_ThrowGrenadeRandom.A_TinkBadass_ThrowGrenadeRandom_C.ExecuteUbergraph_A_TinkBadass_ThrowGrenadeRandom");

	UA_TinkBadass_ThrowGrenadeRandom_C_ExecuteUbergraph_A_TinkBadass_ThrowGrenadeRandom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
