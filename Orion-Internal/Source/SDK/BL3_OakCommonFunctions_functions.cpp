// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakCommonFunctions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_EnumArrayToInt
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<unsigned char>          Enum                           (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Bitmask                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_Bitmask_EnumArrayToInt(class UObject* __WorldContext, TArray<unsigned char>* Enum, int* Bitmask)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_EnumArrayToInt");

	UOakCommonFunctions_C_Bitmask_EnumArrayToInt_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enum != nullptr)
		*Enum = params.Enum;
	if (Bitmask != nullptr)
		*Bitmask = params.Bitmask;
}


// Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_EnumToInt
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// unsigned char                  Enum                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Bitmask                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_Bitmask_EnumToInt(unsigned char Enum, class UObject* __WorldContext, int* Bitmask)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_EnumToInt");

	UOakCommonFunctions_C_Bitmask_EnumToInt_Params params;
	params.Enum = Enum;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bitmask != nullptr)
		*Bitmask = params.Bitmask;
}


// Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_RandomEnum
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            BitmaskInt                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RandomEnum                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_Bitmask_RandomEnum(int BitmaskInt, class UObject* __WorldContext, unsigned char* RandomEnum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_RandomEnum");

	UOakCommonFunctions_C_Bitmask_RandomEnum_Params params;
	params.BitmaskInt = BitmaskInt;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomEnum != nullptr)
		*RandomEnum = params.RandomEnum;
}


// Function OakCommonFunctions.OakCommonFunctions_C.CheckChallengeArrayStatus
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          Challenge_Array                (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APlayerController*       Chracter_Controller            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          Completed_Challenges_Array     (Parm, OutParm, ZeroConstructor)

void UOakCommonFunctions_C::STATIC_CheckChallengeArrayStatus(class APlayerController* Chracter_Controller, class UObject* __WorldContext, TArray<class UClass*>* Challenge_Array, TArray<class UClass*>* Completed_Challenges_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.CheckChallengeArrayStatus");

	UOakCommonFunctions_C_CheckChallengeArrayStatus_Params params;
	params.Chracter_Controller = Chracter_Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Challenge_Array != nullptr)
		*Challenge_Array = params.Challenge_Array;
	if (Completed_Challenges_Array != nullptr)
		*Completed_Challenges_Array = params.Completed_Challenges_Array;
}


// Function OakCommonFunctions.OakCommonFunctions_C.CheckChallengeStatus
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       CharacterController            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Challenge                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_CheckChallengeStatus(class APlayerController* CharacterController, class UClass* Challenge, class UObject* __WorldContext, bool* Complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.CheckChallengeStatus");

	UOakCommonFunctions_C_CheckChallengeStatus_Params params;
	params.CharacterController = CharacterController;
	params.Challenge = Challenge;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Complete != nullptr)
		*Complete = params.Complete;
}


// Function OakCommonFunctions.OakCommonFunctions_C.ChallengeComplete_AllPlayers
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Challenge                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_ChallengeComplete_AllPlayers(class UClass* Challenge, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.ChallengeComplete_AllPlayers");

	UOakCommonFunctions_C_ChallengeComplete_AllPlayers_Params params;
	params.Challenge = Challenge;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCommonFunctions.OakCommonFunctions_C.ChallengeActivate_AllPlayers
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Challenge                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_ChallengeActivate_AllPlayers(class UClass* Challenge, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.ChallengeActivate_AllPlayers");

	UOakCommonFunctions_C_ChallengeActivate_AllPlayers_Params params;
	params.Challenge = Challenge;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCommonFunctions.OakCommonFunctions_C.ChallengeComplete
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*    Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Challenge                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_ChallengeComplete(class AOakCharacter_Player* Character, class UClass* Challenge, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.ChallengeComplete");

	UOakCommonFunctions_C_ChallengeComplete_Params params;
	params.Character = Character;
	params.Challenge = Challenge;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCommonFunctions.OakCommonFunctions_C.ChallengeActivate
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*    Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Challenge                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_ChallengeActivate(class AOakCharacter_Player* Character, class UClass* Challenge, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.ChallengeActivate");

	UOakCommonFunctions_C_ChallengeActivate_Params params;
	params.Character = Character;
	params.Challenge = Challenge;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCommonFunctions.OakCommonFunctions_C.Cosh
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          _result                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_Cosh(float A, class UObject* __WorldContext, float* _result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Cosh");

	UOakCommonFunctions_C_Cosh_Params params;
	params.A = A;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_result != nullptr)
		*_result = params._result;
}


// Function OakCommonFunctions.OakCommonFunctions_C.SetMissionDoorState
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionObjectiveReference ObjectiveRef                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_SetMissionDoorState(const struct FMissionObjectiveReference& ObjectiveRef, class UObject* Context, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.SetMissionDoorState");

	UOakCommonFunctions_C_SetMissionDoorState_Params params;
	params.ObjectiveRef = ObjectiveRef;
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCommonFunctions.OakCommonFunctions_C.SetMissionSwitchState
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionObjectiveReference ObjectiveRef                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_SetMissionSwitchState(const struct FMissionObjectiveReference& ObjectiveRef, class UObject* Context, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.SetMissionSwitchState");

	UOakCommonFunctions_C_SetMissionSwitchState_Params params;
	params.ObjectiveRef = ObjectiveRef;
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCommonFunctions.OakCommonFunctions_C.SetDebugConsoleCommands
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Stat_Unit                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Stat_FPS                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowDebug_Missions             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ToggleAllScreenMessages        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BalanceMe                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NoTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           God                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Demigod                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllAmmo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_SetDebugConsoleCommands(class APlayerController* PlayerController, bool Stat_Unit, bool Stat_FPS, bool ShowDebug_Missions, bool ToggleAllScreenMessages, bool BalanceMe, bool NoTarget, bool God, bool Demigod, bool Loaded, bool AllAmmo, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.SetDebugConsoleCommands");

	UOakCommonFunctions_C_SetDebugConsoleCommands_Params params;
	params.PlayerController = PlayerController;
	params.Stat_Unit = Stat_Unit;
	params.Stat_FPS = Stat_FPS;
	params.ShowDebug_Missions = ShowDebug_Missions;
	params.ToggleAllScreenMessages = ToggleAllScreenMessages;
	params.BalanceMe = BalanceMe;
	params.NoTarget = NoTarget;
	params.God = God;
	params.Demigod = Demigod;
	params.Loaded = Loaded;
	params.AllAmmo = AllAmmo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCommonFunctions.OakCommonFunctions_C.MissionTempHudText
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TextSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_MissionTempHudText(class UObject* WorldContextObject, const struct FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.MissionTempHudText");

	UOakCommonFunctions_C_MissionTempHudText_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Text = Text;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.TextColor = TextColor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCommonFunctions.OakCommonFunctions_C.MissionTempSpeakText
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TextSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           FacePlayer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_MissionTempSpeakText(class UObject* WorldContextObject, class UClass* ActorClass, const struct FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.MissionTempSpeakText");

	UOakCommonFunctions_C_MissionTempSpeakText_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.Text = Text;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.TextColor = TextColor;
	params.FacePlayer = FacePlayer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCommonFunctions.OakCommonFunctions_C.DisplayErrorMessage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ErrorMessage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_DisplayErrorMessage(class UObject* Context, const class FString& ErrorMessage, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.DisplayErrorMessage");

	UOakCommonFunctions_C_DisplayErrorMessage_Params params;
	params.Context = Context;
	params.ErrorMessage = ErrorMessage;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCommonFunctions.OakCommonFunctions_C.Compare Damage Source
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDamageSource*           Damage_Source_1                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Damage_Source_2                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Equal                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Not_Equal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_Compare_Damage_Source(class UDamageSource* Damage_Source_1, class UClass* Damage_Source_2, class UObject* __WorldContext, bool* Equal, bool* Not_Equal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Compare Damage Source");

	UOakCommonFunctions_C_Compare_Damage_Source_Params params;
	params.Damage_Source_1 = Damage_Source_1;
	params.Damage_Source_2 = Damage_Source_2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Equal != nullptr)
		*Equal = params.Equal;
	if (Not_Equal != nullptr)
		*Not_Equal = params.Not_Equal;
}


// Function OakCommonFunctions.OakCommonFunctions_C.Make Transforms Around Cone
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Cone_Axis                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Cone_Location                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Cone_Angle_Min                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Cone_Angle_Max                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rotation_Angle_Divergence      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Sweep_Angle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance_From_Cone_Center      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Number_Of_Transforms           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTransform>      Out_Transforms                 (Parm, OutParm, ZeroConstructor)

void UOakCommonFunctions_C::STATIC_Make_Transforms_Around_Cone(const struct FVector& Cone_Axis, const struct FVector& Cone_Location, float Cone_Angle_Min, float Cone_Angle_Max, float Rotation_Angle_Divergence, float Sweep_Angle, float Distance_From_Cone_Center, int Number_Of_Transforms, class UObject* __WorldContext, TArray<struct FTransform>* Out_Transforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Make Transforms Around Cone");

	UOakCommonFunctions_C_Make_Transforms_Around_Cone_Params params;
	params.Cone_Axis = Cone_Axis;
	params.Cone_Location = Cone_Location;
	params.Cone_Angle_Min = Cone_Angle_Min;
	params.Cone_Angle_Max = Cone_Angle_Max;
	params.Rotation_Angle_Divergence = Rotation_Angle_Divergence;
	params.Sweep_Angle = Sweep_Angle;
	params.Distance_From_Cone_Center = Distance_From_Cone_Center;
	params.Number_Of_Transforms = Number_Of_Transforms;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_Transforms != nullptr)
		*Out_Transforms = params.Out_Transforms;
}


// Function OakCommonFunctions.OakCommonFunctions_C.Get Player View Trace
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*    Player_Character               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Trace_Length                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Trace_Start                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 Trace_End                      (Parm, OutParm, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_Get_Player_View_Trace(class AOakCharacter_Player* Player_Character, float Trace_Length, class UObject* __WorldContext, struct FVector* Trace_Start, struct FVector* Trace_End)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Get Player View Trace");

	UOakCommonFunctions_C_Get_Player_View_Trace_Params params;
	params.Player_Character = Player_Character;
	params.Trace_Length = Trace_Length;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Trace_Start != nullptr)
		*Trace_Start = params.Trace_Start;
	if (Trace_End != nullptr)
		*Trace_End = params.Trace_End;
}


// Function OakCommonFunctions.OakCommonFunctions_C.Get Regeneration Rate
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max_Regen_Rate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Regen_Rate                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakCommonFunctions_C::STATIC_Get_Regeneration_Rate(class UObject* Context, float Max_Regen_Rate, class UObject* __WorldContext, float* Regen_Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Get Regeneration Rate");

	UOakCommonFunctions_C_Get_Regeneration_Rate_Params params;
	params.Context = Context;
	params.Max_Regen_Rate = Max_Regen_Rate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Regen_Rate != nullptr)
		*Regen_Rate = params.Regen_Rate;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
