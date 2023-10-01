// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Torrent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Torrent.Ability_Torrent_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Torrent_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Torrent.Ability_Torrent_C.OnActivated");

	UAbility_Torrent_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Torrent.Ability_Torrent_C.ExecuteUbergraph_Ability_Torrent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Torrent_C::ExecuteUbergraph_Ability_Torrent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Torrent.Ability_Torrent_C.ExecuteUbergraph_Ability_Torrent");

	UAbility_Torrent_C_ExecuteUbergraph_Ability_Torrent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
