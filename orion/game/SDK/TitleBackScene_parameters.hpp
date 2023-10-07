#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x28 (0x28 - 0x0)
// Function TitleBackScene.TitleBackScene_C.SetIsLoop
struct UTitleBackScene_C_SetIsLoop_Params
{
public:
	bool                                         IsLoop;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TitleBackScene.TitleBackScene_C.GetIsLoop
struct UTitleBackScene_C_GetIsLoop_Params
{
public:
	bool                                         IsLoop;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function TitleBackScene.TitleBackScene_C.GetPlayMovieListNight
struct UTitleBackScene_C_GetPlayMovieListNight_Params
{
public:
	TArray<class UManaTexture*>                  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function TitleBackScene.TitleBackScene_C.GetPlayMovieListDay
struct UTitleBackScene_C_GetPlayMovieListDay_Params
{
public:
	TArray<class UManaTexture*>                  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x2B (0x2B - 0x0)
// Function TitleBackScene.TitleBackScene_C.IsAllPlayerPlaying
struct UTitleBackScene_C_IsAllPlayerPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function TitleBackScene.TitleBackScene_C.IsAllPlayerStoped
struct UTitleBackScene_C_IsAllPlayerStoped_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2B (0x2B - 0x0)
// Function TitleBackScene.TitleBackScene_C.IsAnyPlayerEndPlay
struct UTitleBackScene_C_IsAnyPlayerEndPlay_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function TitleBackScene.TitleBackScene_C.Set Movie
struct UTitleBackScene_C_Set_Movie_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function TitleBackScene.TitleBackScene_C.SeekMovie
struct UTitleBackScene_C_SeekMovie_Params
{
public:
	int32                                        FrameNumber;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TitleBackScene.TitleBackScene_C.IsChangingTime
struct UTitleBackScene_C_IsChangingTime_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function TitleBackScene.TitleBackScene_C.IsCreatedPlayers
struct UTitleBackScene_C_IsCreatedPlayers_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function TitleBackScene.TitleBackScene_C.ChangeMovie
struct UTitleBackScene_C_ChangeMovie_Params
{
public:
	enum class ETimeZoneType                     Time;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFast;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsTimeChanged;                                     // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function TitleBackScene.TitleBackScene_C.IsAllPlayerPrepared
struct UTitleBackScene_C_IsAllPlayerPrepared_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function TitleBackScene.TitleBackScene_C.IsAllPlayerValid
struct UTitleBackScene_C_IsAllPlayerValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function TitleBackScene.TitleBackScene_C.IsAllPlayerWaiting
struct UTitleBackScene_C_IsAllPlayerWaiting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function TitleBackScene.TitleBackScene_C.Start
struct UTitleBackScene_C_Start_Params
{
public:
	enum class ETimeZoneType                     Time;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


