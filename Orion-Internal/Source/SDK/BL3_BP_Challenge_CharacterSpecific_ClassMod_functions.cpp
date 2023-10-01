// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_CharacterSpecific_ClassMod_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.CheckClassMod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  EquippedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotData*      SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_CharacterSpecific_ClassMod_C::CheckClassMod(class AActor* EquippedActor, class UInventorySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.CheckClassMod");

	UBP_Challenge_CharacterSpecific_ClassMod_C_CheckClassMod_Params params;
	params.EquippedActor = EquippedActor;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.SetBinds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter**          Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BindSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_CharacterSpecific_ClassMod_C::SetBinds(class AOakCharacter** Character, bool* BindSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.SetBinds");

	UBP_Challenge_CharacterSpecific_ClassMod_C_SetBinds_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BindSet != nullptr)
		*BindSet = params.BindSet;
}


// Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific_ClassMod
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_CharacterSpecific_ClassMod_C::ExecuteUbergraph_BP_Challenge_CharacterSpecific_ClassMod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific_ClassMod");

	UBP_Challenge_CharacterSpecific_ClassMod_C_ExecuteUbergraph_BP_Challenge_CharacterSpecific_ClassMod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
