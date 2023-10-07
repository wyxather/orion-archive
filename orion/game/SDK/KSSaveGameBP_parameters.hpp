#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x458 (0x458 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.CheckPartyEquipmentAilmentEnable
struct UKSSaveGameBP_C_CheckPartyEquipmentAilmentEnable_Params
{
public:
	enum class EAILMENT_TYPE                     Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFound;                                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D01[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAilment                              Ailment;                                           // 0x8(0x49)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_D02[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAilmentHandler                       AilmentHandler;                                    // 0x58(0x14)(Parm, OutParm, NoDestructor)
};

// 0x79 (0x79 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.AddParticipationOrderCharacter
struct UKSSaveGameBP_C_AddParticipationOrderCharacter_Params
{
public:
	enum class EPlayableCharacterID              JoinCharaID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15B (0x15B - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetCharacterFixedEquipment
struct UKSSaveGameBP_C_SetCharacterFixedEquipment_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEQUIPMENT_PART                   Part;                                              // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFixed;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5C (0x5C - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetPartyMember
struct UKSSaveGameBP_C_GetPartyMember_Params
{
public:
	TArray<struct FSavePlayerCharacterData>      PartyMemberData;                                   // 0x0(0x10)(Parm, OutParm)
};

// 0x201 (0x201 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.Set Character POT
struct UKSSaveGameBP_C_Set_Character_POT_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        POT;                                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA2 (0xA2 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetPlayerExp
struct UKSSaveGameBP_C_GetPlayerExp_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NextExp;                                           // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalExp;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.CheckAlreadyLearned
struct UKSSaveGameBP_C_CheckAlreadyLearned_Params
{
public:
	int32                                        CheckID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAlreadyLearned;                                  // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x32 (0x32 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.IsLearnAbilityFull
struct UKSSaveGameBP_C_IsLearnAbilityFull_Params
{
public:
	bool                                         IsFull;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D14[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EmptyIndex;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.DeleteFollowNpc
struct UKSSaveGameBP_C_DeleteFollowNpc_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDelete;                                          // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetClearedMainScenarioDataMax
struct UKSSaveGameBP_C_GetClearedMainScenarioDataMax_Params
{
public:
	int32                                        DataMax;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x131 (0x131 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetBattleReplayData
struct UKSSaveGameBP_C_SetBattleReplayData_Params
{
public:
	struct FBattleReplayData                     ReplayData;                                        // 0x0(0x128)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EEndRollSegmentSet                EndRollSegment;                                    // 0x128(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x135 (0x135 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetBattleReplayData
struct UKSSaveGameBP_C_GetBattleReplayData_Params
{
public:
	enum class EEndRollSegmentSet                EndRollSegment;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D1F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBattleReplayData                     ReplayData;                                        // 0x8(0x128)(Parm, OutParm)
};

// 0x2A (0x2A - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SubSupportLimit
struct UKSSaveGameBP_C_SubSupportLimit_Params
{
public:
	int32                                        SubValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayableCharacterID              CharacterID;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LimitOver;                                         // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetNPCHearFlag
struct UKSSaveGameBP_C_SetNPCHearFlag_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HearFlag;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x54 (0x54 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.DelSubParty
struct UKSSaveGameBP_C_DelSubParty_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7A (0x7A - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.DelMainParty
struct UKSSaveGameBP_C_DelMainParty_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.LeaveCharacterToParty
struct UKSSaveGameBP_C_LeaveCharacterToParty_Params
{
public:
	enum class EPlayableCharacterID              CharaID;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x77 (0x77 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.JoinGuestCharacterToParty
struct UKSSaveGameBP_C_JoinGuestCharacterToParty_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xAC (0xAC - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.CreatePartySet1And2
struct UKSSaveGameBP_C_CreatePartySet1And2_Params
{
public:
	TArray<int32>                                Set1_Main;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                Set1_Sub;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                Set2_Main;                                         // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                Set2_Sub;                                          // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x99 (0x99 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.IsMaxMapChangeHistory
struct UKSSaveGameBP_C_IsMaxMapChangeHistory_Params
{
public:
	bool                                         IsMax;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x133 (0x133 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetParameterGrow
struct UKSSaveGameBP_C_GetParameterGrow_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterParam                       GrowParam;                                         // 0x4(0x34)(Parm, OutParm, NoDestructor)
};

// 0x229 (0x229 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetParameterGrow
struct UKSSaveGameBP_C_SetParameterGrow_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterParam                       GrowParam;                                         // 0x4(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetPreparationKnown
struct UKSSaveGameBP_C_SetPreparationKnown_Params
{
public:
	int32                                        PreparationID;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetPreparationKnown
struct UKSSaveGameBP_C_GetPreparationKnown_Params
{
public:
	int32                                        PreparationID;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Known;                                             // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E (0x1E - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.CheckPartySupportAilmentEnable
struct UKSSaveGameBP_C_CheckPartySupportAilmentEnable_Params
{
public:
	enum class ESUPPORT_AILMENT_TYPE             Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetLastBgmID
struct UKSSaveGameBP_C_GetLastBgmID_Params
{
public:
	int32                                        LastBgmID;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetFirstSelectCharacterID
struct UKSSaveGameBP_C_SetFirstSelectCharacterID_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20B (0x20B - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetSupportAbility
struct UKSSaveGameBP_C_SetSupportAbility_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AbilityID;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Slot;                                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.IsCompletedMainMission_DEPRECATED
struct UKSSaveGameBP_C_IsCompletedMainMission_DEPRECATED_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCompleted;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.MakeInitializedArrayOfBool
struct UKSSaveGameBP_C_MakeInitializedArrayOfBool_Params
{
public:
	int32                                        Size;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InitValue;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D3D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 BoolArray;                                         // 0x8(0x10)(Parm, OutParm)
};

// 0x30 (0x30 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetSubMemberCharacterIDs
struct UKSSaveGameBP_C_GetSubMemberCharacterIDs_Params
{
public:
	TArray<int32>                                CharacterID;                                       // 0x0(0x10)(Parm, OutParm)
};

// 0x40 (0x40 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetMainMemberCharacterIDs
struct UKSSaveGameBP_C_GetMainMemberCharacterIDs_Params
{
public:
	TArray<int32>                                CharacterID;                                       // 0x0(0x10)(Parm, OutParm)
};

// 0x1C (0x1C - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.DeleteFollowNPCWithUniqueID
struct UKSSaveGameBP_C_DeleteFollowNPCWithUniqueID_Params
{
public:
	int32                                        UniqueId;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDelete;                                          // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x163 (0x163 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetCharacterEquipmentID
struct UKSSaveGameBP_C_SetCharacterEquipmentID_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEQUIPMENT_PART                   Part;                                              // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D53[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EquipmentID;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetSubMemberIDs_DEPRECATED
struct UKSSaveGameBP_C_GetSubMemberIDs_DEPRECATED_Params
{
public:
	TArray<int32>                                SubMemberID;                                       // 0x0(0x10)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.ConvertLabelToItemId
struct UKSSaveGameBP_C_ConvertLabelToItemId_Params
{
public:
	class FName                                  ItemLabel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemId;                                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetVisitedAllMap
struct UKSSaveGameBP_C_SetVisitedAllMap_Params
{
public:
	bool                                         SetBit;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetMainMemberIDs_DEPRECATED
struct UKSSaveGameBP_C_GetMainMemberIDs_DEPRECATED_Params
{
public:
	TArray<int32>                                MainMemberID;                                      // 0x0(0x10)(Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SubPlayerMoney
struct UKSSaveGameBP_C_SubPlayerMoney_Params
{
public:
	int32                                        Money;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.AddPlayerMoney
struct UKSSaveGameBP_C_AddPlayerMoney_Params
{
public:
	int32                                        Money;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetSubMember_DEPRECATED
struct UKSSaveGameBP_C_GetSubMember_DEPRECATED_Params
{
public:
	TArray<struct FSavePlayerCharacterData>      BattleMemberData;                                  // 0x0(0x10)(Parm, OutParm)
};

// 0x30 (0x30 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetBattleMember_DEPRECATED
struct UKSSaveGameBP_C_GetBattleMember_DEPRECATED_Params
{
public:
	TArray<struct FSavePlayerCharacterData>      BattleMemberData;                                  // 0x0(0x10)(Parm, OutParm)
};

// 0x103 (0x103 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetJobPoint
struct UKSSaveGameBP_C_SetJobPoint_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        JobPoint;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.MakeInitializedArrayOfInt
struct UKSSaveGameBP_C_MakeInitializedArrayOfInt_Params
{
public:
	int32                                        Size;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InitValue;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Array;                                             // 0x8(0x10)(Parm, OutParm)
};

// 0x201 (0x201 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetCharacterMP
struct UKSSaveGameBP_C_SetCharacterMP_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MP;                                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F0 (0x1F0 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetCharacterData
struct UKSSaveGameBP_C_GetCharacterData_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D59[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x8(0xF0)(Parm, OutParm)
};

// 0xA9 (0xA9 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetNPCPurchasedItem
struct UKSSaveGameBP_C_SetNPCPurchasedItem_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PurchaseIndex;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Flag;                                              // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D5F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PurchaseRestock;                                   // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        UpdateIndex;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x201 (0x201 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetCharacterHP
struct UKSSaveGameBP_C_SetCharacterHP_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HP;                                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x201 (0x201 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetCharacterJob
struct UKSSaveGameBP_C_SetCharacterJob_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        JobID;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetBackpackItemList
struct UKSSaveGameBP_C_SetBackpackItemList_Params
{
public:
	TArray<struct FSaveBackPackItem>             ItemList;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetBackpackItemList
struct UKSSaveGameBP_C_GetBackpackItemList_Params
{
public:
	TArray<struct FSaveBackPackItem>             Player_Backpack_Item_List;                         // 0x0(0x10)(Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.GetPlayerMoney_DEPRECATED
struct UKSSaveGameBP_C_GetPlayerMoney_DEPRECATED_Params
{
public:
	int32                                        PlayerMoney;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSSaveGameBP.KSSaveGameBP_C.SetPlayerMoney_DEPRECATED
struct UKSSaveGameBP_C_SetPlayerMoney_DEPRECATED_Params
{
public:
	int32                                        SetValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


