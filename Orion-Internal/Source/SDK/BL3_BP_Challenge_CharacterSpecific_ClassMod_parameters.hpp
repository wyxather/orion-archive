#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_CharacterSpecific_ClassMod_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.CheckClassMod
struct UBP_Challenge_CharacterSpecific_ClassMod_C_CheckClassMod_Params
{
	class AActor*                                      EquippedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.SetBinds
struct UBP_Challenge_CharacterSpecific_ClassMod_C_SetBinds_Params
{
	class AOakCharacter**                              Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BindSet;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific_ClassMod
struct UBP_Challenge_CharacterSpecific_ClassMod_C_ExecuteUbergraph_BP_Challenge_CharacterSpecific_ClassMod_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
