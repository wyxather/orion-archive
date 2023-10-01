#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_PetSkag_HornKnockupTest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.OnStop
struct UControlledMove_PetSkag_HornKnockupTest_C_OnStop_Params
{
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.OnServerStart
struct UControlledMove_PetSkag_HornKnockupTest_C_OnServerStart_Params
{
	float*                                             MoveDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.ExecuteUbergraph_ControlledMove_PetSkag_HornKnockupTest
struct UControlledMove_PetSkag_HornKnockupTest_C_ExecuteUbergraph_ControlledMove_PetSkag_HornKnockupTest_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
