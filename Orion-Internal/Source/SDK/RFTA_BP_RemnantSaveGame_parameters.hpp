#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RemnantSaveGame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.UpdateSaveInfo
struct UBP_RemnantSaveGame_C_UpdateSaveInfo_Params
{
	class UGameInstanceGunfire**                       GameInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.UpdateTimePlayed
struct UBP_RemnantSaveGame_C_UpdateTimePlayed_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.PreCommit
struct UBP_RemnantSaveGame_C_PreCommit_Params
{
	class UPersistenceManager**                        PersistenceManager;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.ExecuteUbergraph_BP_RemnantSaveGame
struct UBP_RemnantSaveGame_C_ExecuteUbergraph_BP_RemnantSaveGame_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
