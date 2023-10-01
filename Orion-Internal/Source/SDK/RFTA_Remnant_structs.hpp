#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Basic.hpp"
#include "RFTA_GunfireSaveSystem_classes.hpp"
#include "RFTA_CoreUObject_classes.hpp"
#include "RFTA_GunfireRuntime_classes.hpp"
#include "RFTA_OnlineSubsystemUtils_classes.hpp"
#include "RFTA_Engine_classes.hpp"
#include "RFTA_GunfireTechRequirements_classes.hpp"
#include "RFTA_UMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Remnant.EModActiveState
enum class EModActiveState : uint8_t
{
	NotActive                      = 0,
	ActiveAction                   = 1,
	ActiveWeaponMode               = 2,
	EModActiveState_MAX            = 3
};


// Enum Remnant.EPresenceJoinResult
enum class EPresenceJoinResult : uint8_t
{
	Success                        = 0,
	IntroIncomplete                = 1,
	NoCharacters                   = 2,
	ConnectFailed                  = 3,
	EPresenceJoinResult_MAX        = 4
};


// Enum Remnant.EZoneTravelLock
enum class EZoneTravelLock : uint8_t
{
	None                           = 0,
	Menu                           = 1,
	Dialog                         = 2,
	Saving                         = 3,
	TravelMenu                     = 4,
	ConnectingPlayer               = 5,
	Traveling                      = 6,
	Proximity                      = 7,
	Wounded                        = 8,
	QuestInit                      = 9,
	QuestMenu                      = 10,
	EZoneTravelLock_MAX            = 11
};


// Enum Remnant.ETailType
enum class ETailType : uint8_t
{
	NoTail                         = 0,
	HalfTail                       = 1,
	FullTail                       = 2,
	ETailType_MAX                  = 3
};


// Enum Remnant.EPingType
enum class EPingType : uint8_t
{
	Location                       = 0,
	Item                           = 1,
	PrimaryAmmo                    = 2,
	SecondaryAmmo                  = 3,
	Quest                          = 4,
	Friendly                       = 5,
	Enemy                          = 6,
	Checkpoint                     = 7,
	EPingType_MAX                  = 8
};


// Enum Remnant.ERemnantQuestRewardType
enum class ERemnantQuestRewardType : uint8_t
{
	Quest                          = 0,
	Objective                      = 1,
	Individual                     = 2,
	SharedPickup                   = 3,
	ERemnantQuestRewardType_MAX    = 4
};


// Enum Remnant.EGrenadeState
enum class EGrenadeState : uint8_t
{
	Inactive                       = 0,
	Equipping                      = 1,
	Equipped                       = 2,
	Throwing                       = 3,
	Thrown                         = 4,
	EGrenadeState_MAX              = 5
};


// Enum Remnant.EGunObstructionTypes
enum class EGunObstructionTypes : uint8_t
{
	Default                        = 0,
	Extent                         = 1,
	Crouching                      = 2,
	CrouchExtent                   = 3,
	EGunObstructionTypes_MAX       = 4
};


// Enum Remnant.ETraitProgressionType
enum class ETraitProgressionType : uint8_t
{
	LegacyProgression              = 0,
	CharacterProgression           = 1,
	ETraitProgressionType_MAX      = 2
};


// Enum Remnant.EDlcRequirementTypes
enum class EDlcRequirementTypes : uint8_t
{
	None                           = 0,
	DLC1                           = 1,
	DLC2                           = 2,
	DLC101                         = 3,
	EDlcRequirementTypes_MAX       = 4
};


// Enum Remnant.ELastSearchType
enum class ELastSearchType : uint8_t
{
	QuickMatch                     = 0,
	QuickMatchSurvival             = 1,
	Browse                         = 2,
	BrowseSurvival                 = 3,
	ELastSearchType_MAX            = 4
};


// Enum Remnant.EMatchmakingFilterType
enum class EMatchmakingFilterType : uint8_t
{
	CampaignDifficulty             = 0,
	PowerLevel                     = 1,
	CharacterType                  = 2,
	EMatchmakingFilterType_MAX     = 3
};


// Enum Remnant.EMatchmakingEvent
enum class EMatchmakingEvent : uint8_t
{
	ConnectionLost                 = 0,
	SessionLost                    = 1,
	SessionFull                    = 2,
	SessionNonexistant             = 3,
	AlreadyInSession               = 4,
	GenericFailure                 = 5,
	CreateSessionFailed            = 6,
	InternetLost                   = 7,
	FailedToJoinAny                = 8,
	TutorialBeginMsg               = 9,
	TutorialEndMsg                 = 10,
	CouldNotGetAddress             = 11,
	KickedFromSession              = 12,
	BannedFromSession              = 13,
	ChatRestrictions               = 14,
	FriendListFailed               = 15,
	MatchmakingUnavailable         = 16,
	VersionMismatch                = 17,
	Destroying                     = 18,
	ChangeSessionFailed            = 19,
	OfflineSessionStarted          = 20,
	GameModeMismatch               = 21,
	Deceased                       = 22,
	AFK                            = 23,
	InProgress                     = 24,
	MissingDLC                     = 25,
	MissingDLC1                    = 26,
	MissingDLC2                    = 27,
	EMatchmakingEvent_MAX          = 28
};


// Enum Remnant.ESessionType
enum class ESessionType : uint8_t
{
	Public                         = 0,
	FriendsOnly                    = 1,
	Private                        = 2,
	Joined                         = 3,
	ESessionType_MAX               = 4
};


// Enum Remnant.EZoneType
enum class EZoneType : uint8_t
{
	Overworld                      = 0,
	Dungeon                        = 1,
	EZoneType_MAX                  = 2
};


// Enum Remnant.ERemnantCharacterType
enum class ERemnantCharacterType : uint8_t
{
	Standard                       = 0,
	Hardcore                       = 1,
	Survival                       = 2,
	ERemnantCharacterType_MAX      = 3
};


// Enum Remnant.ELastHostType
enum class ELastHostType : uint8_t
{
	FriendsOnly                    = 0,
	Public                         = 1,
	Offline                        = 2,
	ELastHostType_MAX              = 3
};


// Enum Remnant.EGender
enum class EGender : uint8_t
{
	Male                           = 0,
	Female                         = 1,
	EGender_MAX                    = 2
};


// Enum Remnant.ERemnantDemoMode
enum class ERemnantDemoMode : uint8_t
{
	None                           = 0,
	GamesComFloor                  = 1,
	GamesComPress                  = 2,
	ERemnantDemoMode_MAX           = 3
};


// Enum Remnant.ENetGameMode
enum class ENetGameMode : uint8_t
{
	SinglePlayer                   = 0,
	HostPublic                     = 1,
	HostFriends                    = 2,
	Join                           = 3,
	ENetGameMode_MAX               = 4
};


// Enum Remnant.EWorldResetServerState
enum class EWorldResetServerState : uint8_t
{
	Idle                           = 0,
	Pending                        = 1,
	Respawning                     = 2,
	EWorldResetServerState_MAX     = 3
};


// Enum Remnant.EPingGenerationResult
enum class EPingGenerationResult : uint8_t
{
	Success                        = 0,
	PingMuted                      = 1,
	GenericFailure                 = 2,
	EPingGenerationResult_MAX      = 3
};


// Enum Remnant.ETownLock
enum class ETownLock : uint8_t
{
	NoLock                         = 0,
	OnlyTown                       = 1,
	NotInTown                      = 2,
	ETownLock_MAX                  = 3
};


// Enum Remnant.EPingSubRequestType
enum class EPingSubRequestType : uint8_t
{
	PrimaryAmmo                    = 0,
	SecondaryAmmo                  = 1,
	Assistance                     = 2,
	WorldStone                     = 3,
	ThisWay                        = 4,
	LetsGo                         = 5,
	EPingSubRequestType_MAX        = 6
};


// Enum Remnant.EWorldResetPlayerState
enum class EWorldResetPlayerState : uint8_t
{
	Idle                           = 0,
	FadeOutWorldDead               = 1,
	FadeOutWorldRespawned          = 2,
	FadeOutWorldAlive              = 3,
	FadeInWorld                    = 4,
	WaitingForClient               = 5,
	ReadyForReset                  = 6,
	EWorldResetPlayerState_MAX     = 7
};


// Enum Remnant.EPlayerTravelState
enum class EPlayerTravelState : uint8_t
{
	Idle                           = 0,
	PendingTravel                  = 1,
	Traveling                      = 2,
	PostTravel                     = 3,
	WaitingForClientToBeginTravel  = 4,
	WaitingForClientToLoad         = 5,
	WaitingForFinishTravel         = 6,
	LoadingDestinationZone         = 7,
	FinalizingTravel               = 8,
	WaitingForClient               = 9,
	WaitingForServer               = 10,
	WaitingForIntroQuest           = 11,
	PendingCharSwap                = 12,
	EPlayerTravelState_MAX         = 13
};


// Enum Remnant.ESharedPickupType
enum class ESharedPickupType : uint8_t
{
	NoSharedPickup                 = 0,
	SharePickup                    = 1,
	SharePickupAsCurrency          = 2,
	SharePickupAsCurrencySplit     = 3,
	ESharedPickupType_MAX          = 4
};


// Enum Remnant.EOnAddCheatValidationType
enum class EOnAddCheatValidationType : uint8_t
{
	CheckByQuantity                = 0,
	CheckByTime                    = 1,
	EOnAddCheatValidationType_MAX  = 2
};


// Enum Remnant.ERemnantQuestStatus
enum class ERemnantQuestStatus : uint8_t
{
	Unloaded                       = 0,
	Loading                        = 1,
	Loaded                         = 2,
	Error                          = 3,
	ERemnantQuestStatus_MAX        = 4
};


// Enum Remnant.ERemnantQuestDebugState
enum class ERemnantQuestDebugState : uint8_t
{
	None                           = 0,
	Prototype                      = 1,
	WorkInProgress                 = 2,
	Final                          = 3,
	ERemnantQuestDebugState_MAX    = 4
};


// Enum Remnant.ERemnantQuestRarity
enum class ERemnantQuestRarity : uint8_t
{
	Common                         = 0,
	Uncommon                       = 1,
	Rare                           = 2,
	Epic                           = 3,
	Legendary                      = 4,
	ERemnantQuestRarity_MAX        = 5
};


// Enum Remnant.ERemnantQuestType
enum class ERemnantQuestType : uint8_t
{
	Default                        = 0,
	Root                           = 1,
	Static                         = 2,
	ERemnantQuestType_MAX          = 3
};


// Enum Remnant.EQuestMode
enum class EQuestMode : uint8_t
{
	Campaign                       = 0,
	Adventure                      = 1,
	Survival                       = 2,
	Debug                          = 3,
	EQuestMode_MAX                 = 4
};


// Enum Remnant.EDialogTravelLock
enum class EDialogTravelLock : uint8_t
{
	None                           = 0,
	Menu                           = 1,
	Dialog                         = 2,
	TravelMenu                     = 3,
	QuestSelectMenu                = 4,
	EDialogTravelLock_MAX          = 5
};


// Enum Remnant.EModInputMode
enum class EModInputMode : uint8_t
{
	Press                          = 0,
	Release                        = 1,
	EModInputMode_MAX              = 2
};


// Enum Remnant.EZoneStatus
enum class EZoneStatus : uint8_t
{
	Unloaded                       = 0,
	Loading                        = 1,
	LoadingDynamicResources        = 2,
	LoadingDynamicSubResources     = 3,
	WaitingForServerLoading        = 4,
	WaitingForServer               = 5,
	Loaded                         = 6,
	Failed                         = 7,
	EZoneStatus_MAX                = 8
};


// Enum Remnant.EZoneLinkStatus
enum class EZoneLinkStatus : uint8_t
{
	None                           = 0,
	Unloaded                       = 1,
	Loaded                         = 2,
	EZoneLinkStatus_MAX            = 3
};


// Enum Remnant.EZoneLinkType
enum class EZoneLinkType : uint8_t
{
	Link                           = 0,
	Checkpoint                     = 1,
	Waypoint                       = 2,
	EZoneLinkType_MAX              = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Remnant.EmoteIconState
// 0x0020
struct FEmoteIconState
{
	class UClass*                                      Emote;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Icon;                                                     // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Reasons;                                                  // 0x0010(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.EventRegionCharacter
// 0x0018
struct FEventRegionCharacter
{
	class APlayerController*                           Controller;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARemnantCharacter*                           Character;                                                // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARemnantCharacter*                           SpectateCharacter;                                        // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.SpawnedGrenadeRepData
// 0x0020
struct FSpawnedGrenadeRepData
{
	class UClass*                                      GrenadeItemClass;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrenadeLifeSpan;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InitialVelocity;                                          // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Remnant.LootContainerItem
// 0x0010
struct FLootContainerItem
{
	class UClass*                                      ItemBP;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Quantity;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Remnant.LorePage
// 0x0040
struct FLorePage
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Image;                                                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Audio;                                                    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NotifyOnRead;                                             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FName                                       NotifyQuestNameID;                                        // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NotifyQuestEvent;                                         // 0x0034(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubPage;                                                  // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.SessionDetails
// 0x000C
struct FSessionDetails
{
	int                                                PowerLevel;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Difficulty;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CharacterType;                                            // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPresenceContent                                   Location;                                                 // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDlcRequirementTypes                               DlcRequired;                                              // 0x000A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsHighPriority;                                           // 0x000B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.ZoneConnection
// 0x0020
struct FZoneConnection
{
	int                                                FromZone;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTileCoord                                  FromCoord;                                                // 0x0004(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ToZone;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTileCoord                                  ToCoord;                                                  // 0x0014(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.ArchetypeStartingTrait
// 0x0030
struct FArchetypeStartingTrait
{
	int                                                StartingLevel;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       Trait;                                                    // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.GunObstructionParameters
// 0x0054
struct FGunObstructionParameters
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceComplex;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	struct FVector                                     UpwardTraceLocation;                                      // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BaseTraceLocation;                                        // 0x0018(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DownwardTraceLocation;                                    // 0x0024(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MaleOffsets;                                              // 0x0030(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RelativeTraceOffset;                                      // 0x003C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LeftAdditionalTraceOffset;                                // 0x0048(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.PersistentBuff
// 0x0020
struct FPersistentBuff
{
	struct FSoftClassPath                              ActionClass;                                              // 0x0000(0x0018) (BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	float                                              RemainingTime;                                            // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Remnant.SavedEquipmentVisual
// 0x0038
struct FSavedEquipmentVisual
{
	struct FSoftClassPath                              EquipmentPath;                                            // 0x0000(0x0018) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	struct FSoftClassPath                              SkinEquipmentPath;                                        // 0x0018(0x0018) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	unsigned char                                      EquipmentLevel;                                           // 0x0030(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Remnant.AccountAwardInstance
// 0x0010
struct FAccountAwardInstance
{
	class UClass*                                      AccountAward;                                             // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasBeenAwarded;                                          // 0x0008(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsInitialAward;                                          // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct Remnant.AccountCurrencyInstance
// 0x0010
struct FAccountCurrencyInstance
{
	class UClass*                                      CurrencyType;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Remnant.ZoneLinkInfo
// 0x0078
struct FZoneLinkInfo
{
	class AActor*                                      LinkActor;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZoneID;                                                   // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NameID;                                                   // 0x000C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Category;                                                 // 0x0014(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FText                                       Label;                                                    // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>                   Image;                                                    // 0x0038(0x0028) (BlueprintVisible, BlueprintReadOnly, SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EZoneLinkType                                      Type;                                                     // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsActive;                                                 // 0x0061(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Used;                                                     // 0x0062(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0063(0x0001) MISSED OFFSET
	int                                                TileID;                                                   // 0x0064(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DestinationZone;                                          // 0x0068(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DestinationLink;                                          // 0x0070(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.ZoneTravelState
// 0x0018
struct FZoneTravelState
{
	EZoneTravelLock                                    CurrentTravelLock;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsZoneTravelPending;                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              TravelCountdown;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                                ExclusiveTravelMenuPlayer;                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInitializingZones;                                       // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                NumZones;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.ZoneTileDef
// 0x000C
struct FZoneTileDef
{
	int                                                Type;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                X;                                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Y;                                                        // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.PrimaryPingInfo
// 0x0018
struct FPrimaryPingInfo
{
	struct FName                                       SoundSetID;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  WorldIcon;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      WorldObjectColor;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Remnant.ActionPing
// 0x0058
struct FActionPing
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPingType                                          PingType;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UPingSubContext*                             SubContext;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldSpawnPingActor;                                     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class AActor*                                      PingOwner;                                                // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                   // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SpawnedPingActor;                                         // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETailType                                          TailType;                                                 // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UClass*                                      Emote;                                                    // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                PingTimerHandle;                                          // 0x0050(0x0008) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.RemnantQuestRewardItem
// 0x0020
struct FRemnantQuestRewardItem
{
	int                                                ItemID;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewLevel;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuestRewardIndex;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ItemBP;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Remnant.RemnantQuestReward
// 0x0050
struct FRemnantQuestReward
{
	ERemnantQuestRewardType                            RewardType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class ARemnantQuest*                               Quest;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Experience;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FRemnantQuestRewardItem>             Items;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bAutoEquip;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipDuplicates;                                          // 0x0029(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsArchetype;                                             // 0x002A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSaveOnAward;                                             // 0x002B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FSpawnList                                  QuestRewards;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<int>                                        ClearedLoot;                                              // 0x0040(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.RemnantClientInventoryChangeInfo
// 0x0018
struct FRemnantClientInventoryChangeInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Remnant.AutoUpgradeableItem
// 0x0030
struct FAutoUpgradeableItem
{
	TSoftObjectPtr<class UClass>                       ItemClass;                                                // 0x0000(0x0028) (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxUpgrades;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Remnant.CheatProtectedItemParams
// 0x0010
struct FCheatProtectedItemParams
{
	class UClass*                                      ProtectedType;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuantityTolerance;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ValidateOnRemove;                                         // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ValidateOnAdd;                                            // 0x000D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOnAddCheatValidationType                          ValidationType;                                           // 0x000E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
};

// ScriptStruct Remnant.ValidationTrackedItemParams
// 0x0018
struct FValidationTrackedItemParams
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Remnant.ClientValidatedItemInfo
// 0x0028
struct FClientValidatedItemInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Remnant.AddedItemTypeTimeStamp
// 0x0018
struct FAddedItemTypeTimeStamp
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Remnant.ProgressionValidationInfo
// 0x0010
struct FProgressionValidationInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Remnant.RemnantQuestEntityInfo
// 0x00A0
struct FRemnantQuestEntityInfo
{
	struct FSpawnEntry                                 SpawnEntry;                                               // 0x0000(0x0078) (SaveGame, NativeAccessSpecifierPublic)
	struct FPersistenceKey                             Key;                                                      // 0x0078(0x0010) (SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               Destroyed;                                                // 0x0088(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                Seed;                                                     // 0x008C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
};

// ScriptStruct Remnant.RemnantQuestEntry
// 0x00C8
struct FRemnantQuestEntry
{
	class FString                                      ID;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Label;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0040(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UClass>                       QuestBP;                                                  // 0x0068(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemnantQuestType                                  Type;                                                     // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemnantQuestRarity                                Rarity;                                                   // 0x0091(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
	TArray<struct FName>                               QuestTags;                                                // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ParentQuestTags;                                          // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                MaxUsageCount;                                            // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemnantQuestDebugState                            DebugState;                                               // 0x00BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELicensedContent                                   RequiredLicense;                                          // 0x00BD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EQuestMode                                         QuestGameMode;                                            // 0x00BE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x9];                                       // 0x00BF(0x0009) MISSED OFFSET
};

// ScriptStruct Remnant.QuestTileDependency
// 0x0010
struct FQuestTileDependency
{
	struct FName                                       RelativeTileNameID;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinDistance;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxDistance;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.EncounterWave
// 0x0030
struct FEncounterWave
{
	struct FName                                       NameID;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InvokeEventOnWaveStart;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InvokeEventOnWaveComplete;                                // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartDelayMin;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartDelayMax;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SpawnTags;                                                // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.SkyboxModifierVolumeInfo
// 0x0018
struct FSkyboxModifierVolumeInfo
{
	class AActor*                                      ModifierVolume;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              PlayersInVolume;                                          // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.TraitPointValidationInfo
// 0x0018
struct FTraitPointValidationInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Remnant.SpentTraitPointValidationInfo
// 0x0018
struct FSpentTraitPointValidationInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Remnant.TraitValidationInfo
// 0x0018
struct FTraitValidationInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Remnant.LoadableModAsset
// 0x0058
struct FLoadableModAsset
{
	struct FName                                       AssetName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             Asset;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UClass>                       AssetClass;                                               // 0x0020(0x0028) (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Reference;                                                // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ClassReference;                                           // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.SmartAmmo
// 0x0038
struct FSmartAmmo
{
	TSoftObjectPtr<class UClass>                       AmmoType;                                                 // 0x0000(0x0028) (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              QuantityRef;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scalar;                                                   // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuantityMin;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuantityMax;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.ZoneState
// 0x0010
struct FZoneState
{
	EZoneStatus                                        Status;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     LevelOffset;                                              // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.SessionFriendDetails
// 0x0020
struct FSessionFriendDetails
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Remnant.RadialShortcut
// 0x0018
struct FRadialShortcut
{
	struct FName                                       Radial;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Slot;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      ItemBP;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Remnant.BookPage
// 0x0030
struct FBookPage
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Image;                                                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NotifyOnRead;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                SubPage;                                                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LorePage;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Remnant.RemnantCharacterStatData
// 0x0038 (0x0040 - 0x0008)
struct FRemnantCharacterStatData : public FStatData
{
	int                                                ExperienceValue;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HealthMax;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HealthMaxMod;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HealthRegen;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StaminaMax;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaminaRegen;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaminaRegenDelay;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WoundedHealthMax;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WoundedHealthRegen;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WoundedReviveSpeed;                                       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Damage;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageMod;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Defense;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
