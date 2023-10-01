#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionScripted_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_MissionScripted.IO_MissionScripted_C.CheckForMissionSequenceFailsafe
struct AIO_MissionScripted_C_CheckForMissionSequenceFailsafe_Params
{
};

// Function IO_MissionScripted.IO_MissionScripted_C.SetMissionScriptedState
struct AIO_MissionScripted_C_SetMissionScriptedState_Params
{
	TEnumAsByte<Enum_MissionScriptedState>             State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionScripted.IO_MissionScripted_C.UserConstructionScript
struct AIO_MissionScripted_C_UserConstructionScript_Params
{
};

// Function IO_MissionScripted.IO_MissionScripted_C.Play_Feedback_Default
struct AIO_MissionScripted_C_Play_Feedback_Default_Params
{
	bool                                               FromLoad;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionScripted.IO_MissionScripted_C.Play_Feedback_ScriptedActionStarted
struct AIO_MissionScripted_C_Play_Feedback_ScriptedActionStarted_Params
{
};

// Function IO_MissionScripted.IO_MissionScripted_C.Play_Feedback_ScriptedActionFinished
struct AIO_MissionScripted_C_Play_Feedback_ScriptedActionFinished_Params
{
};

// Function IO_MissionScripted.IO_MissionScripted_C.__UserState_MissionScriptedState_1
struct AIO_MissionScripted_C___UserState_MissionScriptedState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionScripted.IO_MissionScripted_C.__UserState_MissionScriptedState_2
struct AIO_MissionScripted_C___UserState_MissionScriptedState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionScripted.IO_MissionScripted_C.BndEvt__LevelSequenceToPlay_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature_IO_MissionScripted
struct AIO_MissionScripted_C_BndEvt__LevelSequenceToPlay_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature_IO_MissionScripted_Params
{
};

// Function IO_MissionScripted.IO_MissionScripted_C.ExecuteUbergraph_IO_MissionScripted
struct AIO_MissionScripted_C_ExecuteUbergraph_IO_MissionScripted_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionScripted.IO_MissionScripted_C.MissionScripted_SequenceFinished__DelegateSignature
struct AIO_MissionScripted_C_MissionScripted_SequenceFinished__DelegateSignature_Params
{
};

// Function IO_MissionScripted.IO_MissionScripted_C.MissionScripted_ScriptedActionStarted__DelegateSignature
struct AIO_MissionScripted_C_MissionScripted_ScriptedActionStarted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
