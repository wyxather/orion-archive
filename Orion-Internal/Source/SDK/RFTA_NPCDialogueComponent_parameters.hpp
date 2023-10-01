#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_NPCDialogueComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NPCDialogueComponent.NPCDialogueComponent_C.ExitIfHostile
struct UNPCDialogueComponent_C_ExitIfHostile_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NPCDialogueComponent.NPCDialogueComponent_C.ExitOnCombat
struct UNPCDialogueComponent_C_ExitOnCombat_Params
{
};

// Function NPCDialogueComponent.NPCDialogueComponent_C.OnInteractive
struct UNPCDialogueComponent_C_OnInteractive_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NPCDialogueComponent.NPCDialogueComponent_C.OnNotifyTakeDamage
struct UNPCDialogueComponent_C_OnNotifyTakeDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function NPCDialogueComponent.NPCDialogueComponent_C.OnTargetChanged_Event_1
struct UNPCDialogueComponent_C_OnTargetChanged_Event_1_Params
{
	class AActor**                                     NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NPCDialogueComponent.NPCDialogueComponent_C.OnTargeted_Event_1
struct UNPCDialogueComponent_C_OnTargeted_Event_1_Params
{
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NPCDialogueComponent.NPCDialogueComponent_C.OnDialogBegin_Event_1
struct UNPCDialogueComponent_C_OnDialogBegin_Event_1_Params
{
};

// Function NPCDialogueComponent.NPCDialogueComponent_C.OnDialogEnd_Event_1
struct UNPCDialogueComponent_C_OnDialogEnd_Event_1_Params
{
};

// Function NPCDialogueComponent.NPCDialogueComponent_C.OnTargeted_Event_2
struct UNPCDialogueComponent_C_OnTargeted_Event_2_Params
{
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NPCDialogueComponent.NPCDialogueComponent_C.ReceiveBeginPlay
struct UNPCDialogueComponent_C_ReceiveBeginPlay_Params
{
};

// Function NPCDialogueComponent.NPCDialogueComponent_C.ExecuteUbergraph_NPCDialogueComponent
struct UNPCDialogueComponent_C_ExecuteUbergraph_NPCDialogueComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
