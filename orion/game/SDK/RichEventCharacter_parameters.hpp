#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.IsFieldNpcCharacter
struct ARichEventCharacter_C_IsFieldNpcCharacter_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.SetFadeMode
struct ARichEventCharacter_C_SetFadeMode_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_158E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeTime;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.UpdateFadeMaterial
struct ARichEventCharacter_C_UpdateFadeMaterial_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.SetFootStepSound
struct ARichEventCharacter_C_SetFootStepSound_Params
{
public:
	bool                                         IgnoreFootStep;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.SetEmotionText
struct ARichEventCharacter_C_SetEmotionText_Params
{
public:
	bool                                         SetBalloon;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_158F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EmotionType;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.GetTextInfo
struct ARichEventCharacter_C_GetTextInfo_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8C (0x8C - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.SetLandPositionAdjustment
struct ARichEventCharacter_C_SetLandPositionAdjustment_Params
{
public:
	bool                                         SetAdjustment;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF0 (0xF0 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.SetCharacterLandPosition
struct ARichEventCharacter_C_SetCharacterLandPosition_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.ChangeCharacterAction
struct ARichEventCharacter_C_ChangeCharacterAction_Params
{
public:
	enum class EKSCharacterAction                ActionLabelName;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1592[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Frame;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAnimationLoop         LoopSetting;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   SetDir;                                            // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.SetTagVoiceText
struct ARichEventCharacter_C_SetTagVoiceText_Params
{
public:
	bool                                         SetVoice;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.Set Up Debug Text
struct ARichEventCharacter_C_Set_Up_Debug_Text_Params
{
public:
	enum class EKSCharacterDir                   SetDir;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.InitTagData
struct ARichEventCharacter_C_InitTagData_Params
{
public:
	class FName                                  AddTagName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.AttachCharacterChangeCollision
struct ARichEventCharacter_C_AttachCharacterChangeCollision_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3EB (0x3EB - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.Change Flipbook
struct ARichEventCharacter_C_Change_Flipbook_Params
{
public:
	enum class EKSCharacterAction                CharacterAction;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   CharaDir;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAnimationLoop         AnimationLoop;                                     // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA9 (0xA9 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.AttachChara
struct ARichEventCharacter_C_AttachChara_Params
{
public:
	class AKSCharacterBase*                      Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   SetDir;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x93 (0x93 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.Set Up Flipbook
struct ARichEventCharacter_C_Set_Up_Flipbook_Params
{
public:
	struct FSoftObjectPath                       TargetObjectPath;                                  // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UPaperFlipbook>         FlipbookObject_Soft;                               // 0x18(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class EKSCharacterAnimationLoop         AnimationLoop;                                     // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.ReceiveTick
struct ARichEventCharacter_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.InitCharacter
struct ARichEventCharacter_C_InitCharacter_Params
{
public:
	class FName                                  CharacterLabel;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   SetDir;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_159E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AddTagName;                                        // 0xC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.AttachPlayer
struct ARichEventCharacter_C_AttachPlayer_Params
{
public:
	enum class EKSCharacterDir                   SetDir;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_159F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LabelName;                                         // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.AttachCharacterAction
struct ARichEventCharacter_C_AttachCharacterAction_Params
{
public:
	enum class EKSCharacterAction                ActionLabelName;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Frame;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAnimationLoop         LoopSetting;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   SetDir;                                            // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.ReceiveEndPlay
struct ARichEventCharacter_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function RichEventCharacter.RichEventCharacter_C.ExecuteUbergraph_RichEventCharacter
struct ARichEventCharacter_C_ExecuteUbergraph_RichEventCharacter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


