#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakCommonFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_EnumArrayToInt
struct UOakCommonFunctions_C_Bitmask_EnumArrayToInt_Params
{
	TArray<unsigned char>                              Enum;                                                     // (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Bitmask;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_EnumToInt
struct UOakCommonFunctions_C_Bitmask_EnumToInt_Params
{
	unsigned char                                      Enum;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Bitmask;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_RandomEnum
struct UOakCommonFunctions_C_Bitmask_RandomEnum_Params
{
	int                                                BitmaskInt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RandomEnum;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.CheckChallengeArrayStatus
struct UOakCommonFunctions_C_CheckChallengeArrayStatus_Params
{
	TArray<class UClass*>                              Challenge_Array;                                          // (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APlayerController*                           Chracter_Controller;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Completed_Challenges_Array;                               // (Parm, OutParm, ZeroConstructor)
};

// Function OakCommonFunctions.OakCommonFunctions_C.CheckChallengeStatus
struct UOakCommonFunctions_C_CheckChallengeStatus_Params
{
	class APlayerController*                           CharacterController;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Challenge;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Complete;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.ChallengeComplete_AllPlayers
struct UOakCommonFunctions_C_ChallengeComplete_AllPlayers_Params
{
	class UClass*                                      Challenge;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.ChallengeActivate_AllPlayers
struct UOakCommonFunctions_C_ChallengeActivate_AllPlayers_Params
{
	class UClass*                                      Challenge;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.ChallengeComplete
struct UOakCommonFunctions_C_ChallengeComplete_Params
{
	class AOakCharacter_Player*                        Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Challenge;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.ChallengeActivate
struct UOakCommonFunctions_C_ChallengeActivate_Params
{
	class AOakCharacter_Player*                        Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Challenge;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.Cosh
struct UOakCommonFunctions_C_Cosh_Params
{
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              _result;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.SetMissionDoorState
struct UOakCommonFunctions_C_SetMissionDoorState_Params
{
	struct FMissionObjectiveReference                  ObjectiveRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.SetMissionSwitchState
struct UOakCommonFunctions_C_SetMissionSwitchState_Params
{
	struct FMissionObjectiveReference                  ObjectiveRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.SetDebugConsoleCommands
struct UOakCommonFunctions_C_SetDebugConsoleCommands_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Stat_Unit;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Stat_FPS;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDebug_Missions;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ToggleAllScreenMessages;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BalanceMe;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               God;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Demigod;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllAmmo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.MissionTempHudText
struct UOakCommonFunctions_C_MissionTempHudText_Params
{
	class UObject*                                     WorldContextObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TextSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.MissionTempSpeakText
struct UOakCommonFunctions_C_MissionTempSpeakText_Params
{
	class UObject*                                     WorldContextObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TextSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               FacePlayer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.DisplayErrorMessage
struct UOakCommonFunctions_C_DisplayErrorMessage_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ErrorMessage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.Compare Damage Source
struct UOakCommonFunctions_C_Compare_Damage_Source_Params
{
	class UDamageSource*                               Damage_Source_1;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Damage_Source_2;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Equal;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Not_Equal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.Make Transforms Around Cone
struct UOakCommonFunctions_C_Make_Transforms_Around_Cone_Params
{
	struct FVector                                     Cone_Axis;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Cone_Location;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Cone_Angle_Min;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Cone_Angle_Max;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation_Angle_Divergence;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Sweep_Angle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance_From_Cone_Center;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number_Of_Transforms;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          Out_Transforms;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function OakCommonFunctions.OakCommonFunctions_C.Get Player View Trace
struct UOakCommonFunctions_C_Get_Player_View_Trace_Params
{
	class AOakCharacter_Player*                        Player_Character;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Trace_Length;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Trace_Start;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Trace_End;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function OakCommonFunctions.OakCommonFunctions_C.Get Regeneration Rate
struct UOakCommonFunctions_C_Get_Regeneration_Rate_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max_Regen_Rate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Regen_Rate;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
