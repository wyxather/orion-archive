#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_LevelSequence_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_MovieScene_classes.hpp"
#include "BL3_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxLevelSequence.GbxLevelSequenceBindingSlot
// 0x0050
struct FGbxLevelSequenceBindingSlot
{
	struct FGuid                                       BindingID;                                                // 0x0000(0x0010) (IsPlainOldData)
	class FString                                      BindingName;                                              // 0x0010(0x0010) (ZeroConstructor)
	class UClass*                                      BindingClass;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       BoundActor;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0030(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (IsPlainOldData)
	ESpawnOwnership                                    SpawnOwnership;                                           // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct GbxLevelSequence.GbxLevelSequenceBoundActorSlot
// 0x0018
struct FGbxLevelSequenceBoundActorSlot
{
	struct FGuid                                       BindingID;                                                // 0x0000(0x0010) (IsPlainOldData)
	TWeakObjectPtr<class AActor>                       BoundActor;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
