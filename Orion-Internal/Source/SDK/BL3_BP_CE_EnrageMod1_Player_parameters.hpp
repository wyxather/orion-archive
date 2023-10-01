#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_EnrageMod1_Player_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.IsLocallyControlled
struct UBP_CE_EnrageMod1_Player_C_IsLocallyControlled_Params
{
	bool                                               bRes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.OnBegin
struct UBP_CE_EnrageMod1_Player_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.OnServerBegin
struct UBP_CE_EnrageMod1_Player_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.OnEnd
struct UBP_CE_EnrageMod1_Player_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.OnServerEnd
struct UBP_CE_EnrageMod1_Player_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.ExecuteUbergraph_BP_CE_EnrageMod1_Player
struct UBP_CE_EnrageMod1_Player_C_ExecuteUbergraph_BP_CE_EnrageMod1_Player_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
