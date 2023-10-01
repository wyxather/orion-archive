#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_Punk_Anointed_ThrowEnergyBall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.OnBegin
struct UARandom_Punk_Anointed_ThrowEnergyBall_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.OnEnd
struct UARandom_Punk_Anointed_ThrowEnergyBall_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.MeleeStrike
struct UARandom_Punk_Anointed_ThrowEnergyBall_C_MeleeStrike_Params
{
};

// Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.ThrowLeftHand
struct UARandom_Punk_Anointed_ThrowEnergyBall_C_ThrowLeftHand_Params
{
};

// Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.ExecuteUbergraph_ARandom_Punk_Anointed_ThrowEnergyBall
struct UARandom_Punk_Anointed_ThrowEnergyBall_C_ExecuteUbergraph_ARandom_Punk_Anointed_ThrowEnergyBall_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
