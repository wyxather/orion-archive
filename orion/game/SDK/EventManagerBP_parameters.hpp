#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x171 (0x171 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartFullRecoveryAndPotentiality
struct AEventManagerBP_C_StartFullRecoveryAndPotentiality_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function EventManagerBP.EventManagerBP_C.IsPlayReferenceSequencerDeepDirecting
struct AEventManagerBP_C_IsPlayReferenceSequencerDeepDirecting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xFD (0xFD - 0x0)
// Function EventManagerBP.EventManagerBP_C.MemberCountJump
struct AEventManagerBP_C_MemberCountJump_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x72 (0x72 - 0x0)
// Function EventManagerBP.EventManagerBP_C.GetThiefLabel
struct AEventManagerBP_C_GetThiefLabel_Params
{
public:
	class FName                                  MissionLabel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ActionLabel;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function EventManagerBP.EventManagerBP_C.RestoreEventSkip
struct AEventManagerBP_C_RestoreEventSkip_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartNotificationMessage
struct AEventManagerBP_C_StartNotificationMessage_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x82 (0x82 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartRadarMap
struct AEventManagerBP_C_StartRadarMap_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x318 (0x318 - 0x0)
// Function EventManagerBP.EventManagerBP_C.CreateDialogEpilogue
struct AEventManagerBP_C_CreateDialogEpilogue_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateGetJobDialog
struct AEventManagerBP_C_UpdateGetJobDialog_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x240 (0x240 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartGetJobDialog
struct AEventManagerBP_C_StartGetJobDialog_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x25D (0x25D - 0x0)
// Function EventManagerBP.EventManagerBP_C.CreateMessageText
struct AEventManagerBP_C_CreateMessageText_Params
{
public:
	class AKSFieldNPCCharacter_C*                TargetCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LineLabel;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MessageLabel;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x18(0x18)(Parm, OutParm)
};

// 0x6 (0x6 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateCharaMoveStart
struct AEventManagerBP_C_UpdateCharaMoveStart_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x101 (0x101 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartCharaMoveStart
struct AEventManagerBP_C_StartCharaMoveStart_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateSpawnCharacterThief
struct AEventManagerBP_C_UpdateSpawnCharacterThief_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SpawnCharacterThief
struct AEventManagerBP_C_SpawnCharacterThief_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5A (0x5A - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartOpenEndCardEpilogueUI
struct AEventManagerBP_C_StartOpenEndCardEpilogueUI_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xBA (0xBA - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateCharaFadeOut
struct AEventManagerBP_C_UpdateCharaFadeOut_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xBA (0xBA - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateCharaFadeIn
struct AEventManagerBP_C_UpdateCharaFadeIn_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xB9 (0xB9 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartCharaFadeOut
struct AEventManagerBP_C_StartCharaFadeOut_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xB9 (0xB9 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartCharaFadeIn
struct AEventManagerBP_C_StartCharaFadeIn_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x96 (0x96 - 0x0)
// Function EventManagerBP.EventManagerBP_C.RandomNumberJump
struct AEventManagerBP_C_RandomNumberJump_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function EventManagerBP.EventManagerBP_C.CreateRandomNumber
struct AEventManagerBP_C_CreateRandomNumber_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartCancelSwoon
struct AEventManagerBP_C_StartCancelSwoon_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function EventManagerBP.EventManagerBP_C.Update_CameraMove
struct AEventManagerBP_C_Update_CameraMove_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateWPMEventReflection
struct AEventManagerBP_C_UpdateWPMEventReflection_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateWPMEventEnd
struct AEventManagerBP_C_UpdateWPMEventEnd_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateWPMEventCheck
struct AEventManagerBP_C_UpdateWPMEventCheck_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateWPMEvent
struct AEventManagerBP_C_UpdateWPMEvent_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4C (0x4C - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartWPMEventReflection
struct AEventManagerBP_C_StartWPMEventReflection_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4B (0x4B - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartWPMEventEnd
struct AEventManagerBP_C_StartWPMEventEnd_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartWPMEventCheck
struct AEventManagerBP_C_StartWPMEventCheck_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartWPMEvent
struct AEventManagerBP_C_StartWPMEvent_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateSelectMemberDialog
struct AEventManagerBP_C_UpdateSelectMemberDialog_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartSelectMemberJump
struct AEventManagerBP_C_StartSelectMemberJump_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4D0 (0x4D0 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartSelectMemberDialog
struct AEventManagerBP_C_StartSelectMemberDialog_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateEventFadeOut
struct AEventManagerBP_C_UpdateEventFadeOut_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateEventFadeIn
struct AEventManagerBP_C_UpdateEventFadeIn_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA5 (0xA5 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartEventFadeOut
struct AEventManagerBP_C_StartEventFadeOut_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x79 (0x79 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartEventFadeIn
struct AEventManagerBP_C_StartEventFadeIn_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xAD8 (0xAD8 - 0x0)
// Function EventManagerBP.EventManagerBP_C.GetAnimationLabelPartyPosition
struct AEventManagerBP_C_GetAnimationLabelPartyPosition_Params
{
public:
	int32                                        PartyPosition;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AnimationLabel;                                    // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function EventManagerBP.EventManagerBP_C.SpawnCharacterPartyPosition
struct AEventManagerBP_C_SpawnCharacterPartyPosition_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x862 (0x862 - 0x0)
// Function EventManagerBP.EventManagerBP_C.GetSpawnNPCAnimationLabel
struct AEventManagerBP_C_GetSpawnNPCAnimationLabel_Params
{
public:
	enum class ESPAWN_CHARA_TYPE                 SpawnType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SpawnLabel;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AnimationLabel;                                    // 0x1C(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function EventManagerBP.EventManagerBP_C.SpawnCharacterPlacement
struct AEventManagerBP_C_SpawnCharacterPlacement_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4A (0x4A - 0x0)
// Function EventManagerBP.EventManagerBP_C.SpawnCharacterNPC
struct AEventManagerBP_C_SpawnCharacterNPC_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x16C (0x16C - 0x0)
// Function EventManagerBP.EventManagerBP_C.GetLevelTrigger
struct AEventManagerBP_C_GetLevelTrigger_Params
{
public:
	enum class ELevelTriggerID                   TriggerID;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function EventManagerBP.EventManagerBP_C.CheckEventPlayBGM
struct AEventManagerBP_C_CheckEventPlayBGM_Params
{
public:
	class FName                                  PlayBGMl;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASoundManagerBP_C*                     SoundManagerBP;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangeBGM;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EventManagerBP.EventManagerBP_C.OnClosedKSPartySplit
struct AEventManagerBP_C_OnClosedKSPartySplit_Params
{
public:
	enum class EPARTY_SPLIT_CLOSE_REASON         Reason;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF3 (0xF3 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartSetSwoonEventObject
struct AEventManagerBP_C_StartSetSwoonEventObject_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x851 (0x851 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartSetSwoon
struct AEventManagerBP_C_StartSetSwoon_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartRecoverSwoonEventChara
struct AEventManagerBP_C_StartRecoverSwoonEventChara_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xFA (0xFA - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartSuccsessFCTypeLabelJump
struct AEventManagerBP_C_StartSuccsessFCTypeLabelJump_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x140 (0x140 - 0x0)
// Function EventManagerBP.EventManagerBP_C.HaveMeatItemJump
struct AEventManagerBP_C_HaveMeatItemJump_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x7E (0x7E - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartOpenEndCardUI
struct AEventManagerBP_C_StartOpenEndCardUI_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SetEnableEventObject
struct AEventManagerBP_C_SetEnableEventObject_Params
{
public:
	int32                                        Flag;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Value;                                             // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x118 (0x118 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SetEventObjectEnableTheater
struct AEventManagerBP_C_SetEventObjectEnableTheater_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function EventManagerBP.EventManagerBP_C.OnFinishAutoSave
struct AEventManagerBP_C_OnFinishAutoSave_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        UserIndex;                                         // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSuccesss;                                        // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E9 (0x1E9 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartFinalBattleStart
struct AEventManagerBP_C_StartFinalBattleStart_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xAD (0xAD - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartPreparationBattleStart
struct AEventManagerBP_C_StartPreparationBattleStart_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x72 (0x72 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartSubTitleNextBlock
struct AEventManagerBP_C_StartSubTitleNextBlock_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartSubTitle
struct AEventManagerBP_C_StartSubTitle_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x150 (0x150 - 0x0)
// Function EventManagerBP.EventManagerBP_C.HaveItemJump
struct AEventManagerBP_C_HaveItemJump_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function EventManagerBP.EventManagerBP_C.GetFinishEncountWipe
struct AEventManagerBP_C_GetFinishEncountWipe_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xE31 (0xE31 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SetTalkDataGeneral
struct AEventManagerBP_C_SetTalkDataGeneral_Params
{
public:
	class AKSCharacterBase*                      TalkTarget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacterBase*                      OwnerCharacter;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventData                            Param;                                             // 0x10(0x48)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EEventBalloonDir                  BalloonDir;                                        // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Ret;                                               // 0x59(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartTalkGeneral
struct AEventManagerBP_C_StartTalkGeneral_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function EventManagerBP.EventManagerBP_C.GetSwitchIndoorTriggerIndex
struct AEventManagerBP_C_GetSwitchIndoorTriggerIndex_Params
{
public:
	class FString                                TriggerName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20E (0x20E - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartGetTameMonster
struct AEventManagerBP_C_StartGetTameMonster_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateGetItemDialog
struct AEventManagerBP_C_UpdateGetItemDialog_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x278 (0x278 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartGetItemDialog
struct AEventManagerBP_C_StartGetItemDialog_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3E0 (0x3E0 - 0x0)
// Function EventManagerBP.EventManagerBP_C.FindLegendSeaMonsterIndex
struct AEventManagerBP_C_FindLegendSeaMonsterIndex_Params
{
public:
	class FString                                Normal;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Awake;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                AwakeAfter;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        FindIndex;                                         // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x230 (0x230 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SetLegendMonsterAwakening
struct AEventManagerBP_C_SetLegendMonsterAwakening_Params
{
public:
	enum class EAWAKENING_MONSTER_PARAM          EAwake;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x231 (0x231 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartCameraRotation
struct AEventManagerBP_C_StartCameraRotation_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function EventManagerBP.EventManagerBP_C.LearnInventorSupportAbility
struct AEventManagerBP_C_LearnInventorSupportAbility_Params
{
public:
	bool                                         IsLearned;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1101[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AbilityLabel;                                      // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AbilityIndex;                                      // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x527 (0x527 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateInventorLearnAbilityFrow
struct AEventManagerBP_C_UpdateInventorLearnAbilityFrow_Params
{
public:
	enum class ESequenceResult                   NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x369 (0x369 - 0x0)
// Function EventManagerBP.EventManagerBP_C.CheckInventorItemList
struct AEventManagerBP_C_CheckInventorItemList_Params
{
public:
	bool                                         EnoughItem;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EquipItem;                                         // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4A (0x4A - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartShipPutUpSail
struct AEventManagerBP_C_StartShipPutUpSail_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x16 (0x16 - 0x0)
// Function EventManagerBP.EventManagerBP_C.IsHaveInventItem
struct AEventManagerBP_C_IsHaveInventItem_Params
{
public:
	struct FInventionMaterial                    TargetMaterial;                                    // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         IsFind;                                            // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_110E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NewParam;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCheck;                                           // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7D8 (0x7D8 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateInventorFrow
struct AEventManagerBP_C_UpdateInventorFrow_Params
{
public:
	enum class ESequenceResult                   ReturnParam;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateInventorLearnAbility
struct AEventManagerBP_C_UpdateInventorLearnAbility_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateInventorEventDialog
struct AEventManagerBP_C_UpdateInventorEventDialog_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartInventorLearnAbility
struct AEventManagerBP_C_StartInventorLearnAbility_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA3 (0xA3 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartInventorEventDialog
struct AEventManagerBP_C_StartInventorEventDialog_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateOpenPartySquadWidget
struct AEventManagerBP_C_UpdateOpenPartySquadWidget_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x91 (0x91 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartOpenPartySquadWidget
struct AEventManagerBP_C_StartOpenPartySquadWidget_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartWeaponMasterFrow
struct AEventManagerBP_C_StartWeaponMasterFrow_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function EventManagerBP.EventManagerBP_C.CheckDifferentTimeSequencer
struct AEventManagerBP_C_CheckDifferentTimeSequencer_Params
{
public:
	class ULevelSequence*                        Sequencer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Equal;                                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xCA (0xCA - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartTalkPartner
struct AEventManagerBP_C_StartTalkPartner_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function EventManagerBP.EventManagerBP_C.PartnerCharacterJump
struct AEventManagerBP_C_PartnerCharacterJump_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x168 (0x168 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SetTimeZoneTheater
struct AEventManagerBP_C_SetTimeZoneTheater_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OverrideTimeZone;                                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C0 (0x3C0 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartTopCharaTypeLabelJump
struct AEventManagerBP_C_StartTopCharaTypeLabelJump_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function EventManagerBP.EventManagerBP_C.CallbackTheaterPrologueEnd
struct AEventManagerBP_C_CallbackTheaterPrologueEnd_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartChangePartySet
struct AEventManagerBP_C_StartChangePartySet_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function EventManagerBP.EventManagerBP_C.FinishPartySplitUI
struct AEventManagerBP_C_FinishPartySplitUI_Params
{
public:
	struct FOnClosedPartySplitParam              Param;                                             // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x7 (0x7 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateOpenPartySplitWidget
struct AEventManagerBP_C_UpdateOpenPartySplitWidget_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x7C (0x7C - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartOpenPartySplitWidget
struct AEventManagerBP_C_StartOpenPartySplitWidget_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateFieldCommandDialog
struct AEventManagerBP_C_UpdateFieldCommandDialog_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateSubStoryLabelJump
struct AEventManagerBP_C_UpdateSubStoryLabelJump_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1B4 (0x1B4 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartSubStoryLabelJump
struct AEventManagerBP_C_StartSubStoryLabelJump_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartFinishTempPartySetting
struct AEventManagerBP_C_StartFinishTempPartySetting_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA9 (0xA9 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartTempPartySetting
struct AEventManagerBP_C_StartTempPartySetting_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdatePartnerSelectDialog
struct AEventManagerBP_C_UpdatePartnerSelectDialog_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x94 (0x94 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartPartnerSelectDialog
struct AEventManagerBP_C_StartPartnerSelectDialog_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xAC (0xAC - 0x0)
// Function EventManagerBP.EventManagerBP_C.FollowCharacterJump
struct AEventManagerBP_C_FollowCharacterJump_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4C (0x4C - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartEndPlayReminiscene
struct AEventManagerBP_C_StartEndPlayReminiscene_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x69 (0x69 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartBeginPlayReminiscene
struct AEventManagerBP_C_StartBeginPlayReminiscene_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x53 (0x53 - 0x0)
// Function EventManagerBP.EventManagerBP_C.AddReminiscenceDialogFinishCallback
struct AEventManagerBP_C_AddReminiscenceDialogFinishCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x254 (0x254 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateReminiscenceDialog
struct AEventManagerBP_C_UpdateReminiscenceDialog_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x220 (0x220 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartReminisceneDialog
struct AEventManagerBP_C_StartReminisceneDialog_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x66 (0x66 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SetPartnerNumber
struct AEventManagerBP_C_SetPartnerNumber_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartSequencerStop
struct AEventManagerBP_C_StartSequencerStop_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x162 (0x162 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartHouseInSettingPlaySeq
struct AEventManagerBP_C_StartHouseInSettingPlaySeq_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x82 (0x82 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SetOpenCloseDoorFunction
struct AEventManagerBP_C_SetOpenCloseDoorFunction_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xBA (0xBA - 0x0)
// Function EventManagerBP.EventManagerBP_C.LoadSubSequencer
struct AEventManagerBP_C_LoadSubSequencer_Params
{
public:
	struct FEventData                            InEventData;                                       // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartLeaveMember
struct AEventManagerBP_C_StartLeaveMember_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EventManagerBP.EventManagerBP_C.AddMemberFinishCallback
struct AEventManagerBP_C_AddMemberFinishCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SubDeliMessageFinishCallback
struct AEventManagerBP_C_SubDeliMessageFinishCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventManagerBP.EventManagerBP_C.AddMemberDialogFinishCallback
struct AEventManagerBP_C_AddMemberDialogFinishCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventManagerBP.EventManagerBP_C.DialogFinishCallback
struct AEventManagerBP_C_DialogFinishCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SubDeliveryFinishCallback
struct AEventManagerBP_C_SubDeliveryFinishCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function EventManagerBP.EventManagerBP_C.GetSwitchIndoorTrigger
struct AEventManagerBP_C_GetSwitchIndoorTrigger_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ASwitchIndoorTriggerBP_C*              SwitchIndoorTrigger;                               // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartPlaySE
struct AEventManagerBP_C_StartPlaySE_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x66 (0x66 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartCameraLock
struct AEventManagerBP_C_StartCameraLock_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SetPostProcessDeepThink
struct AEventManagerBP_C_SetPostProcessDeepThink_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_113C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      RefTarget;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time;                                              // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4C (0x4C - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartUIPartyEdit
struct AEventManagerBP_C_StartUIPartyEdit_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateEndroll
struct AEventManagerBP_C_UpdateEndroll_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartEndroll
struct AEventManagerBP_C_StartEndroll_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateEndrollInit
struct AEventManagerBP_C_UpdateEndrollInit_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4A (0x4A - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartEndrollInit
struct AEventManagerBP_C_StartEndrollInit_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateMainMissionProgress
struct AEventManagerBP_C_UpdateMainMissionProgress_Params
{
public:
	bool                                         IsMainMission;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB4 (0xB4 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartNotificationCountShow
struct AEventManagerBP_C_StartNotificationCountShow_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x198 (0x198 - 0x0)
// Function EventManagerBP.EventManagerBP_C.PlayEventTheater
struct AEventManagerBP_C_PlayEventTheater_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateUIStorySelect
struct AEventManagerBP_C_UpdateUIStorySelect_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x109 (0x109 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartUIStorySelect
struct AEventManagerBP_C_StartUIStorySelect_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xE2 (0xE2 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartAutoSave
struct AEventManagerBP_C_StartAutoSave_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x128 (0x128 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SetEventCheckFlag
struct AEventManagerBP_C_SetEventCheckFlag_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x54 (0x54 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartUnlockFasttravel
struct AEventManagerBP_C_StartUnlockFasttravel_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x29D (0x29D - 0x0)
// Function EventManagerBP.EventManagerBP_C.EventLoadLevel
struct AEventManagerBP_C_EventLoadLevel_Params
{
public:
	class FName                                  InLevelID;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  EventSoundLabel;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventPlayBGM                     InEventPlayBGM;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1159[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayBGMLabel;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x54 (0x54 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartUINote
struct AEventManagerBP_C_StartUINote_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x7 (0x7 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateExPartyChange
struct AEventManagerBP_C_UpdateExPartyChange_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x53 (0x53 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartEnableEventObject
struct AEventManagerBP_C_StartEnableEventObject_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x360 (0x360 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartOKDialog
struct AEventManagerBP_C_StartOKDialog_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x175 (0x175 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartFullRecovery
struct AEventManagerBP_C_StartFullRecovery_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5D (0x5D - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartChangeArea
struct AEventManagerBP_C_StartChangeArea_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8B (0x8B - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateSubDelivMessageDialog
struct AEventManagerBP_C_UpdateSubDelivMessageDialog_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1A8 (0x1A8 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartSubDelivMessageDialog
struct AEventManagerBP_C_StartSubDelivMessageDialog_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8C1 (0x8C1 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateAddMemberEnd
struct AEventManagerBP_C_UpdateAddMemberEnd_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC3 (0xC3 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartAddMemberEnd
struct AEventManagerBP_C_StartAddMemberEnd_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         AddMember;                                         // 0x48(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x49(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x43 (0x43 - 0x0)
// Function EventManagerBP.EventManagerBP_C.CheckPartyMember
struct AEventManagerBP_C_CheckPartyMember_Params
{
public:
	enum class EPlayableCharacterID              ChkID;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Find;                                              // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6C (0x6C - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartUIShop
struct AEventManagerBP_C_StartUIShop_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4B (0x4B - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartEndReminiscene
struct AEventManagerBP_C_StartEndReminiscene_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4D (0x4D - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartBeginReminiscene
struct AEventManagerBP_C_StartBeginReminiscene_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateAddMemberDialog
struct AEventManagerBP_C_UpdateAddMemberDialog_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3F8 (0x3F8 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartAddMemberDialog
struct AEventManagerBP_C_StartAddMemberDialog_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartRefreshEventObject
struct AEventManagerBP_C_StartRefreshEventObject_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x23C (0x23C - 0x0)
// Function EventManagerBP.EventManagerBP_C.RestoreTheater
struct AEventManagerBP_C_RestoreTheater_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x9A (0x9A - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartOpenDoor
struct AEventManagerBP_C_StartOpenDoor_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function EventManagerBP.EventManagerBP_C.FinishTheater
struct AEventManagerBP_C_FinishTheater_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateChallengeDialog
struct AEventManagerBP_C_UpdateChallengeDialog_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartChallengeDialog
struct AEventManagerBP_C_StartChallengeDialog_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x209 (0x209 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartTalkParty
struct AEventManagerBP_C_StartTalkParty_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4E (0x4E - 0x0)
// Function EventManagerBP.EventManagerBP_C.SetPChatCharacterDir
struct AEventManagerBP_C_SetPChatCharacterDir_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x168 (0x168 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartTalkPChat
struct AEventManagerBP_C_StartTalkPChat_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SpawnPChatCharacter
struct AEventManagerBP_C_SpawnPChatCharacter_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x79 (0x79 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartPChatMode
struct AEventManagerBP_C_StartPChatMode_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2BB (0x2BB - 0x0)
// Function EventManagerBP.EventManagerBP_C.FinishPre
struct AEventManagerBP_C_FinishPre_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartChangePlayerResource
struct AEventManagerBP_C_StartChangePlayerResource_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8C (0x8C - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartUIBar
struct AEventManagerBP_C_StartUIBar_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x69 (0x69 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartFlashbackStart
struct AEventManagerBP_C_StartFlashbackStart_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartTalkPos
struct AEventManagerBP_C_StartTalkPos_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10D (0x10D - 0x0)
// Function EventManagerBP.EventManagerBP_C.PlayAfterFadeOut
struct AEventManagerBP_C_PlayAfterFadeOut_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SetCharacterPosition
struct AEventManagerBP_C_SetCharacterPosition_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6B (0x6B - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartChangeMap
struct AEventManagerBP_C_StartChangeMap_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x62 (0x62 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartMovePos
struct AEventManagerBP_C_StartMovePos_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function EventManagerBP.EventManagerBP_C.DialogFinish
struct AEventManagerBP_C_DialogFinish_Params
{
public:
	class FString                                OutNextEventName;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2C4 (0x2C4 - 0x0)
// Function EventManagerBP.EventManagerBP_C.CreateDialog
struct AEventManagerBP_C_CreateDialog_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function EventManagerBP.EventManagerBP_C.GetEventCharacterBP
struct AEventManagerBP_C_GetEventCharacterBP_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1168[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSFieldCharacter_C*                   EventCharacter;                                    // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function EventManagerBP.EventManagerBP_C.CommonBalloonOpenAnimEvent
struct AEventManagerBP_C_CommonBalloonOpenAnimEvent_Params
{
public:
	class AKSCharacterBase*                      TargetCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35 (0x35 - 0x0)
// Function EventManagerBP.EventManagerBP_C.BalloonNotFadeInEvent
struct AEventManagerBP_C_BalloonNotFadeInEvent_Params
{
public:
	enum class EBalloonEventType                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBalloonType                      BalloonType;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_116A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      TargetType;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function EventManagerBP.EventManagerBP_C.CreateEventCharacter
struct AEventManagerBP_C_CreateEventCharacter_Params
{
public:
	enum class ESPAWN_CHARA_TYPE                 EType;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_116B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventData                            InEventData;                                       // 0x8(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x7A (0x7A - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartRecoverSwoon
struct AEventManagerBP_C_StartRecoverSwoon_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateTalkPostFade
struct AEventManagerBP_C_UpdateTalkPostFade_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function EventManagerBP.EventManagerBP_C.RequestTalkPostFade
struct AEventManagerBP_C_RequestTalkPostFade_Params
{
public:
	float                                        StartAlpha;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FinishAlpha;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeTime;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUpdateDepth;                                     // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function EventManagerBP.EventManagerBP_C.BalloonEvent
struct AEventManagerBP_C_BalloonEvent_Params
{
public:
	enum class EBalloonEventType                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBalloonType                      BalloonType;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_116E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      TargetCharacter;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateAddMember
struct AEventManagerBP_C_UpdateAddMember_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x751 (0x751 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartAddMember
struct AEventManagerBP_C_StartAddMember_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x211 (0x211 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartDelFollow
struct AEventManagerBP_C_StartDelFollow_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartStopEmotionIconAll
struct AEventManagerBP_C_StartStopEmotionIconAll_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function EventManagerBP.EventManagerBP_C.RemoveEventEffect
struct AEventManagerBP_C_RemoveEventEffect_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x73 (0x73 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartPlayEmotionIcon
struct AEventManagerBP_C_StartPlayEmotionIcon_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x79 (0x79 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SpawnEventEffect
struct AEventManagerBP_C_SpawnEventEffect_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Label;                                             // 0x4(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LifeTime;                                          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Pos;                                               // 0x10(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TargetCharacter;                                   // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6A (0x6A - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartCharacterPhysics
struct AEventManagerBP_C_StartCharacterPhysics_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x162 (0x162 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartHouseInSetting
struct AEventManagerBP_C_StartHouseInSetting_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x258 (0x258 - 0x0)
// Function EventManagerBP.EventManagerBP_C.FinishEvent
struct AEventManagerBP_C_FinishEvent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function EventManagerBP.EventManagerBP_C.FinishEventSkip
struct AEventManagerBP_C_FinishEventSkip_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x81 (0x81 - 0x0)
// Function EventManagerBP.EventManagerBP_C.BitFlagJump
struct AEventManagerBP_C_BitFlagJump_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x280 (0x280 - 0x0)
// Function EventManagerBP.EventManagerBP_C.CreateDeliveryText
struct AEventManagerBP_C_CreateDeliveryText_Params
{
public:
	class AKSFieldNPCCharacter_C*                TargetCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LineLabel;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MessageLabel;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x18(0x18)(Parm, OutParm)
};

// 0xA2 (0xA2 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateSubDeliveryDialog
struct AEventManagerBP_C_UpdateSubDeliveryDialog_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1A8 (0x1A8 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartSubDeliveryDialog
struct AEventManagerBP_C_StartSubDeliveryDialog_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function EventManagerBP.EventManagerBP_C.ConvertEvent
struct AEventManagerBP_C_ConvertEvent_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function EventManagerBP.EventManagerBP_C.IsExecEvent
struct AEventManagerBP_C_IsExecEvent_Params
{
public:
	bool                                         Exec;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartJudgeMoney
struct AEventManagerBP_C_StartJudgeMoney_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1C6 (0x1C6 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartModifyMP
struct AEventManagerBP_C_StartModifyMP_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1CA (0x1CA - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartModifyHP
struct AEventManagerBP_C_StartModifyHP_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SpawnPlayerCharacter
struct AEventManagerBP_C_SpawnPlayerCharacter_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartObjectSpawn
struct AEventManagerBP_C_StartObjectSpawn_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x85 (0x85 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartChangeItem
struct AEventManagerBP_C_StartChangeItem_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartChangeMoeny
struct AEventManagerBP_C_StartChangeMoeny_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4A (0x4A - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartChangeTitle
struct AEventManagerBP_C_StartChangeTitle_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartNarration
struct AEventManagerBP_C_StartNarration_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateBattleStart
struct AEventManagerBP_C_UpdateBattleStart_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xEF (0xEF - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartBattleStart
struct AEventManagerBP_C_StartBattleStart_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3F1 (0x3F1 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartCameraSpawn
struct AEventManagerBP_C_StartCameraSpawn_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x558 (0x558 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SetTalkData
struct AEventManagerBP_C_SetTalkData_Params
{
public:
	class AKSCharacterBase*                      TalkTarget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventData                            Param;                                             // 0x8(0x48)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EEventBalloonDir                  BalloonDir;                                        // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Ret;                                               // 0x51(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartCameraTarget
struct AEventManagerBP_C_StartCameraTarget_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3D (0x3D - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateMove
struct AEventManagerBP_C_UpdateMove_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xD5 (0xD5 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartMove
struct AEventManagerBP_C_StartMove_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10C (0x10C - 0x0)
// Function EventManagerBP.EventManagerBP_C.SpawnCharacter
struct AEventManagerBP_C_SpawnCharacter_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function EventManagerBP.EventManagerBP_C.StartTalk
struct AEventManagerBP_C_StartTalk_Params
{
public:
	struct FEventData                            RefEventData;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x85 (0x85 - 0x0)
// Function EventManagerBP.EventManagerBP_C.PlayEvent
struct AEventManagerBP_C_PlayEvent_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class AKSCharacterBase*                      TargetCharacter;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x32 (0x32 - 0x0)
// Function EventManagerBP.EventManagerBP_C.UpdateTalk
struct AEventManagerBP_C_UpdateTalk_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EventManagerBP.EventManagerBP_C.Update_EventSkipFadeOut
struct AEventManagerBP_C_Update_EventSkipFadeOut_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventManagerBP.EventManagerBP_C.Update_EventSkipFadeIn
struct AEventManagerBP_C_Update_EventSkipFadeIn_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventManagerBP.EventManagerBP_C.Update_StartFadeOut
struct AEventManagerBP_C_Update_StartFadeOut_Params
{
public:
	float                                        DetalTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventManagerBP.EventManagerBP_C.ReceiveTick
struct AEventManagerBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EventManagerBP.EventManagerBP_C.SetEventSkipInput
struct AEventManagerBP_C_SetEventSkipInput_Params
{
public:
	bool                                         IsSkipInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EventManagerBP.EventManagerBP_C.RemoveEmotionIcon
struct AEventManagerBP_C_RemoveEmotionIcon_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EventManagerBP.EventManagerBP_C.FinishEventSkipCallback_CharaReActive
struct AEventManagerBP_C_FinishEventSkipCallback_CharaReActive_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EventManagerBP.EventManagerBP_C.FinishEventCallback_CharaReActive
struct AEventManagerBP_C_FinishEventCallback_CharaReActive_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29B (0x29B - 0x0)
// Function EventManagerBP.EventManagerBP_C.ExecuteUbergraph_EventManagerBP
struct AEventManagerBP_C_ExecuteUbergraph_EventManagerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


