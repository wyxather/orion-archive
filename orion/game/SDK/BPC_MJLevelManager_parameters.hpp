#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x4 (0x4 - 0x0)
// Function BPC_MJLevelManager.BPC_MJLevelManager_C.GameOverUIFinishEvent
struct ABPC_MJLevelManager_C_GameOverUIFinishEvent_Params
{
public:
	int32                                        NSelectCursor;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x17 (0x17 - 0x0)
// Function BPC_MJLevelManager.BPC_MJLevelManager_C.IsFadeInAllowed
struct ABPC_MJLevelManager_C_IsFadeInAllowed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BPC_MJLevelManager.BPC_MJLevelManager_C.FinishBattleLevel
struct ABPC_MJLevelManager_C_FinishBattleLevel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BPC_MJLevelManager.BPC_MJLevelManager_C.RequestLoadFieldLevel
struct ABPC_MJLevelManager_C_RequestLoadFieldLevel_Params
{
public:
	class FName                                  Map;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELevelTriggerID                   TriggerID;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Fade;                                              // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ChangeBGM;                                         // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0xB(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC1 (0xC1 - 0x0)
// Function BPC_MJLevelManager.BPC_MJLevelManager_C.SaveVisitedMap_Impl
struct ABPC_MJLevelManager_C_SaveVisitedMap_Impl_Params
{
public:
	class FName                                  LevelId;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Proc_NotifyLevelLoader
struct ABPC_MJLevelManager_C_Proc_NotifyLevelLoader_Params
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELEVEL_TYPE                       LevelType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELevelLoaderNotice                Notice;                                            // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Proc_NotifyLevelTransition
struct ABPC_MJLevelManager_C_Proc_NotifyLevelTransition_Params
{
public:
	class FName                                  LevelId;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELEVEL_TYPE                       LevelType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELevelTransitionNotice            Notice;                                            // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function BPC_MJLevelManager.BPC_MJLevelManager_C.IsRunningFadeOut
struct ABPC_MJLevelManager_C_IsRunningFadeOut_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BPC_MJLevelManager.BPC_MJLevelManager_C.IsRunningFadeIn
struct ABPC_MJLevelManager_C_IsRunningFadeIn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BPC_MJLevelManager.BPC_MJLevelManager_C.StartFadeOut
struct ABPC_MJLevelManager_C_StartFadeOut_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BPC_MJLevelManager.BPC_MJLevelManager_C.StartFadeIn
struct ABPC_MJLevelManager_C_StartFadeIn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BPC_MJLevelManager.BPC_MJLevelManager_C.SaveVisitedMap
struct ABPC_MJLevelManager_C_SaveVisitedMap_Params
{
public:
	class FName                                  SaveLevel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BPC_MJLevelManager.BPC_MJLevelManager_C.ExecuteUbergraph_BPC_MJLevelManager
struct ABPC_MJLevelManager_C_ExecuteUbergraph_BPC_MJLevelManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


