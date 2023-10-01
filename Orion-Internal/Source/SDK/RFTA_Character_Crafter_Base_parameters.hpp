#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Crafter_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Crafter_Base.Character_Crafter_Base_C.CheckItemsPostAdd
struct ACharacter_Crafter_Base_C_CheckItemsPostAdd_Params
{
};

// Function Character_Crafter_Base.Character_Crafter_Base_C.GetItemSpawnTags
struct ACharacter_Crafter_Base_C_GetItemSpawnTags_Params
{
	TArray<struct FName>                               Out;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function Character_Crafter_Base.Character_Crafter_Base_C.Generate
struct ACharacter_Crafter_Base_C_Generate_Params
{
};

// Function Character_Crafter_Base.Character_Crafter_Base_C.OnLoaded_C6B46B8B4E282D083FC66B8185ED69BA
struct ACharacter_Crafter_Base_C_OnLoaded_C6B46B8B4E282D083FC66B8185ED69BA_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Crafter_Base.Character_Crafter_Base_C.LoadAndAdd
struct ACharacter_Crafter_Base_C_LoadAndAdd_Params
{
};

// Function Character_Crafter_Base.Character_Crafter_Base_C.ReceiveBeginPlay
struct ACharacter_Crafter_Base_C_ReceiveBeginPlay_Params
{
};

// Function Character_Crafter_Base.Character_Crafter_Base_C.ExecuteUbergraph_Character_Crafter_Base
struct ACharacter_Crafter_Base_C_ExecuteUbergraph_Character_Crafter_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
