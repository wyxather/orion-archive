#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x258 (0x340 - 0xE8)
// Class CriWareMovieScenes.MovieSceneAtomSection
class UMovieSceneAtomSection : public UMovieSceneSection
{
public:
	class USoundAtomCue*                         Sound;                                             // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xF0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_161[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               SoundVolume;                                       // 0xF8(0xA0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               PitchMultiplier;                                   // 0x198(0xA0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneActorReferenceData         AttachActorData;                                   // 0x238(0xB0)(NativeAccessSpecifierPrivate)
	TArray<struct FScalarParameterNameAndCurve>  ScalarParameterNamesAndCurves;                     // 0x2E8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bSuppressSubtitles;                                // 0x2F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOverrideAttenuation;                              // 0x2F9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_162[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x300(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bContinueSoundWhenSequenceIsEnd;                   // 0x308(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_163[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                AsrRackIDs;                                        // 0x310(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FAtomSelectorParam>            SelectorLabels;                                    // 0x320(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bLooping;                                          // 0x330(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_164[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneAtomSection* GetDefaultObj();

	void SetStartOffset(const struct FFrameNumber& InStartOffset);
	bool IsLooping();
	struct FFrameNumber GetStartOffset();
};

// 0x18 (0xA8 - 0x90)
// Class CriWareMovieScenes.MovieSceneAtomTrack
class UMovieSceneAtomTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_172[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            AtomSections;                                      // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneAtomTrack* GetDefaultObj();

};

// 0x30 (0x118 - 0xE8)
// Class CriWareMovieScenes.MovieSceneManaSection
class UMovieSceneManaSection : public UMovieSceneSection
{
public:
	class UManaSource*                           ManaSource;                                        // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLooping;                                          // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameNumber                          StartFrameOffset;                                  // 0xF4(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UManaTexture*                          ManaTexture;                                       // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAtomComponent*                        AtomComponent;                                     // 0x100(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseExternalManaPlayer;                            // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UManaPlayer*                           ExternalManaPlayer;                                // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneManaSection* GetDefaultObj();

};

// 0x40 (0xD0 - 0x90)
// Class CriWareMovieScenes.MovieSceneManaTrack
class UMovieSceneManaTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_188[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            ManaSections;                                      // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMovieSceneAtomTrack>   SyncedAtomTrack;                                   // 0xA8(0x28)(ExportObject, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneManaTrack* GetDefaultObj();

};

}


