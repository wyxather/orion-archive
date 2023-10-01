#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VendingMachine_Ammo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VendingMachine_Ammo.BP_VendingMachine_Ammo_C.RefillAmmo
struct ABP_VendingMachine_Ammo_C_RefillAmmo_Params
{
	class AOakCharacter*                               ContextSource;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           Max;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           Current;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachine_Ammo.BP_VendingMachine_Ammo_C.UserConstructionScript
struct ABP_VendingMachine_Ammo_C_UserConstructionScript_Params
{
};

// Function BP_VendingMachine_Ammo.BP_VendingMachine_Ammo_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_VendingMachine_Ammo
struct ABP_VendingMachine_Ammo_C_BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_VendingMachine_Ammo_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_VendingMachine_Ammo.BP_VendingMachine_Ammo_C.ExecuteUbergraph_BP_VendingMachine_Ammo
struct ABP_VendingMachine_Ammo_C_ExecuteUbergraph_BP_VendingMachine_Ammo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
