#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionScripted_MultiActor_HideShow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.UserConstructionScript
struct AIO_MissionScripted_MultiActor_HideShow_C_UserConstructionScript_Params
{
};

// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.PostBlendTimeline__FinishedFunc
struct AIO_MissionScripted_MultiActor_HideShow_C_PostBlendTimeline__FinishedFunc_Params
{
};

// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.PostBlendTimeline__UpdateFunc
struct AIO_MissionScripted_MultiActor_HideShow_C_PostBlendTimeline__UpdateFunc_Params
{
};

// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.ReceiveBeginPlay
struct AIO_MissionScripted_MultiActor_HideShow_C_ReceiveBeginPlay_Params
{
};

// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.Play_Feedback_Default
struct AIO_MissionScripted_MultiActor_HideShow_C_Play_Feedback_Default_Params
{
	bool*                                              FromLoad;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.Play_Feedback_ScriptedActionStarted
struct AIO_MissionScripted_MultiActor_HideShow_C_Play_Feedback_ScriptedActionStarted_Params
{
};

// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.Play_Feedback_ScriptedActionFinished
struct AIO_MissionScripted_MultiActor_HideShow_C_Play_Feedback_ScriptedActionFinished_Params
{
};

// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.ShowAll
struct AIO_MissionScripted_MultiActor_HideShow_C_ShowAll_Params
{
	TArray<class AActor*>                              ActorArray;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.HideAll
struct AIO_MissionScripted_MultiActor_HideShow_C_HideAll_Params
{
	TArray<class AActor*>                              ActorArray;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C.ExecuteUbergraph_IO_MissionScripted_MultiActor_HideShow
struct AIO_MissionScripted_MultiActor_HideShow_C_ExecuteUbergraph_IO_MissionScripted_MultiActor_HideShow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
