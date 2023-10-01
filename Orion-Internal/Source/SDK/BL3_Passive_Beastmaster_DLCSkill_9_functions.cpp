// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_9_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.RemoveShield
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_8_C::RemoveShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.RemoveShield");

	UPassive_Beastmaster_DLCSkill_8_C_RemoveShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.ConfigureShield
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_8_C::ConfigureShield(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.ConfigureShield");

	UPassive_Beastmaster_DLCSkill_8_C_ConfigureShield_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_8_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.OnActivated");

	UPassive_Beastmaster_DLCSkill_8_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.UpdateShield
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_8_C::UpdateShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.UpdateShield");

	UPassive_Beastmaster_DLCSkill_8_C_UpdateShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_9
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_8_C::ExecuteUbergraph_Passive_Beastmaster_DLCSkill_9(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_9");

	UPassive_Beastmaster_DLCSkill_8_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_9_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
