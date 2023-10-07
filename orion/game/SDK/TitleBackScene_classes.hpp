#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD2 (0x39A - 0x2C8)
// WidgetBlueprintGeneratedClass TitleBackScene.TitleBackScene_C
class UTitleBackScene_C : public UTitleBackSceneBase
{
public:
	class UWidgetAnimation*                      FadeIn;                                            // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Today;                                             // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ToNight;                                           // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             EXClear;                                           // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             EXClear_Modu;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          FinalChapterClear;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_ExFrameAdd_01;                                 // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_ExFrameAdd_02;                                 // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_ExFrameModu_01;                                // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_ExFrameModu_02;                                // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPureImage*                            MovieImage_Day;                                    // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPureImage*                            MovieImage_Night;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          RightS;                                            // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          SecretBossClear;                                   // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Title_Back_Add;                                    // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Title_Back_Modu;                                   // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UManaTexture*>                  PlayMovieListNight;                                // 0x348(0x10)(Edit, BlueprintVisible)
	int32                                        NowPlayingIndex;                                   // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATitleBackgroundMoviePlayer_C*         DayMoviePlayer;                                    // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATitleBackgroundMoviePlayer_C*         NightMoviePlayer;                                  // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATitleBackgroundMoviePlayer_C*> ActivePlayers;                                     // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        ResumeFrame;                                       // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UManaTexture*>                  PlayMovieListDay;                                  // 0x388(0x10)(Edit, BlueprintVisible)
	enum class ETimeZoneType                     CurrentTime;                                       // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLoop;                                            // 0x399(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UTitleBackScene_C* GetDefaultObj();

	void SetIsLoop(bool IsLoop);
	void GetIsLoop(bool* IsLoop);
	void Debug_PrintCurrentTime();
	TArray<class UManaTexture*> GetPlayMovieListNight();
	TArray<class UManaTexture*> GetPlayMovieListDay();
	void Update();
	void Pause();
	bool IsAllPlayerPlaying();
	void Destruct();
	void Construct();
	void Debug_StateLog();
	bool IsAllPlayerStoped();
	void Stop();
	bool IsAnyPlayerEndPlay();
	void Prepare();
	void Set_Movie(int32 Index);
	void SeekMovie(int32 FrameNumber);
	void PlayMovie();
	bool IsChangingTime();
	bool IsCreatedPlayers();
	void ChangeMovie(enum class ETimeZoneType Time, bool IsFast, bool* IsTimeChanged);
	bool IsAllPlayerPrepared();
	bool IsAllPlayerValid();
	bool IsAllPlayerWaiting();
	void DestoryPlayer();
	void CreatePlayer();
	void ShowExSymbol();
	void End();
	void Start(enum class ETimeZoneType Time);
};

}


