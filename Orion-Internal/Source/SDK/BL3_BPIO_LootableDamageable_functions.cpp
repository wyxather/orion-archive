// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_LootableDamageable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPIO_LootableDamageable.BPIO_LootableDamageable_C.PlayAudio_Damagable
// (Public, BlueprintCallable, BlueprintEvent)

void ABPIO_LootableDamageable_C::PlayAudio_Damagable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_LootableDamageable.BPIO_LootableDamageable_C.PlayAudio_Damagable");

	ABPIO_LootableDamageable_C_PlayAudio_Damagable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_LootableDamageable.BPIO_LootableDamageable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPIO_LootableDamageable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_LootableDamageable.BPIO_LootableDamageable_C.UserConstructionScript");

	ABPIO_LootableDamageable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
