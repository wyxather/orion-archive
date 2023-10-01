#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionGiver_Single_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_MissionGiver_Single.IO_MissionGiver_Single_C.UserConstructionScript
struct AIO_MissionGiver_Single_C_UserConstructionScript_Params
{
};

// Function IO_MissionGiver_Single.IO_MissionGiver_Single_C.BndEvt__OakMissionDirector_K2Node_ComponentBoundEvent_2_MissionDirectorEnabled__DelegateSignature_IO_MissionUsable_GrowingPains_WaterPurifier
struct AIO_MissionGiver_Single_C_BndEvt__OakMissionDirector_K2Node_ComponentBoundEvent_2_MissionDirectorEnabled__DelegateSignature_IO_MissionUsable_GrowingPains_WaterPurifier_Params
{
};

// Function IO_MissionGiver_Single.IO_MissionGiver_Single_C.BndEvt__OakMissionDirector_K2Node_ComponentBoundEvent_1_MissionDirectorDisabled__DelegateSignature_IO_MissionUsable_GrowingPains_WaterPurifier
struct AIO_MissionGiver_Single_C_BndEvt__OakMissionDirector_K2Node_ComponentBoundEvent_1_MissionDirectorDisabled__DelegateSignature_IO_MissionUsable_GrowingPains_WaterPurifier_Params
{
};

// Function IO_MissionGiver_Single.IO_MissionGiver_Single_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionGiver_Single
struct AIO_MissionGiver_Single_C_BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionGiver_Single_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IO_MissionGiver_Single.IO_MissionGiver_Single_C.__UserState_MissionGiverState_1
struct AIO_MissionGiver_Single_C___UserState_MissionGiverState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionGiver_Single.IO_MissionGiver_Single_C.__UserState_MissionGiverState_2
struct AIO_MissionGiver_Single_C___UserState_MissionGiverState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionGiver_Single.IO_MissionGiver_Single_C.Play_Feedback_MissionsAvailable
struct AIO_MissionGiver_Single_C_Play_Feedback_MissionsAvailable_Params
{
};

// Function IO_MissionGiver_Single.IO_MissionGiver_Single_C.Play_Feedback_NoMissionsAvailable
struct AIO_MissionGiver_Single_C_Play_Feedback_NoMissionsAvailable_Params
{
};

// Function IO_MissionGiver_Single.IO_MissionGiver_Single_C.ExecuteUbergraph_IO_MissionGiver_Single
struct AIO_MissionGiver_Single_C_ExecuteUbergraph_IO_MissionGiver_Single_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionGiver_Single.IO_MissionGiver_Single_C.MissionGiverSingle_PlacacrdTriggered__DelegateSignature
struct AIO_MissionGiver_Single_C_MissionGiverSingle_PlacacrdTriggered__DelegateSignature_Params
{
	bool                                               MissionAvailable;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOakMissionDirectorComponent*                MissionDirectorComponent;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AOakPlayerController*                        UserPlayerController;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
