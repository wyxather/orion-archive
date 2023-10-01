#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ResurrectTravelStationObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.ActivateResurrectStation
struct AResurrectTravelStationObject_C_ActivateResurrectStation_Params
{
	class AActor*                                      ActivatingActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.UserConstructionScript
struct AResurrectTravelStationObject_C_UserConstructionScript_Params
{
};

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_5_TravelStationResurrectChanged__DelegateSignature_ResurrectTravelStationObject
struct AResurrectTravelStationObject_C_BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_5_TravelStationResurrectChanged__DelegateSignature_ResurrectTravelStationObject_Params
{
	class AActor*                                      OtherStation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.FX_Open
struct AResurrectTravelStationObject_C_FX_Open_Params
{
};

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.FX_Close
struct AResurrectTravelStationObject_C_FX_Close_Params
{
};

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.TraveledTo
struct AResurrectTravelStationObject_C_TraveledTo_Params
{
	class AActor*                                      SpawnedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_4_TravelStationResurrectChanged__DelegateSignature_ResurrectTravelStationObject
struct AResurrectTravelStationObject_C_BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_4_TravelStationResurrectChanged__DelegateSignature_ResurrectTravelStationObject_Params
{
	class AActor*                                      OtherStation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.ReceiveBeginPlay
struct AResurrectTravelStationObject_C_ReceiveBeginPlay_Params
{
};

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.OnDisabling
struct AResurrectTravelStationObject_C_OnDisabling_Params
{
};

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.OnEnabling
struct AResurrectTravelStationObject_C_OnEnabling_Params
{
};

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_0_TravelStationCharacterResurrected__DelegateSignature_ResurrectTravelStationObject
struct AResurrectTravelStationObject_C_BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_0_TravelStationCharacterResurrected__DelegateSignature_ResurrectTravelStationObject_Params
{
	class APawn*                                       ResurrectedCharacter;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.OnEnabled
struct AResurrectTravelStationObject_C_OnEnabled_Params
{
};

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.OnDisabled
struct AResurrectTravelStationObject_C_OnDisabled_Params
{
};

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.ExecuteUbergraph_ResurrectTravelStationObject
struct AResurrectTravelStationObject_C_ExecuteUbergraph_ResurrectTravelStationObject_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.PlayerSpawned__DelegateSignature
struct AResurrectTravelStationObject_C_PlayerSpawned__DelegateSignature_Params
{
	class AOakCharacter_Player*                        Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
