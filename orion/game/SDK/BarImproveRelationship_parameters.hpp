#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x4 (0x4 - 0x0)
// Function BarImproveRelationship.BarImproveRelationship_C.RelationConfirmCallback
struct UBarImproveRelationship_C_RelationConfirmCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BarImproveRelationship.BarImproveRelationship_C.SetFooterVisibility
struct UBarImproveRelationship_C_SetFooterVisibility_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BarImproveRelationship.BarImproveRelationship_C.Start
struct UBarImproveRelationship_C_Start_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BarImproveRelationship.BarImproveRelationship_C.IsRunnning
struct UBarImproveRelationship_C_IsRunnning_Params
{
public:
	bool                                         Running;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function BarImproveRelationship.BarImproveRelationship_C.IsNpcTalking
struct UBarImproveRelationship_C_IsNpcTalking_Params
{
public:
	bool                                         IsTalking;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xCA (0xCA - 0x0)
// Function BarImproveRelationship.BarImproveRelationship_C.StartNpcTalk
struct UBarImproveRelationship_C_StartNpcTalk_Params
{
public:
	class FName                                  TalkLabel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Target_Actor;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BarImproveRelationship.BarImproveRelationship_C.ExecuteUbergraph_BarImproveRelationship
struct UBarImproveRelationship_C_ExecuteUbergraph_BarImproveRelationship_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


