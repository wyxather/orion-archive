#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_OakGame_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"
#include "BL3_GbxUI_classes.hpp"
#include "BL3_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OakCS.EDialogEventEnum
enum class EDialogEventEnum : uint8_t
{
	DE_Introduction                = 0,
	DE_SubmittedPuzzle             = 1,
	DE_IdleLine                    = 2,
	DE_PuzzleComplete              = 3,
	DE_MAX                         = 4
};


// Enum OakCS.ECSScoreCondition
enum class ECSScoreCondition : uint8_t
{
	ParScore                       = 0,
	HighestScore                   = 1,
	UnderParScore                  = 2,
	ECSScoreCondition_MAX          = 3
};


// Enum OakCS.ECSTweenEasingFunc
enum class ECSTweenEasingFunc : uint8_t
{
	Linear                         = 0,
	SmoothStep                     = 1,
	EaseInBack                     = 2,
	EaseOutBack                    = 3,
	EaseInSine                     = 4,
	EaseOutSine                    = 5,
	Sine                           = 6,
	ECSTweenEasingFunc_MAX         = 7
};


// Enum OakCS.ECitizenScienceManagerState
enum class ECitizenScienceManagerState : uint8_t
{
	StreamingManager_Uninitialized = 0,
	StreamingManager_Initialized   = 1,
	StreamingManager_MAX           = 2
};


// Enum OakCS.ECSTutorialElement
enum class ECSTutorialElement : uint8_t
{
	Guideline                      = 0,
	SubmitButton                   = 1,
	ScoreBar                       = 2,
	TokenPool                      = 3,
	ScoreDisplay                   = 4,
	ECSTutorialElement_MAX         = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OakCS.CSLevelInfo
// 0x00E8
struct FCSLevelInfo
{
	struct FName                                       NameId;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      RewardTextureName;                                        // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CharaterTextureName;                                      // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CustomizationTextureName;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CharacterAnimName;                                        // 0x0038(0x0010) (ZeroConstructor, Deprecated)
	struct FText                                       CharacterName;                                            // 0x0048(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       DifficultyLevel;                                          // 0x0060(0x0028) (Edit, DisableEditOnInstance)
	int                                                Target;                                                   // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Reward;                                                   // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HighestScoreMatchedModifier;                              // 0x0080(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                HighestScoreBeatenModifier;                               // 0x0084(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                PuzzleGridHeight;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PuzzleGridWidth;                                          // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TSoftObjectPtr<class UItemPoolData>                CosmeticRewardItemPoolData;                               // 0x0090(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       CosmeticRewardCongratulationMessageTitle;                 // 0x00B8(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       CosmeticRewardCongratulationMessageBody;                  // 0x00D0(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct OakCS.CSPuzzleFeedbackSettings
// 0x0020
struct FCSPuzzleFeedbackSettings
{
	float                                              DelayBeforeFirstFeedback;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeProgressBarFeedback;                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToUpdateProgressBar;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TileSpeed;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECSTweenEasingFunc                                 TileMovementEasingFunction;                               // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              DelayBetweenEachTileFlipped;                              // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelaytBetweenTileFlippingAndPerferctAlignmentAnim;        // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBetweenEachTilePerfectAlignmentAnim;                 // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakCS.CSPuzzleIntroSettings
// 0x0014
struct FCSPuzzleIntroSettings
{
	float                                              DelayBeforeStartingIntro;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBetweenEachPuzzleColumn;                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBetweenEachPuzzleTile;                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECSTweenEasingFunc                                 EasingFunction;                                           // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              FallingSpeed;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakCS.GFxCSTileArray
// 0x0010
struct FGFxCSTileArray
{
	TArray<class UGFxCSPuzzleTile*>                    Tiles;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct OakCS.DebugPuzzle
// 0x0038
struct FDebugPuzzle
{
	class FString                                      PuzzleLines;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      PuzzleGuides;                                             // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                NumberOfTokens;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoringMatchingTile;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoringPerfectAlignment;                                  // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoringParScore;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoringBestScore;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
