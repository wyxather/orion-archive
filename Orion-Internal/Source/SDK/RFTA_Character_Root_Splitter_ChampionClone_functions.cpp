// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Splitter_ChampionClone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Root_Splitter_ChampionClone.Character_Root_Splitter_ChampionClone_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_Root_Splitter_ChampionClone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_ChampionClone.Character_Root_Splitter_ChampionClone_C.ReceiveBeginPlay");

	ACharacter_Root_Splitter_ChampionClone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_ChampionClone.Character_Root_Splitter_ChampionClone_C.OnNotifyTakeDamage_Event_1
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ACharacter_Root_Splitter_ChampionClone_C::OnNotifyTakeDamage_Event_1(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_ChampionClone.Character_Root_Splitter_ChampionClone_C.OnNotifyTakeDamage_Event_1");

	ACharacter_Root_Splitter_ChampionClone_C_OnNotifyTakeDamage_Event_1_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_ChampionClone.Character_Root_Splitter_ChampionClone_C.ExecuteUbergraph_Character_Root_Splitter_ChampionClone
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Splitter_ChampionClone_C::ExecuteUbergraph_Character_Root_Splitter_ChampionClone(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_ChampionClone.Character_Root_Splitter_ChampionClone_C.ExecuteUbergraph_Character_Root_Splitter_ChampionClone");

	ACharacter_Root_Splitter_ChampionClone_C_ExecuteUbergraph_Character_Root_Splitter_ChampionClone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
