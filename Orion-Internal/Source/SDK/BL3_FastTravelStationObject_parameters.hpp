#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_FastTravelStationObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FastTravelStationObject.FastTravelStationObject_C.SetLevelNameText
struct AFastTravelStationObject_C_SetLevelNameText_Params
{
	class UTravelStationData*                          Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FastTravelStationObject.FastTravelStationObject_C.UserConstructionScript
struct AFastTravelStationObject_C_UserConstructionScript_Params
{
};

// Function FastTravelStationObject.FastTravelStationObject_C.ReceiveBeginPlay
struct AFastTravelStationObject_C_ReceiveBeginPlay_Params
{
};

// Function FastTravelStationObject.FastTravelStationObject_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_FastTravelStationObject
struct AFastTravelStationObject_C_BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_FastTravelStationObject_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FastTravelStationObject.FastTravelStationObject_C.BndEvt__ActivationArea_K2Node_ComponentBoundEvent_0_AreaPlayerEvent__DelegateSignature_FastTravelStationObject
struct AFastTravelStationObject_C_BndEvt__ActivationArea_K2Node_ComponentBoundEvent_0_AreaPlayerEvent__DelegateSignature_FastTravelStationObject_Params
{
	class AGbxPlayerController*                        Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FastTravelStationObject.FastTravelStationObject_C.BndEvt__ActivationArea_K2Node_ComponentBoundEvent_2_AreaPlayerEvent__DelegateSignature_FastTravelStationObject
struct AFastTravelStationObject_C_BndEvt__ActivationArea_K2Node_ComponentBoundEvent_2_AreaPlayerEvent__DelegateSignature_FastTravelStationObject_Params
{
	class AGbxPlayerController*                        Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FastTravelStationObject.FastTravelStationObject_C.OnEnabled
struct AFastTravelStationObject_C_OnEnabled_Params
{
};

// Function FastTravelStationObject.FastTravelStationObject_C.OnDisabled
struct AFastTravelStationObject_C_OnDisabled_Params
{
};

// Function FastTravelStationObject.FastTravelStationObject_C.OnDisabling
struct AFastTravelStationObject_C_OnDisabling_Params
{
};

// Function FastTravelStationObject.FastTravelStationObject_C.ExecuteUbergraph_FastTravelStationObject
struct AFastTravelStationObject_C_ExecuteUbergraph_FastTravelStationObject_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
