#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CatchARide_HijackDestinationStation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.UserConstructionScript
struct ABP_CatchARide_HijackDestinationStation_C_UserConstructionScript_Params
{
};

// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.ReceiveBeginPlay
struct ABP_CatchARide_HijackDestinationStation_C_ReceiveBeginPlay_Params
{
};

// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.EnteredVehicle
struct ABP_CatchARide_HijackDestinationStation_C_EnteredVehicle_Params
{
	class UPawnAttachSlotComponent*                    PawnAttachSlotComponent;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.ExitedVehicle
struct ABP_CatchARide_HijackDestinationStation_C_ExitedVehicle_Params
{
	class UPawnAttachSlotComponent*                    PawnAttachSlotComponent;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.OnEnabled
struct ABP_CatchARide_HijackDestinationStation_C_OnEnabled_Params
{
};

// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.OnDisabled
struct ABP_CatchARide_HijackDestinationStation_C_OnDisabled_Params
{
};

// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.SetupForCharacter
struct ABP_CatchARide_HijackDestinationStation_C_SetupForCharacter_Params
{
	class AGbxCharacter*                               NewCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.ExecuteUbergraph_BP_CatchARide_HijackDestinationStation
struct ABP_CatchARide_HijackDestinationStation_C_ExecuteUbergraph_BP_CatchARide_HijackDestinationStation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
