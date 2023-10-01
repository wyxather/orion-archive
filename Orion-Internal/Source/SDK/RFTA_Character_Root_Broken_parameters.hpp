#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Broken_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Root_Broken.Character_Root_Broken_C.Spawn Splitter
struct ACharacter_Root_Broken_C_Spawn_Splitter_Params
{
	class UClass**                                     ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      NameID;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               SplitAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter_Root_Splitter_C*                  AsCharacter_Root_Splitter;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Broken.Character_Root_Broken_C.InEventRegion
struct ACharacter_Root_Broken_C_InEventRegion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Character_Root_Broken.Character_Root_Broken_C.SplitterKilled
struct ACharacter_Root_Broken_C_SplitterKilled_Params
{
	class ACharacterGunfire**                          Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Broken.Character_Root_Broken_C.SplittersDead
struct ACharacter_Root_Broken_C_SplittersDead_Params
{
	bool                                               SplittersDead;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Root_Broken.Character_Root_Broken_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_StateChangeDelegate__DelegateSignature
struct ACharacter_Root_Broken_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_StateChangeDelegate__DelegateSignature_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      PreviousStateName;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Broken.Character_Root_Broken_C.OnEnterDown
struct ACharacter_Root_Broken_C_OnEnterDown_Params
{
};

// Function Character_Root_Broken.Character_Root_Broken_C.OnExitDown
struct ACharacter_Root_Broken_C_OnExitDown_Params
{
};

// Function Character_Root_Broken.Character_Root_Broken_C.SFX_Sprint_On
struct ACharacter_Root_Broken_C_SFX_Sprint_On_Params
{
};

// Function Character_Root_Broken.Character_Root_Broken_C.OnDead_Event_2
struct ACharacter_Root_Broken_C_OnDead_Event_2_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Broken.Character_Root_Broken_C.OnSplitRight
struct ACharacter_Root_Broken_C_OnSplitRight_Params
{
};

// Function Character_Root_Broken.Character_Root_Broken_C.OnRegenerateLeft
struct ACharacter_Root_Broken_C_OnRegenerateLeft_Params
{
};

// Function Character_Root_Broken.Character_Root_Broken_C.OnRegenerateRight
struct ACharacter_Root_Broken_C_OnRegenerateRight_Params
{
};

// Function Character_Root_Broken.Character_Root_Broken_C.OnSplitLeft
struct ACharacter_Root_Broken_C_OnSplitLeft_Params
{
};

// Function Character_Root_Broken.Character_Root_Broken_C.OnQuestFailed
struct ACharacter_Root_Broken_C_OnQuestFailed_Params
{
};

// Function Character_Root_Broken.Character_Root_Broken_C.IntroComplete
struct ACharacter_Root_Broken_C_IntroComplete_Params
{
};

// Function Character_Root_Broken.Character_Root_Broken_C.SplitterDissolveOut
struct ACharacter_Root_Broken_C_SplitterDissolveOut_Params
{
	class UDissolveComponent**                         DissolveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Broken.Character_Root_Broken_C.SplitterSetScale
struct ACharacter_Root_Broken_C_SplitterSetScale_Params
{
	class USceneComponent**                            TargetMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Broken.Character_Root_Broken_C.ExecuteUbergraph_Character_Root_Broken
struct ACharacter_Root_Broken_C_ExecuteUbergraph_Character_Root_Broken_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
