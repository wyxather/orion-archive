#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LevelTravelStationObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LevelTravelStationObject.LevelTravelStationObject_C.IsInAnOverlappingVehicle
struct ALevelTravelStationObject_C_IsInAnOverlappingVehicle_Params
{
	class AOakCharacter_Player*                        PlayerChar;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerIsInOverlappingVehicle;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LevelTravelStationObject.LevelTravelStationObject_C.SetLevelNameTextRender
struct ALevelTravelStationObject_C_SetLevelNameTextRender_Params
{
	class UTravelStationData*                          TravelData;                                               // (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function LevelTravelStationObject.LevelTravelStationObject_C.UserConstructionScript
struct ALevelTravelStationObject_C_UserConstructionScript_Params
{
};

// Function LevelTravelStationObject.LevelTravelStationObject_C.BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_LevelTravelStationObject
struct ALevelTravelStationObject_C_BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_LevelTravelStationObject_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LevelTravelStationObject.LevelTravelStationObject_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_LevelTravelStationObject
struct ALevelTravelStationObject_C_BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_LevelTravelStationObject_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function LevelTravelStationObject.LevelTravelStationObject_C.BndEvt__InteractPromptFX_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_LevelTravelStationObject
struct ALevelTravelStationObject_C_BndEvt__InteractPromptFX_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_LevelTravelStationObject_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelTravelStationObject.LevelTravelStationObject_C.BndEvt__LevelTravelStation_K2Node_ComponentBoundEvent_0_LevelTravelOnDestinationForTextRenderChanged__DelegateSignature_LevelTravelStationObject
struct ALevelTravelStationObject_C_BndEvt__LevelTravelStation_K2Node_ComponentBoundEvent_0_LevelTravelOnDestinationForTextRenderChanged__DelegateSignature_LevelTravelStationObject_Params
{
	class ULevelTravelStationData*                     Destination;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelTravelStationObject.LevelTravelStationObject_C.ReceiveBeginPlay
struct ALevelTravelStationObject_C_ReceiveBeginPlay_Params
{
};

// Function LevelTravelStationObject.LevelTravelStationObject_C.__UserState_LevelTravel_1
struct ALevelTravelStationObject_C___UserState_LevelTravel_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelTravelStationObject.LevelTravelStationObject_C.__UserState_LevelTravel_2
struct ALevelTravelStationObject_C___UserState_LevelTravel_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelTravelStationObject.LevelTravelStationObject_C.SetLevelTravelVisibilityState
struct ALevelTravelStationObject_C_SetLevelTravelVisibilityState_Params
{
	TEnumAsByte<Enum_LevelTravelStationObject>         VisiblilityState;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelTravelStationObject.LevelTravelStationObject_C.ExecuteUbergraph_LevelTravelStationObject
struct ALevelTravelStationObject_C_ExecuteUbergraph_LevelTravelStationObject_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
