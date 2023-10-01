#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionUsable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_MissionUsable.IO_MissionUsable_C.SetLastUser
struct AIO_MissionUsable_C_SetLastUser_Params
{
	class AController*                                 Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionUsable.IO_MissionUsable_C.CheckForMissionSequenceFailsafe
struct AIO_MissionUsable_C_CheckForMissionSequenceFailsafe_Params
{
};

// Function IO_MissionUsable.IO_MissionUsable_C.UserConstructionScript
struct AIO_MissionUsable_C_UserConstructionScript_Params
{
};

// Function IO_MissionUsable.IO_MissionUsable_C.SetUsableState
struct AIO_MissionUsable_C_SetUsableState_Params
{
	TEnumAsByte<Enum_MissionUsableState>               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionUsable.IO_MissionUsable_C.BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionUsable
struct AIO_MissionUsable_C_BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionUsable_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IO_MissionUsable.IO_MissionUsable_C.PrimaryUse
struct AIO_MissionUsable_C_PrimaryUse_Params
{
};

// Function IO_MissionUsable.IO_MissionUsable_C.BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionUsable
struct AIO_MissionUsable_C_BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionUsable_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IO_MissionUsable.IO_MissionUsable_C.SecondaryUse
struct AIO_MissionUsable_C_SecondaryUse_Params
{
};

// Function IO_MissionUsable.IO_MissionUsable_C.Play_Feedback_Used
struct AIO_MissionUsable_C_Play_Feedback_Used_Params
{
};

// Function IO_MissionUsable.IO_MissionUsable_C.Play_Feedback_UsableDefault
struct AIO_MissionUsable_C_Play_Feedback_UsableDefault_Params
{
};

// Function IO_MissionUsable.IO_MissionUsable_C.Play_Feedback_InUse
struct AIO_MissionUsable_C_Play_Feedback_InUse_Params
{
};

// Function IO_MissionUsable.IO_MissionUsable_C.Play_Feedback_Usable
struct AIO_MissionUsable_C_Play_Feedback_Usable_Params
{
};

// Function IO_MissionUsable.IO_MissionUsable_C.__UserState_MissionUsableState_1
struct AIO_MissionUsable_C___UserState_MissionUsableState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionUsable.IO_MissionUsable_C.__UserState_MissionUsableState_2
struct AIO_MissionUsable_C___UserState_MissionUsableState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionUsable.IO_MissionUsable_C.__UserState_MissionUsableState_3
struct AIO_MissionUsable_C___UserState_MissionUsableState_3_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionUsable.IO_MissionUsable_C.BndEvt__GBXLevelSequenceToPlayOnUse_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature_IO_MissionUsable
struct AIO_MissionUsable_C_BndEvt__GBXLevelSequenceToPlayOnUse_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature_IO_MissionUsable_Params
{
};

// Function IO_MissionUsable.IO_MissionUsable_C.ExecuteUbergraph_IO_MissionUsable
struct AIO_MissionUsable_C_ExecuteUbergraph_IO_MissionUsable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionUsable.IO_MissionUsable_C.MissionUsable_SequenceFinished__DelegateSignature
struct AIO_MissionUsable_C_MissionUsable_SequenceFinished__DelegateSignature_Params
{
};

// Function IO_MissionUsable.IO_MissionUsable_C.MissionUsableIsUsable__DelegateSignature
struct AIO_MissionUsable_C_MissionUsableIsUsable__DelegateSignature_Params
{
};

// Function IO_MissionUsable.IO_MissionUsable_C.MissionUsableFinishedUse__DelegateSignature
struct AIO_MissionUsable_C_MissionUsableFinishedUse__DelegateSignature_Params
{
};

// Function IO_MissionUsable.IO_MissionUsable_C.MissionUsableStartedUse__DelegateSignature
struct AIO_MissionUsable_C_MissionUsableStartedUse__DelegateSignature_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
