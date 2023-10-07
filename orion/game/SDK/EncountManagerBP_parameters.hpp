#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xC68 (0xC68 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_GetEncountInfo
struct AEncountManagerBP_C_Debug_GetEncountInfo_Params
{
public:
	class FString                                OutDebugInfo;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GeRareEnemyParameter
struct AEncountManagerBP_C_GeRareEnemyParameter_Params
{
public:
	struct FRareEnemyParam                       CRareCatlinParam;                                  // 0x0(0x14)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRareEnemyParam                       CRareOctlinParam;                                  // 0x14(0x14)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EAreaID                           EArea;                                             // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x29(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x162 (0x162 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetCurrentEncountVolume
struct AEncountManagerBP_C_GetCurrentEncountVolume_Params
{
public:
	struct FEncountTriggerData                   ChkEncTrg;                                         // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  EncountVolumeName;                                 // 0x58(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EncountVolumeDecreaseValue;                        // 0x60(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1262[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEncountVolume                        EncountVolumeData;                                 // 0x68(0x60)(Parm, OutParm)
};

// 0x20 (0x20 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_ScreenShot
struct AEncountManagerBP_C_Debug_ScreenShot_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.StartEightBattle
struct AEncountManagerBP_C_StartEightBattle_Params
{
public:
	class FName                                  EnemyGroupID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayEventAfterBattle;                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1264[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NBattleMapIndex;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EPlayableCharacterID>      MainParty;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<enum class EPlayableCharacterID>      SubParty;                                          // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_SetBattleMode
struct AEncountManagerBP_C_Debug_SetBattleMode_Params
{
public:
	enum class EBATTLE_ENCOUNT_TYPE              EBattleMode;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.StartPreparationBattle
struct AEncountManagerBP_C_StartPreparationBattle_Params
{
public:
	class FName                                  EnemyGroupID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayEventAfterBattle;                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1265[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NBattleMapIndex;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xE (0xE - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_SetEightBattle
struct AEncountManagerBP_C_Debug_SetEightBattle_Params
{
public:
	int32                                        PartyLevel;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LevelRange;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableEightBattle;                                // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetSubPartyParam_Old
struct AEncountManagerBP_C_GetSubPartyParam_Old_Params
{
public:
	TArray<struct FPartyCharacterData>           SubPartyData;                                      // 0x0(0x10)(Parm, OutParm)
};

// 0x58 (0x58 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetCurrentEncountTrigger
struct AEncountManagerBP_C_GetCurrentEncountTrigger_Params
{
public:
	struct FEncountTriggerData                   ReturnValue;                                       // 0x0(0x58)(Parm, OutParm, ReturnParm)
};

// 0x95 (0x95 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetSupportAbilityInvocationValue
struct AEncountManagerBP_C_GetSupportAbilityInvocationValue_Params
{
public:
	enum class ESUPPORT_AILMENT_TYPE             AilmentType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1266[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InvocationValue;                                   // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1290 (0x1290 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_CreateRandomPartyData_OLD
struct AEncountManagerBP_C_Debug_CreateRandomPartyData_OLD_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PartyLevel;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseExtraJob;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1268[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPartyCharacterData                   ReturnValue;                                       // 0x10(0x3D4)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// 0x739 (0x739 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_CreateRandomPartyData
struct AEncountManagerBP_C_Debug_CreateRandomPartyData_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PartyLevel;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseExtraJob;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2B0 (0x2B0 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_SetBattleRandomParty
struct AEncountManagerBP_C_Debug_SetBattleRandomParty_Params
{
public:
	int32                                        PartyLevel;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LevelRange;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PartyNum;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseExtraJob;                                       // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseRandomParty;                                    // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0xE(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.SequenceRequestCallback
struct AEncountManagerBP_C_SequenceRequestCallback_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_GetActiveEncountVolumeLabel
struct AEncountManagerBP_C_Debug_GetActiveEncountVolumeLabel_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8B (0x8B - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.RestoreEncountVolumeFromSaveData
struct AEncountManagerBP_C_RestoreEncountVolumeFromSaveData_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3A (0x3A - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_StartViewerBattle
struct AEncountManagerBP_C_Debug_StartViewerBattle_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_SetBattleViewerSituation
struct AEncountManagerBP_C_Debug_SetBattleViewerSituation_Params
{
public:
	enum class EBATTLE_START_TYPE                FixedSituation;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseFixedSituation;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_SetBattleViewerParty
struct AEncountManagerBP_C_Debug_SetBattleViewerParty_Params
{
public:
	TArray<enum class EPlayableCharacterID>      PartyList;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         UseBattleViewerParty;                              // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_SetBattleViewerMode
struct AEncountManagerBP_C_Debug_SetBattleViewerMode_Params
{
public:
	enum class EBATTLE_VIEWER_MODE               ViewerMode;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_SetBattleViewerMap
struct AEncountManagerBP_C_Debug_SetBattleViewerMap_Params
{
public:
	class FName                                  ViewerMapID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWaterSide;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseBattleViewerMap;                                // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x84 (0x84 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.BattleStartExec
struct AEncountManagerBP_C_BattleStartExec_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_SetBattleViewerEnemy
struct AEncountManagerBP_C_Debug_SetBattleViewerEnemy_Params
{
public:
	class FName                                  EnemyGroupID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          EnemyIDList;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  PlacementID;                                       // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_GetDisableStepRandom
struct AEncountManagerBP_C_Debug_GetDisableStepRandom_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_SetEncountSoon
struct AEncountManagerBP_C_Debug_SetEncountSoon_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_SetDisableStepRandom
struct AEncountManagerBP_C_Debug_SetDisableStepRandom_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_GetFixedEncount
struct AEncountManagerBP_C_Debug_GetFixedEncount_Params
{
public:
	bool                                         Fixed;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_SetFixedEnemyGroupID
struct AEncountManagerBP_C_Debug_SetFixedEnemyGroupID_Params
{
public:
	class FName                                  GrounpID;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_SetFixedEncount
struct AEncountManagerBP_C_Debug_SetFixedEncount_Params
{
public:
	bool                                         Fixed;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_SetFixedSituation
struct AEncountManagerBP_C_Debug_SetFixedSituation_Params
{
public:
	int32                                        Situation;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.Debug_GetEncountSoon
struct AEncountManagerBP_C_Debug_GetEncountSoon_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetDangerLevel
struct AEncountManagerBP_C_GetDangerLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetEncountCameraRotation
struct AEncountManagerBP_C_GetEncountCameraRotation_Params
{
public:
	struct FRotator                              EncountSign;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetViewerParameter
struct AEncountManagerBP_C_GetViewerParameter_Params
{
public:
	enum class EBATTLE_VIEWER_MODE               EViewerMode;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_127E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          AstrEnemyIDList;                                   // 0x8(0x10)(Parm, OutParm)
	class FName                                  StrPlacementID;                                    // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.SettingBattleParam
struct AEncountManagerBP_C_SettingBattleParam_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11E (0x11E - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.StartEventBattle
struct AEncountManagerBP_C_StartEventBattle_Params
{
public:
	class FName                                  EncountVolumeID;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEventBGM;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SingleBattle;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPlayableCharacterID              CharacterID;                                       // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNextEvent;                                       // 0xB(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPlayableCharacterID              FixFirstOrderPlayer;                               // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.StartRevealBattle
struct AEncountManagerBP_C_StartRevealBattle_Params
{
public:
	class FName                                  EnemyGroupID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayEventAfterBattle;                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1282[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NBattleMapIndex;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.StartInvadeBattle
struct AEncountManagerBP_C_StartInvadeBattle_Params
{
public:
	class FName                                  EnemyGroupID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_START_TYPE                StartType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayEventAfterBattle;                            // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1284[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NBattleMapIndex;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.StartRobBattle
struct AEncountManagerBP_C_StartRobBattle_Params
{
public:
	class FName                                  EnemyGroupID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_START_TYPE                StartType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayEventAfterBattle;                            // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1290[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NBattleMapIndex;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.StartBoutBattle
struct AEncountManagerBP_C_StartBoutBattle_Params
{
public:
	class FName                                  EnemyGroupID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayEventAfterBattle;                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1292[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NBattleMapIndex;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayableCharacterID              EBattleCHaraID;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.RestoreEncount
struct AEncountManagerBP_C_RestoreEncount_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.BackupEncount
struct AEncountManagerBP_C_BackupEncount_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.SetForceStopEncountStep
struct AEncountManagerBP_C_SetForceStopEncountStep_Params
{
public:
	int32                                        NForceStopEncountStepCount;                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetEncountType
struct AEncountManagerBP_C_GetEncountType_Params
{
public:
	enum class EBATTLE_ENCOUNT_TYPE              EncountType;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.AddEncountTrigger
struct AEncountManagerBP_C_AddEncountTrigger_Params
{
public:
	class AKSTriggerBase*                        Trigger;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.ResetTrigger
struct AEncountManagerBP_C_ResetTrigger_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.SetAfterMainMenu
struct AEncountManagerBP_C_SetAfterMainMenu_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x180 (0x180 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.ResetEncountStep
struct AEncountManagerBP_C_ResetEncountStep_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetEncountTriggerID
struct AEncountManagerBP_C_GetEncountTriggerID_Params
{
public:
	int32                                        TriggerID;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.RefleshEncountVolume
struct AEncountManagerBP_C_RefleshEncountVolume_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC9 (0xC9 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.SetEncountVolume
struct AEncountManagerBP_C_SetEncountVolume_Params
{
public:
	struct FEncountTriggerData                   TriggerData;                                       // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.ResetEncountVolume
struct AEncountManagerBP_C_ResetEncountVolume_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetLiquidationSkip
struct AEncountManagerBP_C_GetLiquidationSkip_Params
{
public:
	bool                                         SkipLiquidation;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.SetLiquidationSkip
struct AEncountManagerBP_C_SetLiquidationSkip_Params
{
public:
	bool                                         SkipLiquidation;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x325 (0x325 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.CalcEncounterLevel
struct AEncountManagerBP_C_CalcEncounterLevel_Params
{
public:
	int32                                        LevelId;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EncounterLevel;                                    // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DangerLevel;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetEncounterLevel
struct AEncountManagerBP_C_GetEncounterLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetEncountParam_Old
struct AEncountManagerBP_C_GetEncountParam_Old_Params
{
public:
	TArray<struct FPartyCharacterData>           PartyData;                                         // 0x0(0x10)(Parm, OutParm)
	class FName                                  EnemyGropID;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEventBGM;                                        // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EBATTLE_ENCOUNT_TYPE              EncountType;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetEncountCameraPosition
struct AEncountManagerBP_C_GetEncountCameraPosition_Params
{
public:
	struct FVector                               EncountCameraPosition;                             // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetEncountPlayerDir
struct AEncountManagerBP_C_GetEncountPlayerDir_Params
{
public:
	enum class EKSCharacterDir                   NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetEncountPlayerPosition
struct AEncountManagerBP_C_GetEncountPlayerPosition_Params
{
public:
	struct FVector                               EncountPlayerPosition;                             // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.CalcDecreaseStepCount
struct AEncountManagerBP_C_CalcDecreaseStepCount_Params
{
public:
	float                                        DashRevision;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AbilityRevision;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EquipmentRevision;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DecreaseValue;                                     // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10F8 (0x10F8 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.CharacterIDToPartyData
struct AEncountManagerBP_C_CharacterIDToPartyData_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPartyCharacterData                   PartyCharacterData;                                // 0x8(0x3D4)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x10E (0x10E - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.StartEventBattleByEncountVolume
struct AEncountManagerBP_C_StartEventBattleByEncountVolume_Params
{
public:
	class FName                                  EncountVolumeID;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEventBGM;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4DD (0x4DD - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.JudgeBattleSituation
struct AEncountManagerBP_C_JudgeBattleSituation_Params
{
public:
	class FName                                  GroupID;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_START_TYPE                StartType;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.SetItemEncountEffect
struct AEncountManagerBP_C_SetItemEncountEffect_Params
{
public:
	float                                        Percent;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NoEncountMin;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NoEncountMax;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.SetAbilityEncountEffect
struct AEncountManagerBP_C_SetAbilityEncountEffect_Params
{
public:
	float                                        DownPercent;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NoEncountMin;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NoEncountMax;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.UpdatePlayerStep
struct AEncountManagerBP_C_UpdatePlayerStep_Params
{
public:
	bool                                         Update;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E30 (0x1E30 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.CreatePartyData
struct AEncountManagerBP_C_CreatePartyData_Params
{
public:
	TArray<struct FPartyCharacterData>           PartyData;                                         // 0x0(0x10)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.GetEncountEnable
struct AEncountManagerBP_C_GetEncountEnable_Params
{
public:
	bool                                         EncountEnable;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.SetEncountEnable
struct AEncountManagerBP_C_SetEncountEnable_Params
{
public:
	bool                                         EncountEnable;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.IsExecEncount
struct AEncountManagerBP_C_IsExecEncount_Params
{
public:
	bool                                         Encount;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.ReceiveTick
struct AEncountManagerBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.PlayBattleStartFlow
struct AEncountManagerBP_C_PlayBattleStartFlow_Params
{
public:
	class UParticleSystemComponent*              EmotionEffext;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x160 (0x160 - 0x0)
// Function EncountManagerBP.EncountManagerBP_C.ExecuteUbergraph_EncountManagerBP
struct AEncountManagerBP_C_ExecuteUbergraph_EncountManagerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


