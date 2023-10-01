#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Splitter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Root_Splitter.Character_Root_Splitter_C.HeartbeatTimeline__FinishedFunc
struct ACharacter_Root_Splitter_C_HeartbeatTimeline__FinishedFunc_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.HeartbeatTimeline__UpdateFunc
struct ACharacter_Root_Splitter_C_HeartbeatTimeline__UpdateFunc_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.OnDead_Event_2
struct ACharacter_Root_Splitter_C_OnDead_Event_2_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.Leech
struct ACharacter_Root_Splitter_C_Leech_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.LeaveDormant
struct ACharacter_Root_Splitter_C_LeaveDormant_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.EmisOff
struct ACharacter_Root_Splitter_C_EmisOff_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.EmisOn
struct ACharacter_Root_Splitter_C_EmisOn_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.BndEvt__Tween_K2Node_ComponentBoundEvent_0_TweenCompleteDelegate__DelegateSignature
struct ACharacter_Root_Splitter_C_BndEvt__Tween_K2Node_ComponentBoundEvent_0_TweenCompleteDelegate__DelegateSignature_Params
{
	class UTweenComponent**                            TweenComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.SplitterShockwave
struct ACharacter_Root_Splitter_C_SplitterShockwave_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.DelayedSetState
struct ACharacter_Root_Splitter_C_DelayedSetState_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              OnlyIfValid;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.SplitterHeal
struct ACharacter_Root_Splitter_C_SplitterHeal_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.SFX_HeartLoop_On
struct ACharacter_Root_Splitter_C_SFX_HeartLoop_On_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.SFX_HeartLoop_Off
struct ACharacter_Root_Splitter_C_SFX_HeartLoop_Off_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.OnHealStartVFX
struct ACharacter_Root_Splitter_C_OnHealStartVFX_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.ReceiveBeginPlay
struct ACharacter_Root_Splitter_C_ReceiveBeginPlay_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.GainShield
struct ACharacter_Root_Splitter_C_GainShield_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.SplitterEndHeal
struct ACharacter_Root_Splitter_C_SplitterEndHeal_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.OnSplitRight
struct ACharacter_Root_Splitter_C_OnSplitRight_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.DoHealPulse
struct ACharacter_Root_Splitter_C_DoHealPulse_Params
{
};

// Function Character_Root_Splitter.Character_Root_Splitter_C.ExecuteUbergraph_Character_Root_Splitter
struct ACharacter_Root_Splitter_C_ExecuteUbergraph_Character_Root_Splitter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
