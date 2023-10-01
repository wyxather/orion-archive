#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARand_Pet_Fidgets_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.OnServerBegin
struct UARand_Pet_Fidgets_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.OnServerEnd
struct UARand_Pet_Fidgets_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.Notify_PetSpawnAmmo
struct UARand_Pet_Fidgets_C_Notify_PetSpawnAmmo_Params
{
};

// Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.ExecuteUbergraph_ARand_Pet_Fidgets
struct UARand_Pet_Fidgets_C_ExecuteUbergraph_ARand_Pet_Fidgets_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
