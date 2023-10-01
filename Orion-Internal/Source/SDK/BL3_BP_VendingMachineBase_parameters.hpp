#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VendingMachineBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VendingMachineBase.BP_VendingMachineBase_C.UserConstructionScript
struct ABP_VendingMachineBase_C_UserConstructionScript_Params
{
};

// Function BP_VendingMachineBase.BP_VendingMachineBase_C.OnPlayerStopInteraction
struct ABP_VendingMachineBase_C_OnPlayerStopInteraction_Params
{
	class AOakPlayerController**                       Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachineBase.BP_VendingMachineBase_C.K2_OnSoldSomething
struct ABP_VendingMachineBase_C_K2_OnSoldSomething_Params
{
	class AActor**                                     InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachineBase.BP_VendingMachineBase_C.K2_OnSoldAllJunk
struct ABP_VendingMachineBase_C_K2_OnSoldAllJunk_Params
{
};

// Function BP_VendingMachineBase.BP_VendingMachineBase_C.OnPlayerBeginInteraction
struct ABP_VendingMachineBase_C_OnPlayerBeginInteraction_Params
{
	class AOakPlayerController**                       Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachineBase.BP_VendingMachineBase_C.K2_OnShelfStablySelected
struct ABP_VendingMachineBase_C_K2_OnShelfStablySelected_Params
{
	EVendingMachineTrayTileType*                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachineBase.BP_VendingMachineBase_C.K2_OnBoughtSomething
struct ABP_VendingMachineBase_C_K2_OnBoughtSomething_Params
{
	EVendingMachineBuyType*                            Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachineBase.BP_VendingMachineBase_C.ExecuteUbergraph_BP_VendingMachineBase
struct ABP_VendingMachineBase_C_ExecuteUbergraph_BP_VendingMachineBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
