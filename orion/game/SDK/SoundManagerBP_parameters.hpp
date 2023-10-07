#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x45 (0x45 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.SetupBattleChangeEnvSound
struct ASoundManagerBP_C_SetupBattleChangeEnvSound_Params
{
public:
	bool                                         bIsBattle;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.CheckPauseBGM
struct ASoundManagerBP_C_CheckPauseBGM_Params
{
public:
	bool                                         IsPause;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.CheckNextBGMLabel
struct ASoundManagerBP_C_CheckNextBGMLabel_Params
{
public:
	class FName                                  BgmLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUnMatch;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlayTitleBgmByLabel
struct ASoundManagerBP_C_RequestPlayTitleBgmByLabel_Params
{
public:
	class FName                                  BgmLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInTime;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Priority;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDayTime;                                         // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsDebugPlay;                                      // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x16(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.ResetManager
struct ASoundManagerBP_C_ResetManager_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.DestroyManager
struct ASoundManagerBP_C_DestroyManager_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlayFadeMapChangeBgmByLabel
struct ASoundManagerBP_C_RequestPlayFadeMapChangeBgmByLabel_Params
{
public:
	class FName                                  BgmLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInTime;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Priority;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDebugPlay;                                      // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.OnExitBar
struct ASoundManagerBP_C_OnExitBar_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x7 (0x7 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestStopMusicRecord
struct ASoundManagerBP_C_RequestStopMusicRecord_Params
{
public:
	float                                        FadeOutTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RestoreBgmBeforePlayMusicRecord
struct ASoundManagerBP_C_RestoreBgmBeforePlayMusicRecord_Params
{
public:
	float                                        FadeOutTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInTime;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Priority;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDebugPlay;                                      // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlayMusicRecord
struct ASoundManagerBP_C_RequestPlayMusicRecord_Params
{
public:
	class FName                                  BgmLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInTime;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Priority;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDebugPlay;                                      // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlayEventSeByRowName
struct ASoundManagerBP_C_RequestPlayEventSeByRowName_Params
{
public:
	class FString                                SeName;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.ApplyBgmSelector
struct ASoundManagerBP_C_ApplyBgmSelector_Params
{
public:
	class UAtomComponent*                        AtomComponent;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.SetBgmSelector
struct ASoundManagerBP_C_SetBgmSelector_Params
{
public:
	class FName                                  SelectorName;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SelectorLabel;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA1 (0xA1 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlayBgmByLabel
struct ASoundManagerBP_C_RequestPlayBgmByLabel_Params
{
public:
	class FName                                  BgmLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Priority;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EBD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoundData                            BeforSoundData;                                    // 0x10(0x48)(Parm, OutParm, ContainsInstancedReference)
};

// 0xE5 (0xE5 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RefreshCharacterVoiceResource
struct ASoundManagerBP_C_RefreshCharacterVoiceResource_Params
{
public:
	TArray<class FName>                          TempCharaVoices;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6E (0x6E - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlayEventSeByLabel
struct ASoundManagerBP_C_RequestPlayEventSeByLabel_Params
{
public:
	class FName                                  SELabel;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.ChangeNextBgmFadeInTime
struct ASoundManagerBP_C_ChangeNextBgmFadeInTime_Params
{
public:
	float                                        FadeIn;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.ChangeCurrentBgmFadeOutTime
struct ASoundManagerBP_C_ChangeCurrentBgmFadeOutTime_Params
{
public:
	float                                        FadeOut;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x74 (0x74 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlayBattleSeByLabel
struct ASoundManagerBP_C_RequestPlayBattleSeByLabel_Params
{
public:
	class FName                                  SELabel;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x188 (0x188 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlayBattleVoiceByLabel
struct ASoundManagerBP_C_RequestPlayBattleVoiceByLabel_Params
{
public:
	class FName                                  VoiceLabel;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ECC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CueName;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.GetCurrentBgmData
struct ASoundManagerBP_C_GetCurrentBgmData_Params
{
public:
	struct FSoundData                            PlayingBgmData;                                    // 0x0(0x48)(Parm, OutParm, ContainsInstancedReference)
};

// 0x101 (0x101 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlayBgmById
struct ASoundManagerBP_C_RequestPlayBgmById_Params
{
public:
	int32                                        BGMID;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Priority;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ED2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoundData                            BeforSoundData;                                    // 0x10(0x48)(Parm, OutParm, ContainsInstancedReference)
};

// 0x50 (0x50 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestStopLoopSe
struct ASoundManagerBP_C_RequestStopLoopSe_Params
{
public:
	int32                                        HandleId;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlayLoopSe
struct ASoundManagerBP_C_RequestPlayLoopSe_Params
{
public:
	int32                                        HandleId;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SELabel;                                           // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.GetLoopSeHandle
struct ASoundManagerBP_C_GetLoopSeHandle_Params
{
public:
	int32                                        HandleId;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA4 (0xA4 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.ApplyEnvVolume
struct ASoundManagerBP_C_ApplyEnvVolume_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x16F (0x16F - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.OnLevelShown
struct ASoundManagerBP_C_OnLevelShown_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestStopBGM
struct ASoundManagerBP_C_RequestStopBGM_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.UpdateEnvSound
struct ASoundManagerBP_C_UpdateEnvSound_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.GetCurrentBgmLabel
struct ASoundManagerBP_C_GetCurrentBgmLabel_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF5 (0xF5 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.GetCueSheetAssetPath
struct ASoundManagerBP_C_GetCueSheetAssetPath_Params
{
public:
	class FName                                  CueSheetName;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OutAssetPath;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlaySeByLabel
struct ASoundManagerBP_C_RequestPlaySeByLabel_Params
{
public:
	class FName                                  SELabel;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.StopVoice
struct ASoundManagerBP_C_StopVoice_Params
{
public:
	float                                        FadeOutTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x104 (0x104 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlayVoiceByLabel
struct ASoundManagerBP_C_RequestPlayVoiceByLabel_Params
{
public:
	class FName                                  VoiceLabel;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x62 (0x62 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.ApplyBgmBlockIndex
struct ASoundManagerBP_C_ApplyBgmBlockIndex_Params
{
public:
	class UAtomComponent*                        AtomComponent;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6C (0x6C - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.Request Play Event Se by Label_OLD
struct ASoundManagerBP_C_Request_Play_Event_Se_by_Label_OLD_Params
{
public:
	class FName                                  SELabel;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5C (0x5C - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlay3DSeWithComponent
struct ASoundManagerBP_C_RequestPlay3DSeWithComponent_Params
{
public:
	class UAtomComponent*                        Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BgmLabel;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.SetDspBusToEnvSound
struct ASoundManagerBP_C_SetDspBusToEnvSound_Params
{
public:
	enum class EKSDspBusType                     DspBusType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.ChangeNextBgmFadeInTime_OLD
struct ASoundManagerBP_C_ChangeNextBgmFadeInTime_OLD_Params
{
public:
	float                                        FadeIn;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.SetCategoryVolumeByName
struct ASoundManagerBP_C_SetCategoryVolumeByName_Params
{
public:
	class FString                                CategoryName;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                        Volume;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x7 (0x7 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.SetBgmNextBlockIndex
struct ASoundManagerBP_C_SetBgmNextBlockIndex_Params
{
public:
	int32                                        BlockIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xCC (0xCC - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlayBgmByLabel_Inner
struct ASoundManagerBP_C_RequestPlayBgmByLabel_Inner_Params
{
public:
	class FName                                  BgmLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInTime;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Priority;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInterrupt;                                       // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsDebugForcePlay;                                  // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x16(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x298 (0x298 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.Debug_ShowBgmSoundData
struct ASoundManagerBP_C_Debug_ShowBgmSoundData_Params
{
public:
	class FString                                Header;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSoundData                            PlaySoundData;                                     // 0x10(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x48 (0x48 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.ResetPlayBgmData
struct ASoundManagerBP_C_ResetPlayBgmData_Params
{
public:
	struct FSoundData                            PlayBgmData;                                       // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xBC (0xBC - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.UpdateFadeIn
struct ASoundManagerBP_C_UpdateFadeIn_Params
{
public:
	struct FSoundData                            CurrentSoundData;                                  // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         IsEnd;                                             // 0x48(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD4 (0xD4 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.UpdateFadeOut
struct ASoundManagerBP_C_UpdateFadeOut_Params
{
public:
	struct FSoundData                            CurrentSoundData;                                  // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         IsEnd;                                             // 0x48(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x140 (0x140 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.UpdateChangeBGM
struct ASoundManagerBP_C_UpdateChangeBGM_Params
{
public:
	struct FSoundData                            PlayBgmData_Current;                               // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FSoundData                            PlayBgmData_Next;                                  // 0x48(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xBC (0xBC - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.UpdateTick
struct ASoundManagerBP_C_UpdateTick_Params
{
public:
	float                                        Delta_Seconds;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlayInterruptBgmByLabel
struct ASoundManagerBP_C_RequestPlayInterruptBgmByLabel_Params
{
public:
	class FName                                  BgmLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInTime;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Priority;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.Debug Show Env Sound Info_OLD
struct ASoundManagerBP_C_Debug_Show_Env_Sound_Info_OLD_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.PauseEnvSoundAll
struct ASoundManagerBP_C_PauseEnvSoundAll_Params
{
public:
	bool                                         bPause;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestStopFadeBgm
struct ASoundManagerBP_C_RequestStopFadeBgm_Params
{
public:
	float                                        FadeOutTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StopBoth;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x62 (0x62 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.RequestPlayFadeBgmByLabel
struct ASoundManagerBP_C_RequestPlayFadeBgmByLabel_Params
{
public:
	class FName                                  BgmLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInTime;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Priority;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDebugPlay;                                      // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18B (0x18B - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.GetVoiceCue
struct ASoundManagerBP_C_GetVoiceCue_Params
{
public:
	class FName                                  VoiceLabel;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                         SoundCue;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CueSheetName;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.PlayVoiceFromCue
struct ASoundManagerBP_C_PlayVoiceFromCue_Params
{
public:
	class USoundAtomCue*                         Voice_Cue;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.SetSeVolume
struct ASoundManagerBP_C_SetSeVolume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.SetBgmVolume
struct ASoundManagerBP_C_SetBgmVolume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10E (0x10E - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.GetBGMDataById
struct ASoundManagerBP_C_GetBGMDataById_Params
{
public:
	int32                                        BGMID;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFound;                                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F07[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BgmLabel;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Out_Row_ID;                                        // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F08[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAtomCue*                         GetSound;                                          // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x106 (0x106 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.GetBGMDataByLabel
struct ASoundManagerBP_C_GetBGMDataByLabel_Params
{
public:
	class FName                                  BgmLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFound;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F09[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ReturnValue;                                       // 0xC(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Out_Row_ID;                                        // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                         GetSound;                                          // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.GetSECue
struct ASoundManagerBP_C_GetSECue_Params
{
public:
	class FName                                  SELabel;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                         SoundCue;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CueSheetName;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.SetChangeBGM
struct ASoundManagerBP_C_SetChangeBGM_Params
{
public:
	struct FSoundData                            NextChangeBgm;                                     // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x1F0 (0x1F0 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.SetupBGM
struct ASoundManagerBP_C_SetupBGM_Params
{
public:
	class USoundAtomCue*                         Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BgmLabel;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BGMID;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeIn;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOut_;                                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Volume;                                            // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Priority;                                          // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time;                                              // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInterrupt;                                       // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsPlayedMusicRecord;                               // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F0B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoundData                            SoundData;                                         // 0x30(0x48)(Parm, OutParm, ContainsInstancedReference)
};

// 0x4 (0x4 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.UpdateManager
struct ASoundManagerBP_C_UpdateManager_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.InitLastPlayeNormalBGM
struct ASoundManagerBP_C_InitLastPlayeNormalBGM_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F0D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x2 (0x2 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.PauseEnvGaya
struct ASoundManagerBP_C_PauseEnvGaya_Params
{
public:
	bool                                         bBattle;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bEvent;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.ResumeEnvGaya
struct ASoundManagerBP_C_ResumeEnvGaya_Params
{
public:
	bool                                         bBattle;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bEvent;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function SoundManagerBP.SoundManagerBP_C.ExecuteUbergraph_SoundManagerBP
struct ASoundManagerBP_C_ExecuteUbergraph_SoundManagerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


