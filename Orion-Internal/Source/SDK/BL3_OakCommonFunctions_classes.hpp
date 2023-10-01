#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakCommonFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakCommonFunctions.OakCommonFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UOakCommonFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakCommonFunctions.OakCommonFunctions_C");
		return ptr;
	}


	void STATIC_Bitmask_EnumArrayToInt(class UObject* __WorldContext, TArray<unsigned char>* Enum, int* Bitmask);
	void STATIC_Bitmask_EnumToInt(unsigned char Enum, class UObject* __WorldContext, int* Bitmask);
	void STATIC_Bitmask_RandomEnum(int BitmaskInt, class UObject* __WorldContext, unsigned char* RandomEnum);
	void STATIC_CheckChallengeArrayStatus(class APlayerController* Chracter_Controller, class UObject* __WorldContext, TArray<class UClass*>* Challenge_Array, TArray<class UClass*>* Completed_Challenges_Array);
	void STATIC_CheckChallengeStatus(class APlayerController* CharacterController, class UClass* Challenge, class UObject* __WorldContext, bool* Complete);
	void STATIC_ChallengeComplete_AllPlayers(class UClass* Challenge, class UObject* __WorldContext);
	void STATIC_ChallengeActivate_AllPlayers(class UClass* Challenge, class UObject* __WorldContext);
	void STATIC_ChallengeComplete(class AOakCharacter_Player* Character, class UClass* Challenge, class UObject* __WorldContext);
	void STATIC_ChallengeActivate(class AOakCharacter_Player* Character, class UClass* Challenge, class UObject* __WorldContext);
	void STATIC_Cosh(float A, class UObject* __WorldContext, float* _result);
	void STATIC_SetMissionDoorState(const struct FMissionObjectiveReference& ObjectiveRef, class UObject* Context, class UObject* __WorldContext);
	void STATIC_SetMissionSwitchState(const struct FMissionObjectiveReference& ObjectiveRef, class UObject* Context, class UObject* __WorldContext);
	void STATIC_SetDebugConsoleCommands(class APlayerController* PlayerController, bool Stat_Unit, bool Stat_FPS, bool ShowDebug_Missions, bool ToggleAllScreenMessages, bool BalanceMe, bool NoTarget, bool God, bool Demigod, bool Loaded, bool AllAmmo, class UObject* __WorldContext);
	void STATIC_MissionTempHudText(class UObject* WorldContextObject, const struct FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, class UObject* __WorldContext);
	void STATIC_MissionTempSpeakText(class UObject* WorldContextObject, class UClass* ActorClass, const struct FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer, class UObject* __WorldContext);
	void STATIC_DisplayErrorMessage(class UObject* Context, const class FString& ErrorMessage, class UObject* __WorldContext);
	void STATIC_Compare_Damage_Source(class UDamageSource* Damage_Source_1, class UClass* Damage_Source_2, class UObject* __WorldContext, bool* Equal, bool* Not_Equal);
	void STATIC_Make_Transforms_Around_Cone(const struct FVector& Cone_Axis, const struct FVector& Cone_Location, float Cone_Angle_Min, float Cone_Angle_Max, float Rotation_Angle_Divergence, float Sweep_Angle, float Distance_From_Cone_Center, int Number_Of_Transforms, class UObject* __WorldContext, TArray<struct FTransform>* Out_Transforms);
	void STATIC_Get_Player_View_Trace(class AOakCharacter_Player* Player_Character, float Trace_Length, class UObject* __WorldContext, struct FVector* Trace_Start, struct FVector* Trace_End);
	void STATIC_Get_Regeneration_Rate(class UObject* Context, float Max_Regen_Rate, class UObject* __WorldContext, float* Regen_Rate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
