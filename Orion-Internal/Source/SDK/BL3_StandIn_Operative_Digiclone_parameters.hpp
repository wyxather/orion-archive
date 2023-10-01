#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Operative_Digiclone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.UserConstructionScript
struct AStandIn_Operative_Digiclone_C_UserConstructionScript_Params
{
};

// Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_Operative_Digiclone
struct AStandIn_Operative_Digiclone_C_BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_Operative_Digiclone_Params
{
	class UGbxCustomizationData*                       Customization;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.OnReceivedClonedWeaponAppearance
struct AStandIn_Operative_Digiclone_C_OnReceivedClonedWeaponAppearance_Params
{
	class USceneComponent**                            BaseComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.ExecuteUbergraph_StandIn_Operative_Digiclone
struct AStandIn_Operative_Digiclone_C_ExecuteUbergraph_StandIn_Operative_Digiclone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
