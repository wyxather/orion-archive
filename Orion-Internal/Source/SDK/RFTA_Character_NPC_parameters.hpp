#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_NPC_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_NPC.Character_NPC_C.CanUseItem
struct ACharacter_NPC_C_CanUseItem_Params
{
	class APlayerControllerGunfire**                   PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Character_NPC.Character_NPC_C.FilterIncomingDamage
struct ACharacter_NPC_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_NPC.Character_NPC_C.IsBusy
struct ACharacter_NPC_C_IsBusy_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_NPC.Character_NPC_C.EvaluatePlayerNearby
struct ACharacter_NPC_C_EvaluatePlayerNearby_Params
{
};

// Function Character_NPC.Character_NPC_C.AddRunAway
struct ACharacter_NPC_C_AddRunAway_Params
{
};

// Function Character_NPC.Character_NPC_C.RemoveRunAway
struct ACharacter_NPC_C_RemoveRunAway_Params
{
};

// Function Character_NPC.Character_NPC_C.AddCower
struct ACharacter_NPC_C_AddCower_Params
{
};

// Function Character_NPC.Character_NPC_C.RemoveCower
struct ACharacter_NPC_C_RemoveCower_Params
{
};

// Function Character_NPC.Character_NPC_C.AddScared
struct ACharacter_NPC_C_AddScared_Params
{
};

// Function Character_NPC.Character_NPC_C.AddWounded
struct ACharacter_NPC_C_AddWounded_Params
{
};

// Function Character_NPC.Character_NPC_C.RemoveWounded
struct ACharacter_NPC_C_RemoveWounded_Params
{
};

// Function Character_NPC.Character_NPC_C.AddRunHome
struct ACharacter_NPC_C_AddRunHome_Params
{
};

// Function Character_NPC.Character_NPC_C.RemoveRunHome
struct ACharacter_NPC_C_RemoveRunHome_Params
{
};

// Function Character_NPC.Character_NPC_C.OnCollisionEnable
struct ACharacter_NPC_C_OnCollisionEnable_Params
{
};

// Function Character_NPC.Character_NPC_C.OnDisableCollision
struct ACharacter_NPC_C_OnDisableCollision_Params
{
};

// Function Character_NPC.Character_NPC_C.UI_Node_Wounded
struct ACharacter_NPC_C_UI_Node_Wounded_Params
{
};

// Function Character_NPC.Character_NPC_C.RemoveScared
struct ACharacter_NPC_C_RemoveScared_Params
{
};

// Function Character_NPC.Character_NPC_C.UI_Node_Default
struct ACharacter_NPC_C_UI_Node_Default_Params
{
};

// Function Character_NPC.Character_NPC_C.UseItem
struct ACharacter_NPC_C_UseItem_Params
{
	class APlayerControllerGunfire**                   PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function Character_NPC.Character_NPC_C.BndEvt__PlayerDetect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ACharacter_NPC_C_BndEvt__PlayerDetect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_NPC.Character_NPC_C.BndEvt__PlayerDetect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ACharacter_NPC_C_BndEvt__PlayerDetect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Character_NPC.Character_NPC_C.OnDead_Event_1
struct ACharacter_NPC_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_NPC.Character_NPC_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_51_InteractiveDelegate__DelegateSignature
struct ACharacter_NPC_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_51_InteractiveDelegate__DelegateSignature_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_NPC.Character_NPC_C.ReceiveBeginPlay
struct ACharacter_NPC_C_ReceiveBeginPlay_Params
{
};

// Function Character_NPC.Character_NPC_C.UINodePlacement
struct ACharacter_NPC_C_UINodePlacement_Params
{
};

// Function Character_NPC.Character_NPC_C.ExecuteUbergraph_Character_NPC
struct ACharacter_NPC_C_ExecuteUbergraph_Character_NPC_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
