#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PunkShared_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_PunkShared.BPChar_PunkShared_C.ApplyChanceToUseCover
struct ABPChar_PunkShared_C_ApplyChanceToUseCover_Params
{
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.UserConstructionScript
struct ABPChar_PunkShared_C_UserConstructionScript_Params
{
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.BPI_Punk_Snipe_Laser_On
struct ABPChar_PunkShared_C_BPI_Punk_Snipe_Laser_On_Params
{
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.BPI_Punk_Snipe_Fire
struct ABPChar_PunkShared_C_BPI_Punk_Snipe_Fire_Params
{
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.BPI_Punk_Snipe_Laser_Off
struct ABPChar_PunkShared_C_BPI_Punk_Snipe_Laser_Off_Params
{
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.BPI_Punk_Snipe_Laser_Green
struct ABPChar_PunkShared_C_BPI_Punk_Snipe_Laser_Green_Params
{
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.PunkBrewHag_PickPotion
struct ABPChar_PunkShared_C_PunkBrewHag_PickPotion_Params
{
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.BPI_Punk_Anointed_Death
struct ABPChar_PunkShared_C_BPI_Punk_Anointed_Death_Params
{
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.BPI_Punk_Anointed_ADDHealth
struct ABPChar_PunkShared_C_BPI_Punk_Anointed_ADDHealth_Params
{
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.BPI_Punk_AnointedX2_Teleport
struct ABPChar_PunkShared_C_BPI_Punk_AnointedX2_Teleport_Params
{
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.BPI_Punk_Anointed_FakeDeath
struct ABPChar_PunkShared_C_BPI_Punk_Anointed_FakeDeath_Params
{
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.ReceiveBeginPlay
struct ABPChar_PunkShared_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_PunkFemaleShared
struct ABPChar_PunkShared_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_PunkFemaleShared_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.Player_HealthDepleted
struct ABPChar_PunkShared_C_Player_HealthDepleted_Params
{
	class AOakCharacter**                              Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.CE_GoreTorso
struct ABPChar_PunkShared_C_CE_GoreTorso_Params
{
	struct FGoreRegionEventSummary                     GoreSummary;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_PunkShared.BPChar_PunkShared_C.ExecuteUbergraph_BPChar_PunkShared
struct ABPChar_PunkShared_C_ExecuteUbergraph_BPChar_PunkShared_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
