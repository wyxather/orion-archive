#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_EridianWriting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_EridianWriting.IO_EridianWriting_C.ChallengeCompleted
struct AIO_EridianWriting_C_ChallengeCompleted_Params
{
	class UChallengesComponent*                        ChallengeComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ChallengeClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_EridianWriting.IO_EridianWriting_C.EvaluateState
struct AIO_EridianWriting_C_EvaluateState_Params
{
};

// Function IO_EridianWriting.IO_EridianWriting_C.UserConstructionScript
struct AIO_EridianWriting_C_UserConstructionScript_Params
{
};

// Function IO_EridianWriting.IO_EridianWriting_C.Timeline_0__FinishedFunc
struct AIO_EridianWriting_C_Timeline_0__FinishedFunc_Params
{
};

// Function IO_EridianWriting.IO_EridianWriting_C.Timeline_0__UpdateFunc
struct AIO_EridianWriting_C_Timeline_0__UpdateFunc_Params
{
};

// Function IO_EridianWriting.IO_EridianWriting_C.OnAnimEnd_06EA3FDA411DCB031E1BBF9C1F25FFA5
struct AIO_EridianWriting_C_OnAnimEnd_06EA3FDA411DCB031E1BBF9C1F25FFA5_Params
{
};

// Function IO_EridianWriting.IO_EridianWriting_C.OnEnd_06EA3FDA411DCB031E1BBF9C1F25FFA5
struct AIO_EridianWriting_C_OnEnd_06EA3FDA411DCB031E1BBF9C1F25FFA5_Params
{
	EGbxActionEndState                                 EndState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_EridianWriting.IO_EridianWriting_C.__UserState_EridianWritingState_1
struct AIO_EridianWriting_C___UserState_EridianWritingState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_EridianWriting.IO_EridianWriting_C.__UserState_EridianWritingState_2
struct AIO_EridianWriting_C___UserState_EridianWritingState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_EridianWriting.IO_EridianWriting_C.__UserState_EridianWritingState_3
struct AIO_EridianWriting_C___UserState_EridianWritingState_3_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_EridianWriting.IO_EridianWriting_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_IO_EridianWriting_UNIX1551725399
struct AIO_EridianWriting_C_BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_IO_EridianWriting_UNIX1551725399_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IO_EridianWriting.IO_EridianWriting_C.ReceiveBeginPlay
struct AIO_EridianWriting_C_ReceiveBeginPlay_Params
{
};

// Function IO_EridianWriting.IO_EridianWriting_C.EchoLogFinished
struct AIO_EridianWriting_C_EchoLogFinished_Params
{
};

// Function IO_EridianWriting.IO_EridianWriting_C.BndEvt__Usable1_K2Node_ComponentBoundEvent_3_UsableUsedOnChannelSignature__DelegateSignature_IO_EridianWriting
struct AIO_EridianWriting_C_BndEvt__Usable1_K2Node_ComponentBoundEvent_3_UsableUsedOnChannelSignature__DelegateSignature_IO_EridianWriting_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IO_EridianWriting.IO_EridianWriting_C.ExecuteUbergraph_IO_EridianWriting
struct AIO_EridianWriting_C_ExecuteUbergraph_IO_EridianWriting_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_EridianWriting.IO_EridianWriting_C.WritingRevealed__DelegateSignature
struct AIO_EridianWriting_C_WritingRevealed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
