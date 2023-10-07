#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x30 (0x30 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.CheckNotCoexistencePlacementLabel
struct ADBAccessManagerBP_C_CheckNotCoexistencePlacementLabel_Params
{
public:
	TArray<class FName>                          PlacementLabels;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Return;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x717 (0x717 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.IsfulfilledPlacementCondition
struct ADBAccessManagerBP_C_IsfulfilledPlacementCondition_Params
{
public:
	class FName                                  PlacementLabel;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.GetMenuJobIDList
struct ADBAccessManagerBP_C_GetMenuJobIDList_Params
{
public:
	TArray<int32>                                OutIDList;                                         // 0x0(0x10)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.GetMenuJobLabelList
struct ADBAccessManagerBP_C_GetMenuJobLabelList_Params
{
public:
	TArray<class FName>                          OutJobList;                                        // 0x0(0x10)(Parm, OutParm)
};

// 0x270 (0x270 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.Debug_GetEnemyLabelFromResourceLabel
struct ADBAccessManagerBP_C_Debug_GetEnemyLabelFromResourceLabel_Params
{
public:
	class FName                                  ResourceLabel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1072[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EnemyLabel;                                        // 0xC(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x223 (0x223 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.Debug_GetNPCFlag
struct ADBAccessManagerBP_C_Debug_GetNPCFlag_Params
{
public:
	class FName                                  EnemyLabel;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NPCFlag;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x158 (0x158 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.MakeItemDetailText
struct ADBAccessManagerBP_C_MakeItemDetailText_Params
{
public:
	struct FItemData                             ItemData;                                          // 0x0(0x120)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CharacterID;                                       // 0x120(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_107D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x128(0x18)(Parm, OutParm, ReturnParm)
};

// 0x19 (0x19 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertSupportAbilityIdToLabel
struct ADBAccessManagerBP_C_ConvertSupportAbilityIdToLabel_Params
{
public:
	int32                                        SuportAbilityId;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SuportAbilityLabel;                                // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x52 (0x52 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertLabelToSupportAbilityID
struct ADBAccessManagerBP_C_ConvertLabelToSupportAbilityID_Params
{
public:
	class FName                                  AbilityLabel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AbilityID;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBB (0xBB - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.SearchAbilitySetFromRestricWeapon
struct ADBAccessManagerBP_C_SearchAbilitySetFromRestricWeapon_Params
{
public:
	class FName                                  WeaponLabel;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilitySetLabel;                                   // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.GetItemDataForMenu
struct ADBAccessManagerBP_C_GetItemDataForMenu_Params
{
public:
	class FName                                  ItemLabel;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemDataForMenu                      Value;                                             // 0x8(0x18)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x79 (0x79 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertLabelToAbilitySetID
struct ADBAccessManagerBP_C_ConvertLabelToAbilitySetID_Params
{
public:
	class FName                                  AbilitySetLabel;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AbilitySetID;                                      // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x241 (0x241 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertUniqueIDToLabel
struct ADBAccessManagerBP_C_ConvertUniqueIDToLabel_Params
{
public:
	int32                                        NPCUniqID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NPCLabel;                                          // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertEncountTriggerIDToLabel
struct ADBAccessManagerBP_C_ConvertEncountTriggerIDToLabel_Params
{
public:
	int32                                        EncountTriggerId;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  EncountTriggerLabel;                               // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertLabelToAbilitySetID_OLD
struct ADBAccessManagerBP_C_ConvertLabelToAbilitySetID_OLD_Params
{
public:
	class FName                                  AbilitySetLabel;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AbilitySetID;                                      // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertAbilitySetIDToLabel
struct ADBAccessManagerBP_C_ConvertAbilitySetIDToLabel_Params
{
public:
	int32                                        AbilitySetID;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityLabel;                                      // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFind;                                            // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertSupporterIDToLabel
struct ADBAccessManagerBP_C_ConvertSupporterIDToLabel_Params
{
public:
	int32                                        SupporterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SupporterLabel;                                    // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91D (0x91D - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.PrepareDBAccess
struct ADBAccessManagerBP_C_PrepareDBAccess_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x223 (0x223 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertLabelToEnemyID
struct ADBAccessManagerBP_C_ConvertLabelToEnemyID_Params
{
public:
	class FName                                  Label;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EnemyID;                                           // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertEnemyIDToLabel
struct ADBAccessManagerBP_C_ConvertEnemyIDToLabel_Params
{
public:
	int32                                        EnemyID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  EnemyLabel;                                        // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x102 (0x102 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertLabelToAbilityID
struct ADBAccessManagerBP_C_ConvertLabelToAbilityID_Params
{
public:
	class FName                                  AbilityLabel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AbilityID;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertAbilityIDToLabel
struct ADBAccessManagerBP_C_ConvertAbilityIDToLabel_Params
{
public:
	int32                                        AbilityID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityLabel;                                      // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFind;                                            // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function DBAccessManagerBP.DBAccessManagerBP_C.ExecuteUbergraph_DBAccessManagerBP
struct ADBAccessManagerBP_C_ExecuteUbergraph_DBAccessManagerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


