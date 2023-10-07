#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x20 (0x20 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.MoveSpeedInHouse
struct AKSPlayerCharacter_C_MoveSpeedInHouse_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetUpMoveSpeedData
struct AKSPlayerCharacter_C_SetUpMoveSpeedData_Params
{
public:
	enum class EMovementMode                     EMovementMode;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NMode;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x158 (0x158 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.Debug_GetDebugFollowInfo
struct AKSPlayerCharacter_C_Debug_GetDebugFollowInfo_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.GetHunterPartnerFbComponent
struct AKSPlayerCharacter_C_GetHunterPartnerFbComponent_Params
{
public:
	class UHunterPartnerFbComponent*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.GetOperationPlayerCameraComponent
struct AKSPlayerCharacter_C_GetOperationPlayerCameraComponent_Params
{
public:
	class UOperationPlayerCameraComponentBase*   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.GetCharacterCollision
struct AKSPlayerCharacter_C_GetCharacterCollision_Params
{
public:
	class UCapsuleComponent*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.ResetCameraPosition
struct AKSPlayerCharacter_C_ResetCameraPosition_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetCineCameraRelativeRotation
struct AKSPlayerCharacter_C_SetCineCameraRelativeRotation_Params
{
public:
	struct FRotator                              Rotator;                                           // 0x0(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.ActionSearch
struct AKSPlayerCharacter_C_ActionSearch_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.OpenFieldCommandPopupWidget
struct AKSPlayerCharacter_C_OpenFieldCommandPopupWidget_Params
{
public:
	bool                                         IgnoreEvent;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.GetCineCameraRelativeTransform
struct AKSPlayerCharacter_C_GetCineCameraRelativeTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetResetCameraPos
struct AKSPlayerCharacter_C_SetResetCameraPos_Params
{
public:
	struct FVector                               ResetPos;                                          // 0x0(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetCameraLockPos
struct AKSPlayerCharacter_C_SetCameraLockPos_Params
{
public:
	struct FVector                               CameraLockPos;                                     // 0x0(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetReturnCameraOffset
struct AKSPlayerCharacter_C_SetReturnCameraOffset_Params
{
public:
	bool                                         LockFlag;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.GetReturnCameraOffset
struct AKSPlayerCharacter_C_GetReturnCameraOffset_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.ChangeTransport
struct AKSPlayerCharacter_C_ChangeTransport_Params
{
public:
	enum class ETRANSPORTATION_TYPE              Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xF6 (0xF6 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.OnComponentBeginOverlap
struct AKSPlayerCharacter_C_OnComponentBeginOverlap_Params
{
public:
	class AActor*                                OtherActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetupCameraLockPosDirectly
struct AKSPlayerCharacter_C_SetupCameraLockPosDirectly_Params
{
public:
	struct FVector                               CameraLockPos;                                     // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCapsuleComponent*                     CharaCapsule;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x171 (0x171 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetLevelLightParam
struct AKSPlayerCharacter_C_SetLevelLightParam_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LevelName;                                         // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1B0 (0x1B0 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetLevelLightParam_InDebug
struct AKSPlayerCharacter_C_SetLevelLightParam_InDebug_Params
{
public:
	float                                        Intencity;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AttenuationRadius;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LightColor;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SourceRadius;                                      // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.GetCameraInitOffset
struct AKSPlayerCharacter_C_GetCameraInitOffset_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.ResetCameraLock
struct AKSPlayerCharacter_C_ResetCameraLock_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xE (0xE - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetMapinPlayerLocation
struct AKSPlayerCharacter_C_SetMapinPlayerLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   CharaDir;                                          // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.GetCameraLockPos
struct AKSPlayerCharacter_C_GetCameraLockPos_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.GetCineCameraWorldLocation
struct AKSPlayerCharacter_C_GetCineCameraWorldLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetCameraDistanceRateToOperationCameraComp
struct AKSPlayerCharacter_C_SetCameraDistanceRateToOperationCameraComp_Params
{
public:
	float                                        CameraDistanceRate;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x13 (0x13 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetupCameraLock
struct AKSPlayerCharacter_C_SetupCameraLock_Params
{
public:
	struct FVector                               LockPos;                                           // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLock;                                             // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUnlock;                                           // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bEnableX;                                          // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bEnableY;                                          // 0xF(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bEnableZ;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAfterLevelChange;                                 // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x12(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.IsPlayerCharacter
struct AKSPlayerCharacter_C_IsPlayerCharacter_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.GetPlayerPropertyComponent
struct AKSPlayerCharacter_C_GetPlayerPropertyComponent_Params
{
public:
	class UPlayerPropertyComponent*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C9 (0x1C9 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.GetTextInfo
struct AKSPlayerCharacter_C_GetTextInfo_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xCC (0xCC - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.UpdateTransportDir
struct AKSPlayerCharacter_C_UpdateTransportDir_Params
{
public:
	enum class EKSCharacterDir                   CharaDir;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETRANSPORTATION_TYPE              TransportType;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11D8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              Particle;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.CalcTransportEffectArrayIndex
struct AKSPlayerCharacter_C_CalcTransportEffectArrayIndex_Params
{
public:
	enum class ETRANSPORTATION_TYPE              Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETRANSPORT_EFFECT                 EffType;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11D9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6C (0x6C - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.GetTransportEffectName
struct AKSPlayerCharacter_C_GetTransportEffectName_Params
{
public:
	enum class ETRANSPORTATION_TYPE              Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETRANSPORT_EFFECT                 EffType;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11DA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EffName;                                           // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x200 (0x200 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.GetTransformTransportEffect
struct AKSPlayerCharacter_C_GetTransformTransportEffect_Params
{
public:
	enum class ETRANSPORTATION_TYPE              Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   CharaDir;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11DC[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
};

// 0x72 (0x72 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.Stop Transport Effect
struct AKSPlayerCharacter_C_Stop_Transport_Effect_Params
{
public:
	enum class ETRANSPORTATION_TYPE              Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETRANSPORT_EFFECT                 EffType;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD3 (0xD3 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.PlayTransportEffect
struct AKSPlayerCharacter_C_PlayTransportEffect_Params
{
public:
	enum class ETRANSPORTATION_TYPE              Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETRANSPORT_EFFECT                 EffType;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.UpdateTransportEffect
struct AKSPlayerCharacter_C_UpdateTransportEffect_Params
{
public:
	enum class ETRANSPORTATION_TYPE              Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETRANSPORT_EFFECT                 EffType;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.Play Transport Effect by Move Mode
struct AKSPlayerCharacter_C_Play_Transport_Effect_by_Move_Mode_Params
{
public:
	enum class EKSCharacterMoveMode              MoveMode;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.GetTransportType
struct AKSPlayerCharacter_C_GetTransportType_Params
{
public:
	enum class ETRANSPORTATION_TYPE              Type;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.ResetIdleParam
struct AKSPlayerCharacter_C_ResetIdleParam_Params
{
public:
	enum class EKSCharacterMoveMode              Action;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.GetTalkingChara
struct AKSPlayerCharacter_C_GetTalkingChara_Params
{
public:
	class AKSCharacterBase*                      Chara;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.IsShopBar
struct AKSPlayerCharacter_C_IsShopBar_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShopBar;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetEnableFCJudge
struct AKSPlayerCharacter_C_SetEnableFCJudge_Params
{
public:
	bool                                         EnableFCJudge;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x169 (0x169 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetLevelLightParam_Internal
struct AKSPlayerCharacter_C_SetLevelLightParam_Internal_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLevelInfoData                        LevelData;                                         // 0x8(0x160)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1B (0x1B - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.IsTalk
struct AKSPlayerCharacter_C_IsTalk_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.BndEvt__KSPlayerCharacter_FadeNpcVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AKSPlayerCharacter_C_BndEvt__KSPlayerCharacter_FadeNpcVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x1C (0x1C - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.BndEvt__KSPlayerCharacter_FadeNpcVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct AKSPlayerCharacter_C_BndEvt__KSPlayerCharacter_FadeNpcVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AKSPlayerCharacter_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.ReceiveTick
struct AKSPlayerCharacter_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetDir
struct AKSPlayerCharacter_C_SetDir_Params
{
public:
	enum class EKSCharacterDir                   EDir;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SetIdle;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AKSPlayerCharacter_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetCharacterEnable
struct AKSPlayerCharacter_C_SetCharacterEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.LadderOffset
struct AKSPlayerCharacter_C_LadderOffset_Params
{
public:
	int32                                        PartyIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   NewDir;                                            // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.SetPartyLadderOffset
struct AKSPlayerCharacter_C_SetPartyLadderOffset_Params
{
public:
	enum class EKSCharacterDir                   NewDir;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.MoveBP
struct AKSPlayerCharacter_C_MoveBP_Params
{
public:
	struct FVector                               VMove;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x459 (0x459 - 0x0)
// Function KSPlayerCharacter.KSPlayerCharacter_C.ExecuteUbergraph_KSPlayerCharacter
struct AKSPlayerCharacter_C_ExecuteUbergraph_KSPlayerCharacter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


