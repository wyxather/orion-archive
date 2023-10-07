#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xD (0xD - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.Check Character Movement Disable
struct AKSFieldNPCCharacter_C_Check_Character_Movement_Disable_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.GetPlacementFadeComponent
struct AKSFieldNPCCharacter_C_GetPlacementFadeComponent_Params
{
public:
	class UPlacementFadeComponent*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.Set Capsule Collision
struct AKSFieldNPCCharacter_C_Set_Capsule_Collision_Params
{
public:
	enum class ECollisionResponse                CollisionType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.UpdateStateEmotion
struct AKSFieldNPCCharacter_C_UpdateStateEmotion_Params
{
public:
	bool                                         MoveComplete;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableTalk;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableFC;                                          // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECollisionResponse                EnableCollision;                                   // 0x3(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.Is Move Enable
struct AKSFieldNPCCharacter_C_Is_Move_Enable_Params
{
public:
	bool                                         IsMoveEnable;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.IsFieldNpcCharacter
struct AKSFieldNPCCharacter_C_IsFieldNpcCharacter_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.RefreshFadeMaterial
struct AKSFieldNPCCharacter_C_RefreshFadeMaterial_Params
{
public:
	bool                                         bClearMaterialParam;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SetActorHiddenInGameBP
struct AKSFieldNPCCharacter_C_SetActorHiddenInGameBP_Params
{
public:
	bool                                         bNewHidden;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.OnFinishAutoBalloon
struct AKSFieldNPCCharacter_C_OnFinishAutoBalloon_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.CanOpenAutoBalloon
struct AKSFieldNPCCharacter_C_CanOpenAutoBalloon_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x9A (0x9A - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.CanShowGuildIcon
struct AKSFieldNPCCharacter_C_CanShowGuildIcon_Params
{
public:
	bool                                         CamShow;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x71B (0x71B - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.CanPlayEmotionAnimation
struct AKSFieldNPCCharacter_C_CanPlayEmotionAnimation_Params
{
public:
	bool                                         CanPlay;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x798 (0x798 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.CalcEmotionOffset
struct AKSFieldNPCCharacter_C_CalcEmotionOffset_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SetIsFadeChara
struct AKSFieldNPCCharacter_C_SetIsFadeChara_Params
{
public:
	bool                                         IsFadeChara;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SetIsForceSpawn
struct AKSFieldNPCCharacter_C_SetIsForceSpawn_Params
{
public:
	bool                                         IsForceSpawn;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.GetSplineObject
struct AKSFieldNPCCharacter_C_GetSplineObject_Params
{
public:
	class USplineMoveComponent*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2514 (0x2514 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.ReplacePlacementData
struct AKSFieldNPCCharacter_C_ReplacePlacementData_Params
{
public:
	struct FPlacementData                        PlacementData;                                     // 0x0(0x700)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPlacementData                        NewPlacementData;                                  // 0x700(0x700)(Parm, OutParm)
};

// 0x8F8 (0x8F8 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.RefreshCurrentInfo
struct AKSFieldNPCCharacter_C_RefreshCurrentInfo_Params
{
public:
	bool                                         ForceSpawnEmotion;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SkipSpawnEmotion;                                  // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.CallTalkEvent
struct AKSFieldNPCCharacter_C_CallTalkEvent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x929 (0x929 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.ChangeSwoonState
struct AKSFieldNPCCharacter_C_ChangeSwoonState_Params
{
public:
	struct FVector                               SwoonOffsetPos;                                    // 0x0(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                SwoonAction;                                       // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENpcSwoonType                     SwoonType;                                         // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xE(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x91 (0x91 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.GetTextInfo
struct AKSFieldNPCCharacter_C_GetTextInfo_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SequenceRequestCallback
struct AKSFieldNPCCharacter_C_SequenceRequestCallback_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.Idle
struct AKSFieldNPCCharacter_C_Idle_Params
{
public:
	bool                                         Force;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x73F (0x73F - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.UpdateToRequest
struct AKSFieldNPCCharacter_C_UpdateToRequest_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC1 (0xC1 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.UpdateFadeMaterial
struct AKSFieldNPCCharacter_C_UpdateFadeMaterial_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x17 (0x17 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.CheckMoveEnable
struct AKSFieldNPCCharacter_C_CheckMoveEnable_Params
{
public:
	float                                        FDeltaSecond;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableMoving;                                      // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.Check Talk Enable
struct AKSFieldNPCCharacter_C_Check_Talk_Enable_Params
{
public:
	bool                                         EnableTalk;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.UpdateEmotionAndAction
struct AKSFieldNPCCharacter_C_UpdateEmotionAndAction_Params
{
public:
	bool                                         MoveComplete;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x13 (0x13 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.GetPlayerCollisionEnable
struct AKSFieldNPCCharacter_C_GetPlayerCollisionEnable_Params
{
public:
	enum class ECollisionResponse                CollisionEnable;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SetDeliveryItem
struct AKSFieldNPCCharacter_C_SetDeliveryItem_Params
{
public:
	enum class ENPCEVENT_TYPE                    NewParam;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1203[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NewParam1;                                         // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NewParam2;                                         // 0xC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NewParam3;                                         // 0x14(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NewParam4;                                         // 0x1C(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NewParam5;                                         // 0x24(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NewParam6;                                         // 0x2C(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NewParam7;                                         // 0x34(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NewParam8;                                         // 0x3C(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NewParam9;                                         // 0x44(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NewParam10;                                        // 0x4C(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF3D (0xF3D - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SpawnPlacementEmotion
struct AKSFieldNPCCharacter_C_SpawnPlacementEmotion_Params
{
public:
	bool                                         ForceSpawnEmotion;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x83A (0x83A - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.EventTalk
struct AKSFieldNPCCharacter_C_EventTalk_Params
{
public:
	bool                                         IsTalk;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_120F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TalkEventName;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.ReceiveTick
struct AKSFieldNPCCharacter_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SetVisibleHouseChange
struct AKSFieldNPCCharacter_C_SetVisibleHouseChange_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.UpdateMove
struct AKSFieldNPCCharacter_C_UpdateMove_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAC (0xAC - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.BndEvt__KSFieldNPCCharacter_CharaForm_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
struct AKSFieldNPCCharacter_C_BndEvt__KSFieldNPCCharacter_CharaForm_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   HitComponent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NormalImpulse;                                     // 0x18(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            Hit;                                               // 0x24(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x230 (0x230 - 0x0)
// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.ExecuteUbergraph_KSFieldNPCCharacter
struct AKSFieldNPCCharacter_C_ExecuteUbergraph_KSFieldNPCCharacter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


