#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_Challenge_Crew_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.PlayVO
struct UALI_Challenge_Crew_C_PlayVO_Params
{
	struct FDialogTimeSlotReference                    Dialog;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      CompletedPlayer;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDialogConversation                         Conversation;                                             // (Parm, OutParm)
};

// Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.ShowTutorialPopup
struct UALI_Challenge_Crew_C_ShowTutorialPopup_Params
{
	class UGameInstance*                               GameInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOakPlayerController*                        TargetPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.CompletedChallenge
struct UALI_Challenge_Crew_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.ExecuteUbergraph_ALI_Challenge_Crew
struct UALI_Challenge_Crew_C_ExecuteUbergraph_ALI_Challenge_Crew_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
