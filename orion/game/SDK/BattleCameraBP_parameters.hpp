#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x61B (0x61B - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.GetCameraInitParameterForAbilityCamera
struct ABattleCameraBP_C_GetCameraInitParameterForAbilityCamera_Params
{
public:
	struct FPostProcessSettings                  OutPostSetting;                                    // 0x0(0x580)(Parm, OutParm)
	struct FCameraFocusSettings                  OutFocusSetting;                                   // 0x580(0x58)(Parm, OutParm)
	struct FCameraFilmbackSettings               OutFilmbackSetting;                                // 0x5D8(0xC)(Parm, OutParm, NoDestructor)
	struct FCameraLensSettings                   OutLensSetting;                                    // 0x5E4(0x18)(Parm, OutParm, NoDestructor)
	float                                        OutCurrentAperture;                                // 0x5FC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutFOV;                                            // 0x600(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x244 (0x244 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.InitReplayCameraPosition
struct ABattleCameraBP_C_InitReplayCameraPosition_Params
{
public:
	enum class EBATTLE_CAMERA_TYPE               InitCameraType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.IsPlaying
struct ABattleCameraBP_C_IsPlaying_Params
{
public:
	bool                                         Playing;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x898 (0x898 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.InitBattleCamera
struct ABattleCameraBP_C_InitBattleCamera_Params
{
public:
	enum class EBATTLE_CAMERA_TYPE               InitCameraType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.StartEnemyDeadSlowMove
struct ABattleCameraBP_C_StartEnemyDeadSlowMove_Params
{
public:
	bool                                         FarCamera;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.StartBreakCamera
struct ABattleCameraBP_C_StartBreakCamera_Params
{
public:
	enum class EBREAK_CAMERA_TYPE                EBreakType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.StartAbilityCamera
struct ABattleCameraBP_C_StartAbilityCamera_Params
{
public:
	int32                                        NBoostLevel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_TARGET_TYPE               ETargetType;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1180[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NSlideFrame;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1181[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActionCommandBase*                    CActionCommand;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnemySide;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsFront;                                          // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1182[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StrAbilityName;                                    // 0x1C(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.InterpolationAbilityCamera
struct ABattleCameraBP_C_InterpolationAbilityCamera_Params
{
public:
	float                                        FRatio;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1183[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACineCameraActor*                      CTargetCamera;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.SetCameraTransform
struct ABattleCameraBP_C_SetCameraTransform_Params
{
public:
	struct FTransform                            CTransform;                                        // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.SetCameraWaitMove
struct ABattleCameraBP_C_SetCameraWaitMove_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.StartResulttCamera
struct ABattleCameraBP_C_StartResulttCamera_Params
{
public:
	enum class EBATTLE_RESULT_TYPE               EResultType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFront;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.SetTargetFocusCamera
struct ABattleCameraBP_C_SetTargetFocusCamera_Params
{
public:
	enum class EBATTLE_TARGET_TYPE               ETargetType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1184[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  CTarget;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.InterpolationBattleCamera
struct ABattleCameraBP_C_InterpolationBattleCamera_Params
{
public:
	class UCurveFloat*                           CInterpolationCurve;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FRatio;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1185[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACineCameraActor*                      CTargetCamera;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.InterpolationResultCamera
struct ABattleCameraBP_C_InterpolationResultCamera_Params
{
public:
	float                                        FRatio;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1186[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACineCameraActor*                      CTargetCamera;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.SetInterpolationCurveForAbilityCamera
struct ABattleCameraBP_C_SetInterpolationCurveForAbilityCamera_Params
{
public:
	class UCurveFloat*                           CInterpolationCurve;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.StartEnemyDeadCamera
struct ABattleCameraBP_C_StartEnemyDeadCamera_Params
{
public:
	enum class EBREAK_CAMERA_TYPE                EBreakType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.PostCameraTick
struct ABattleCameraBP_C_PostCameraTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15B0 (0x15B0 - 0x0)
// Function BattleCameraBP.BattleCameraBP_C.ExecuteUbergraph_BattleCameraBP
struct ABattleCameraBP_C_ExecuteUbergraph_BattleCameraBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


