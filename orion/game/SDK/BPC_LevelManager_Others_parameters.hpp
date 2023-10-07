#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2 (0x2 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RequestBattleFinish
struct ABPC_LevelManager_Others_C_RequestBattleFinish_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RequestBattleStart
struct ABPC_LevelManager_Others_C_RequestBattleStart_Params
{
public:
	TArray<struct FPartyCharacterData>           Player;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  EnemyGroupID;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InvadeBattle;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsEventBGM;                                        // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BattleMapIndex;                                    // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CheckThiefChokerFlag
struct ABPC_LevelManager_Others_C_CheckThiefChokerFlag_Params
{
public:
	class FName                                  NewParam;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReturnLabel;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CanOpenFastTravelTutotial
struct ABPC_LevelManager_Others_C_CanOpenFastTravelTutotial_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x108 (0x108 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Debug_ShowBarNPCSpawn
struct ABPC_LevelManager_Others_C_Debug_ShowBarNPCSpawn_Params
{
public:
	bool                                         OneCharaSpawned;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Rand;                                              // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x67 (0x67 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CheckStorySelect
struct ABPC_LevelManager_Others_C_CheckStorySelect_Params
{
public:
	bool                                         CheckTutorial;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ExistStory;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF0 (0xF0 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.OnLoadedBeforeGameOverSaveData
struct ABPC_LevelManager_Others_C_OnLoadedBeforeGameOverSaveData_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        UserIndex;                                         // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMJSaveData*                           SaveGame;                                          // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x83 (0x83 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CheckEventParamCondition
struct ABPC_LevelManager_Others_C_CheckEventParamCondition_Params
{
public:
	struct FPlacementEventParamSet               EventParamSet;                                     // 0x0(0x80)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshPartyCharacterOnChangeLevel
struct ABPC_LevelManager_Others_C_RefreshPartyCharacterOnChangeLevel_Params
{
public:
	bool                                         InGame;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ShowFastTravelTutorial
struct ABPC_LevelManager_Others_C_ShowFastTravelTutorial_Params
{
public:
	bool                                         IsOpen;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CheckStackObject
struct ABPC_LevelManager_Others_C_CheckStackObject_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CallbackFinishFadeIn_InEvent
struct ABPC_LevelManager_Others_C_CallbackFinishFadeIn_InEvent_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x7B0 (0x7B0 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SpawnPlacementObject_Impl
struct ABPC_LevelManager_Others_C_SpawnPlacementObject_Impl_Params
{
public:
	enum class EPLACEMENT_TYPE                   PlacementType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_433[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TempDataLabel;                                     // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SpawnPos;                                          // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RefreshFollowNPC;                                  // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_434[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlacementData                        PlacementData;                                     // 0x20(0x700)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         FadeChara;                                         // 0x720(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ForceSpawn;                                        // 0x721(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshPlacedObject_Impl
struct ABPC_LevelManager_Others_C_RefreshPlacedObject_Impl_Params
{
public:
	enum class EPLACEMENT_TYPE                   PlacementType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TempDataLabel;                                     // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RefreshFollowNPC;                                  // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUpdateSwoon;                                      // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x47 (0x47 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.DestroyDontPlaceObject_Impl
struct ABPC_LevelManager_Others_C_DestroyDontPlaceObject_Impl_Params
{
public:
	enum class EPLACEMENT_TYPE                   PlacementType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_465[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TempDataLabel;                                     // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FadeChara;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_466[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                FollowNPCIDs;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        UniqIndex;                                         // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SequeceRequestStorySelect
struct ABPC_LevelManager_Others_C_SequeceRequestStorySelect_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SequenceRequest_SavePointStart
struct ABPC_LevelManager_Others_C_SequenceRequest_SavePointStart_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SequenceRequest_GoTitleCallback
struct ABPC_LevelManager_Others_C_SequenceRequest_GoTitleCallback_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshCharacterResource
struct ABPC_LevelManager_Others_C_RefreshCharacterResource_Params
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16E (0x16E - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CheckInGameLevelTransition
struct ABPC_LevelManager_Others_C_CheckInGameLevelTransition_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshSwoon
struct ABPC_LevelManager_Others_C_RefreshSwoon_Params
{
public:
	int32                                        NPCUniqID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.IsGameOverLevelLoad
struct ABPC_LevelManager_Others_C_IsGameOverLevelLoad_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.GetBattleEnemyGroupID
struct ABPC_LevelManager_Others_C_GetBattleEnemyGroupID_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x89D (0x89D - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshSwoon_Impl
struct ABPC_LevelManager_Others_C_RefreshSwoon_Impl_Params
{
public:
	int32                                        NPCUniqID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x818 (0x818 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.HouseChangeVisible_Impl
struct ABPC_LevelManager_Others_C_HouseChangeVisible_Impl_Params
{
public:
	bool                                         InHouse;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Floor;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.OnShownField_AfterBattle
struct ABPC_LevelManager_Others_C_OnShownField_AfterBattle_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ChangeBarCharacter
struct ABPC_LevelManager_Others_C_ChangeBarCharacter_Params
{
public:
	int32                                        BarCharaIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CharacterID;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBarTalkDefine                        BarTalkDefine;                                     // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x79 (0x79 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.On Shown Field After Battle Impl
struct ABPC_LevelManager_Others_C_On_Shown_Field_After_Battle_Impl_Params
{
public:
	bool                                         GotoGameOver;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1AB (0x1AB - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Try Swoon Revival
struct ABPC_LevelManager_Others_C_Try_Swoon_Revival_Params
{
public:
	class AKSFieldNPCCharacter_C*                NPCChara;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUpdateSwoon;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.FindCollisionDisabledNPC
struct ABPC_LevelManager_Others_C_FindCollisionDisabledNPC_Params
{
public:
	int32                                        NPCUnqID;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Find;                                              // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.UpdateCollisionDisabled
struct ABPC_LevelManager_Others_C_UpdateCollisionDisabled_Params
{
public:
	bool                                         IsDisable;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_502[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSFieldCharacter_C*                   Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.AddCollisionDisabledNPC_Impl
struct ABPC_LevelManager_Others_C_AddCollisionDisabledNPC_Impl_Params
{
public:
	int32                                        NPCUniqID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7F1 (0x7F1 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SetupSwoonEmotion
struct ABPC_LevelManager_Others_C_SetupSwoonEmotion_Params
{
public:
	class AKSFieldNPCCharacter_C*                InputPin;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.NPCLandCheck
struct ABPC_LevelManager_Others_C_NPCLandCheck_Params
{
public:
	class AKSFieldNPCCharacter_C*                SpawNPC;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Game Over UIFinish Event
struct ABPC_LevelManager_Others_C_Game_Over_UIFinish_Event_Params
{
public:
	int32                                        SelectCursor;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Remove_TargetNPC
struct ABPC_LevelManager_Others_C_Remove_TargetNPC_Params
{
public:
	int32                                        NPCUnqIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Remove
struct ABPC_LevelManager_Others_C_Remove_Params
{
public:
	enum class EPLACEMENT_TYPE                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_533[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TargetLabel;                                       // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRemove;                                          // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD9 (0xD9 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SpawnSequencer
struct ABPC_LevelManager_Others_C_SpawnSequencer_Params
{
public:
	class FName                                  SequencerLabel;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlacedSequencerBP_C*                  Sequencer;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x791 (0x791 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SpawnEventTrigger
struct ABPC_LevelManager_Others_C_SpawnEventTrigger_Params
{
public:
	class FName                                  TriggerLabel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Pos;                                               // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Size;                                              // 0x14(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlacementData                        PlacementData;                                     // 0x20(0x700)(BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                EventTrigger;                                      // 0x720(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D0 (0x1D0 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SpawnMapObject
struct ABPC_LevelManager_Others_C_SpawnMapObject_Params
{
public:
	class FName                                  ObjLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ObjectId;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Pos;                                               // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   Dir;                                               // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InHouse;                                           // 0x1D(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSObjectBase*                         Output_Get;                                        // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9A9 (0x9A9 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SpawnNPC
struct ABPC_LevelManager_Others_C_SpawnNPC_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlacementData                        PlacementData;                                     // 0x8(0x700)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         IsFadeChara;                                       // 0x708(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsForceSpawn;                                      // 0x709(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_574[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSFieldNPCCharacter_C*                NPCCharacter;                                      // 0x710(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RemoveTargetNPC_ByID
struct ABPC_LevelManager_Others_C_RemoveTargetNPC_ByID_Params
{
public:
	int32                                        NpdUniqID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.EndBattleWipe
struct ABPC_LevelManager_Others_C_EndBattleWipe_Params
{
public:
	int32                                        GameOverCursor;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.AddCollisionDisabledNPC
struct ABPC_LevelManager_Others_C_AddCollisionDisabledNPC_Params
{
public:
	int32                                        NPCUniqID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.HouseChangeVisible
struct ABPC_LevelManager_Others_C_HouseChangeVisible_Params
{
public:
	bool                                         InHouse;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_586[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Floor;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ChangeMapPreProcess
struct ABPC_LevelManager_Others_C_ChangeMapPreProcess_Params
{
public:
	int32                                        NextMapID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.DestroyDontPlaceObject
struct ABPC_LevelManager_Others_C_DestroyDontPlaceObject_Params
{
public:
	enum class EPLACEMENT_TYPE                   EPlacementType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_591[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TempDataLabel;                                     // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFadeChara;                                        // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_592[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                AnFollowNPCID;                                     // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        NUniqUndex;                                        // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshPlacedObject
struct ABPC_LevelManager_Others_C_RefreshPlacedObject_Params
{
public:
	enum class EPLACEMENT_TYPE                   EPlacementType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_595[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TempDataLabel;                                     // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRefreshFollowNPC;                                 // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUpdateSwoon;                                      // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x722 (0x722 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SpawnPlacementObject
struct ABPC_LevelManager_Others_C_SpawnPlacementObject_Params
{
public:
	enum class EPLACEMENT_TYPE                   EPlacementType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TempDataLabel;                                     // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VSpawnPos;                                         // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRefreshFollowNPC;                                 // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlacementData                        PPlacementData;                                    // 0x20(0x700)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bFadeChara;                                        // 0x720(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bForceSpawn;                                       // 0x721(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x782 (0x782 - 0x0)
// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ExecuteUbergraph_BPC_LevelManager_Others
struct ABPC_LevelManager_Others_C_ExecuteUbergraph_BPC_LevelManager_Others_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


