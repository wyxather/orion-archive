#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1C (0x1C - 0x0)
// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.GetCurrentTime
struct ATitleBackgroundMoviePlayer_C_GetCurrentTime_Params
{
public:
	float                                        Current;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Total;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.GetCurrentFrame
struct ATitleBackgroundMoviePlayer_C_GetCurrentFrame_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.Seek
struct ATitleBackgroundMoviePlayer_C_Seek_Params
{
public:
	int32                                        FrameNumber;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.IsPaused
struct ATitleBackgroundMoviePlayer_C_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.Pause
struct ATitleBackgroundMoviePlayer_C_Pause_Params
{
public:
	bool                                         bPause;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.IsWailting
struct ATitleBackgroundMoviePlayer_C_IsWailting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.IsPrepared
struct ATitleBackgroundMoviePlayer_C_IsPrepared_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.SetMovie
struct ATitleBackgroundMoviePlayer_C_SetMovie_Params
{
public:
	int32                                        PlaylistIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.SetPlayList
struct ATitleBackgroundMoviePlayer_C_SetPlayList_Params
{
public:
	TArray<class UManaTexture*>                  MovieList;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.SetImageWidget
struct ATitleBackgroundMoviePlayer_C_SetImageWidget_Params
{
public:
	class UPureImage*                            ImageWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


