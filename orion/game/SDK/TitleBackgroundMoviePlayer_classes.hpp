#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x248 - 0x228)
// BlueprintGeneratedClass TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C
class ATitleBackgroundMoviePlayer_C : public ATitleBackgroundMoviePlayerBase
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UManaTexture*>                  Playlist;                                          // 0x230(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPureImage*                            ImageWidget;                                       // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATitleBackgroundMoviePlayer_C* GetDefaultObj();

	void GetCurrentTime(float* Current, float* Total);
	int32 GetCurrentFrame();
	void Prepare();
	void Seek(int32 FrameNumber);
	void TogglePause();
	bool IsPaused();
	void Pause(bool bPause);
	void Stop();
	bool IsWailting();
	bool IsPrepared();
	void PlayPreparedMovie();
	void SetMovie(int32 PlaylistIndex);
	void SetPlayList(TArray<class UManaTexture*>& MovieList);
	void SetImageWidget(class UPureImage* ImageWidget);
};

}


