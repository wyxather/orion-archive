#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Bottle_Beer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PD_Bottle_Beer.PD_Bottle_Beer_C.UserConstructionScript
struct APD_Bottle_Beer_C_UserConstructionScript_Params
{
};

// Function PD_Bottle_Beer.PD_Bottle_Beer_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_5_ComponentFractureSignature__DelegateSignature_PD_Bottle_Beer
struct APD_Bottle_Beer_C_BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_5_ComponentFractureSignature__DelegateSignature_PD_Bottle_Beer_Params
{
	struct FVector                                     HitPoint;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PD_Bottle_Beer.PD_Bottle_Beer_C.ExecuteUbergraph_PD_Bottle_Beer
struct APD_Bottle_Beer_C_ExecuteUbergraph_PD_Bottle_Beer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
