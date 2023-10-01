#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Master_Player_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Master_Player.Character_Master_Player_C
// 0x06C1 (0x1391 - 0x0CD0)
class ACharacter_Master_Player_C : public ARemnantCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_BreatheVapor;                                           // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Thigh_R;                                              // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Thigh_L;                                              // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantProgressionComponent*                Progression;                                              // 0x0CF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantTraitsComponent*                     Traits;                                                   // 0x0CF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               WeaponCast;                                               // 0x0D00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        MiniMapUICamera;                                          // 0x0D08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantStateCameraComponent*                RemnantStateCamera;                                       // 0x0D10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            BendableFoliageLocation;                                  // 0x0D18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioCurveSourceComponent*                  Audio_VO;                                                 // 0x0D20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Visual_Voice;                                             // 0x0D28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Visual_Shield;                                            // 0x0D30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Visual_Backpack;                                          // 0x0D38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Visual_Armor;                                             // 0x0D40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Visual_Legs;                                              // 0x0D48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Visual_Hair;                                              // 0x0D50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Visual_Helmet;                                            // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Visual_FacialHair;                                        // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Visual_Chin;                                              // 0x0D68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Visual_Mustache;                                          // 0x0D70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Visual_Beard;                                             // 0x0D78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Visual_Eyebrows;                                          // 0x0D80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Visual_Head;                                              // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Chest;                                                // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_Aim;                                                  // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Player_Revive_SC;                                         // 0x0DA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWoundedComponent*                           Wounded;                                                  // 0x0DA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPersistenceKeysComponent*                   PersistenceKeys;                                          // 0x0DB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio;                                                    // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantSilhouetteComponent*                 RemnantSilhouette;                                        // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Head;                                                 // 0x0DC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             HomingTargetLocation;                                     // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               WeaponPhantom_Melee_LegR_02;                              // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               WeaponPhantom_Melee_LegR_01;                              // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               WeaponPhantom_Melee_R;                                    // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               WeaponPhantom_Melee_L;                                    // 0x0DF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_RadialShortcutComponent_C*               RadialShortcuts;                                          // 0x0DF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             _1R_Stow_01;                                              // 0x0E00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ContextualDialogComponent_C*             ContextualDialog;                                         // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Legs;                                                 // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Root;                                                 // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDissolveComponent*                          Dissolve;                                                 // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnant_SpectatorTarget_C*                  Remnant_SpectatorTarget;                                  // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_ForeArm_R;                                            // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Hand_L;                                               // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_ForeArm_L;                                            // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Upper_Arm_L;                                          // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Mid_Chest;                                            // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Collar;                                               // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Upper_Arm_R;                                          // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Hand_R;                                               // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               CrouchExtend;                                             // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTweenComponent*                             Tween;                                                    // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVitalityComponent*                          SpecialAmmo;                                              // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVitalityComponent*                          LongGunAmmo;                                              // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVitalityComponent*                          HandGunAmmo;                                              // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMiniMap_Remnant_C*                          MiniMap_Remnant;                                          // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Mus_Stinger_Death_SC;                                     // 0x0EA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVitalityComponent*                          Stamina;                                                  // 0x0EA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TutorialComponent_C*                     Tutorial;                                                 // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFallDamageComponent*                        FallDamage;                                               // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWaterFXComponent*                           WaterFX;                                                  // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Visual_Body;                                              // 0x0EC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Player_Heartbeat_Fast_SC;                                 // 0x0ED0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Player_Heartbeat_Slow_SC;                                 // 0x0ED8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             FlashlightAttach;                                         // 0x0EE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTargetLockComponent*                        TargetLock;                                               // 0x0EE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       ItemHighlightPostProcess;                                 // 0x0EF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextDebugComponent*                         TextDebug;                                                // 0x0EF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    EnvironmentDust;                                          // 0x0F00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow1;                                                   // 0x0F08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             ThrowProjectile;                                          // 0x0F10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundSetComponent*                          SoundSet;                                                 // 0x0F18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Melee_Attach;                                             // 0x0F20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Melee_Attach_Alt;                                         // 0x0F28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             _1M_Stow_02;                                              // 0x0F30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             _1M_Stow_01;                                              // 0x0F38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Gun_Attach_Alt;                                           // 0x0F40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Gun_Attach;                                               // 0x0F48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             _2R_Stow_02;                                              // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             _2R_Stow_01;                                              // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             _1R_Stow_02;                                              // 0x0F60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               WeaponPhantom_Body;                                       // 0x0F68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTargetingComponent*                         Targeting;                                                // 0x0F70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        ItemAttach;                                               // 0x0F78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInputStateComponent*                        InputState;                                               // 0x0F80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAttributesComponent*                        Attributes;                                               // 0x0F88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCraftingComponent*                          Crafting;                                                 // 0x0F90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVariableComponent*                          Variable;                                                 // 0x0F98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStateMachineComponent*                      StateMachine;                                             // 0x0FA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               AimCast;                                                  // 0x0FA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               God_Mode;                                                 // 0x0FA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0FAA(0x0002) MISSED OFFSET
	int                                                BleedDots;                                                // 0x0FAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AInteractive_Waypoint_C*                     CurrentWaypoint;                                          // 0x0FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AInteractive_Checkpoint_C*                   CurrentCheckpoint;                                        // 0x0FB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PrevAggroGroup;                                           // 0x0FC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Untargetable;                                             // 0x0FC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0FC9(0x0007) MISSED OFFSET
	class AMiniMap_Display_RevealMap_C*                CurrentMiniMap;                                           // 0x0FD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    FX_ReviveLoop;                                            // 0x0FD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CheckpointBeginCheckCount;                                // 0x0FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0FE4(0x0004) MISSED OFFSET
	struct FTimerHandle                                DeferredCheckpointBeginHandle;                            // 0x0FE8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                NumCheckpointsUsed;                                       // 0x0FF0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WeakspotKills;                                            // 0x0FF4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredWeakspotKills;                                    // 0x0FF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumRevives;                                               // 0x0FFC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredRevives;                                          // 0x1000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UsedShard;                                                // 0x1004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               IsPlayingConsole;                                         // 0x1005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData03[0x2];                                       // 0x1006(0x0002) MISSED OFFSET
	int                                                ScrapPickedUp;                                            // 0x1008(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredScrapPickUp;                                      // 0x100C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                UnawareEnemiesKilled;                                     // 0x1010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredUnawareEnemiesKilled;                             // 0x1014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumTimesDownedByTeammates;                                // 0x1018(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredNumTimesDownedByTeammates;                        // 0x101C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumTimesRevived;                                          // 0x1020(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredNumTimesRevived;                                  // 0x1024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UClass>>               WeaponKillRecords;                                        // 0x1028(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	int                                                RequiredWeaponsWithKills;                                 // 0x1038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredKills;                                            // 0x103C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredWeapons;                                          // 0x1040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x4];                                       // 0x1044(0x0004) MISSED OFFSET
	TArray<int>                                        WeaponKillCounts;                                         // 0x1048(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	bool                                               InspectableTextAutoOpen;                                  // 0x1058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData05[0x7];                                       // 0x1059(0x0007) MISSED OFFSET
	TArray<struct FAchievement_Armor_Set>              Armor_Sets;                                               // 0x1060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PreOrdered___Twitch;                                      // 0x1070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PreOrdered___Steam;                                       // 0x1071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PreOrdered___Doomsayer;                                   // 0x1072(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PreOrdered___Survivor;                                    // 0x1073(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PreOrdered___Gladiator;                                   // 0x1074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PreOrdered___Nightstalker;                                // 0x1075(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InCheckpointMenu;                                         // 0x1076(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShowAdvanceStats;                                         // 0x1077(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               Survivor_Bag_Used;                                        // 0x1078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               PreOrdered___Xbox;                                        // 0x1079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PreOrdered___GameAwards;                                  // 0x107A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData06[0x5];                                       // 0x107B(0x0005) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       Twitch___Flight_Team_Cap;                                 // 0x1080(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       Steam___Bomber_Hat;                                       // 0x10A8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       Gladiator_Head;                                           // 0x10D0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       Gladiator_Body;                                           // 0x10F8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       Gladiator_Legs;                                           // 0x1120(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       Doomsayer_Head;                                           // 0x1148(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       Doomsayer_Body;                                           // 0x1170(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       Doomsayer_Legs;                                           // 0x1198(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       Nightstalker_Head;                                        // 0x11C0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       Nightstalker_Body;                                        // 0x11E8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       Nightstalker_Legs;                                        // 0x1210(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       Survivor_Bag;                                             // 0x1238(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       GameAwards___BomberHat;                                   // 0x1260(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                ActionIDFogDoor;                                          // 0x1288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InPingMenu;                                               // 0x128C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData07[0x3];                                       // 0x128D(0x0003) MISSED OFFSET
	struct FTimerHandle                                PingTimerHandle;                                          // 0x1290(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire*                           HiFiveOther;                                              // 0x1298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnMutedPing;                                              // 0x12A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class UClass>                       Xbox___BomberHat;                                         // 0x12B0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                DogPetCounter;                                            // 0x12D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData08[0x4];                                       // 0x12DC(0x0004) MISSED OFFSET
	TArray<struct FAchievement_Armor_Skin_Set>         Armor_Skin_Sets;                                          // 0x12E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CryptolithPhase;                                          // 0x12F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData09[0x4];                                       // 0x12F4(0x0004) MISSED OFFSET
	class UClass*                                      DragonHeartBP;                                            // 0x12F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemQuerySortMethod                               PreferredInventorySort;                                   // 0x1300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1301(0x0003) MISSED OFFSET
	int                                                SummonKills;                                              // 0x1304(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredSummonKills;                                      // 0x1308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData11[0x4];                                       // 0x130C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CurrentSummons;                                           // 0x1310(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               VaborActive;                                              // 0x1320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData12[0x7];                                       // 0x1321(0x0007) MISSED OFFSET
	TArray<TSoftObjectPtr<class UObject>>              StoredRecorders;                                          // 0x1328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	float                                              PerfectDodgeSpawnRate;                                    // 0x1338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ArmoredDamageDealt;                                       // 0x133C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RequiredArmoredDamageDealt;                               // 0x1340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData13[0x4];                                       // 0x1344(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ExplosiveDamageTypes;                                     // 0x1348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ExplosiveDamageKills;                                     // 0x1358(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredExplosiveDamageKills;                             // 0x135C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NonLethalFallDamageTaken;                                 // 0x1360(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RequiredNonLethalFallDamageTaken;                         // 0x1364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BasicRangedWeaponModsAcquired;                            // 0x1368(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredBasicRangedWeaponModsAcquired;                    // 0x136C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VaultCount;                                               // 0x1370(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredVaultCount;                                       // 0x1374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StatusEffectsApplied;                                     // 0x1378(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredStatusEffectsApplied;                             // 0x137C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ConsumableCleansedStatusEffects;                          // 0x1380(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredConsumableCleansedStatusEffects;                  // 0x1384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DogPetCounterDelay;                                       // 0x1388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredDogPetCounter;                                    // 0x138C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasEquippedHarsgaardRootGun;                              // 0x1390(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Master_Player.Character_Master_Player_C");
		return ptr;
	}


	void GetPhase(int* Out);
	bool CanDoCharacterRevive(class UWoundedComponent** WoundedComponent);
	bool CanDoItemInteraction(class AItem** Item);
	bool CanDoStateInteraction(class UStateMachineComponent** StateMachine, struct FName* StateName);
	void UnlockFlashCastorTrait();
	void PlayVaporEffect();
	void GetCurrentOrDeadController(class AController** Controller);
	void UnlinkSummon(class AActor** Summon, TEnumAsByte<EEndPlayReason>* EndReason);
	void LinkSummon(class AActor** Summon);
	void UpdateAccountCurrency();
	void ListenForAccountCurrencyChanges(class UClass** ItemBP, int* OverrideQuantity);
	void CanShowQuestInventory(bool* CanShow);
	void Get_Armor_Skin_Sets_Acquired(int* Armor_Skin_Sets_Acquired);
	void ActivateHandGun();
	void DLC___Award_Gold();
	void DLC___Award_Xbox();
	void OnPostPingMenuLockEnded();
	void OnPingMenuEnded(struct FName* Result);
	void CanHighFive(bool* Out);
	void ActivateLongGun();
	void CanPing(bool* CanPing);
	void CanShowPingMenu(bool* Can_Show);
	void DLC___Award_Steam();
	void Get_Highest_Boss_Weapon_Level(int* Highest_Boss_Weapon_Level);
	void DLC_Logging(class FString* String);
	void GetTPSHud(class ATPSHud_C** TPSHud);
	void UpdateBendableFoilage();
	void RemoveActionsOnReset();
	void IsHoldingInteractButton(bool* Out);
	void HasUnspentTraitPoints(bool* Out);
	void DLC___Award_Survivor();
	void DLC___Award_Nightstalker();
	void DLC___Award_Gladiator();
	void DLC___Award_Doomsayer();
	void DLC___Remove_DLC_Items_Player_Should_Not_Have();
	void DLC___Award_Twitch();
	void Get_Total_Weapon_Mods(class UClass** AddedModBP, int* Total_Weapon_Mods);
	void Get_Armor_Sets_Acquired(int* Armor_Sets_Acquired);
	void Get_Highest_Weapon_Level(int* Highest_Weapon_Level);
	void GetPlayerController(class APlayerController** Out);
	void Get_Highest_Trait_Level(int* Highest_Trait_Level);
	void HasSpentTraitPoint(bool* Out);
	void IncrementWeaponKill(class AActor** Cause);
	void CheckNumKills();
	void CheckNumWeapons();
	void TryUnlockTraits();
	void AllowWeaponSwap(bool* Out);
	void ReplenishResourcesShard(bool* Health, bool* Ammo, bool* DragonHearts);
	void IsDemo(bool* Out);
	void HasUnusedWeaponMods(bool* Out);
	void InTown(bool* Out);
	void IncrementNumCheckpointsUsed();
	void CanCraftWeaponMod(bool* Out);
	void CanUpgrade(bool* Out);
	void ClearMiniMap();
	void Set_DragonHeart_Quantity(class UObject** Object);
	void EndUseCheckpoint();
	void UpdateDisplayLevel();
	void LockMiniMap();
	void GiveMaterials();
	void Lock_Position(bool* enable);
	void IsTraveling(bool* Traveling);
	void Get_Hud_Widget(class UWidget_HUD_C** HudWidget);
	void Reset_Minimap();
	void ReplenishResources(bool* Health, bool* Ammo, bool* DragonHearts, bool* ModPower);
	void FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
	void AllowAction(bool* Out);
	void OnFailure_B965762A445B982708DF2D8FEEDBC3E2(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_B965762A445B982708DF2D8FEEDBC3E2(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_04E1D90C4785AB7500A9C4BD5BE4C84B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_04E1D90C4785AB7500A9C4BD5BE4C84B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_744C71424FAEFE20C17A84A02737DAD7(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_744C71424FAEFE20C17A84A02737DAD7(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_5B892AD148B8A7E4AE0373B595B54D75(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_5B892AD148B8A7E4AE0373B595B54D75(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_4B4588704DF8E6E4EC7A40A9B7AA37D9(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_4B4588704DF8E6E4EC7A40A9B7AA37D9(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_5E04062640ABD461EA31B792B4659C7F(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_5E04062640ABD461EA31B792B4659C7F(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_14840F50467879E63F4FC8BBF4158F11(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_14840F50467879E63F4FC8BBF4158F11(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_B3F0A23548B1471DE982029336B3238A(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_B3F0A23548B1471DE982029336B3238A(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_6DA9194F48388CE31CA7DCBC6FA2C8F6(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_6DA9194F48388CE31CA7DCBC6FA2C8F6(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_64CE77C3491A077E1BB3CCB9ABEB390C(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_64CE77C3491A077E1BB3CCB9ABEB390C(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_64629C8140FC7F24E521E99EAAF74C4B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_64629C8140FC7F24E521E99EAAF74C4B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_D212BFC048A1255C560CBBBD13D96EDA(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_D212BFC048A1255C560CBBBD13D96EDA(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_06C191CA4361D74F447A59BC1DF8DE1A(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_06C191CA4361D74F447A59BC1DF8DE1A(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_E43E11DF45EA2007993D4E92724C4FC2(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_E43E11DF45EA2007993D4E92724C4FC2(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_39ADB5624FB857C60172D5B95C6ECEAC(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_39ADB5624FB857C60172D5B95C6ECEAC(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_5A87EB2F4B337BA5BA86699897E4B9F8(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_5A87EB2F4B337BA5BA86699897E4B9F8(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_D6DB88DF4493C5760967508B47A06AB3(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_D6DB88DF4493C5760967508B47A06AB3(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_8F2349F443528EB971D9D28ABCA8F70F(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_8F2349F443528EB971D9D28ABCA8F70F(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_C37F6928477ED7394B76848A247D809F(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_C37F6928477ED7394B76848A247D809F(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_EF5700BD42FEE53DF81784AB624E114B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_EF5700BD42FEE53DF81784AB624E114B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_A7C6D7124B54BD212A425F8222BB92EB(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_A7C6D7124B54BD212A425F8222BB92EB(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_A6F3616442127DE33894FBAEE666DDD8(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_A6F3616442127DE33894FBAEE666DDD8(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void InpActEvt_ToggleWeapon_K2Node_InputActionEvent_15(struct FKey* Key);
	void InpActEvt_QuickSelect1_K2Node_InputActionEvent_14(struct FKey* Key);
	void InpActEvt_QuickSelect2_K2Node_InputActionEvent_13(struct FKey* Key);
	void InpActEvt_QuickSelect3_K2Node_InputActionEvent_12(struct FKey* Key);
	void InpActEvt_QuickSelect4_K2Node_InputActionEvent_11(struct FKey* Key);
	void InpActEvt_Ping_K2Node_InputActionEvent_10(struct FKey* Key);
	void InpActEvt_Ping_K2Node_InputActionEvent_9(struct FKey* Key);
	void InpActEvt_GodMode_K2Node_InputActionEvent_8(struct FKey* Key);
	void InpActEvt_ToggleUntargetable_K2Node_InputActionEvent_7(struct FKey* Key);
	void InpActEvt_DebugHurtSelf_K2Node_InputActionEvent_6(struct FKey* Key);
	void InpActEvt_DebugKillSelf_K2Node_InputActionEvent_5(struct FKey* Key);
	void InpActEvt_ResourceHack_K2Node_InputActionEvent_4(struct FKey* Key);
	void InpActEvt_GiveCraftingMaterials_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_SkipIntro_K2Node_InputActionEvent_2(struct FKey* Key);
	void OnLoaded_E0E805FD4AD71513D4F4B691FA157880(class UClass** Loaded);
	void InpActEvt_DebugInterruptSelf_K2Node_InputActionEvent_1(struct FKey* Key);
	void StartHighFive();
	void StopHighFive();
	void OnHighFiveSuccess();
	void ClientGiveWaveEmote();
	void EnterBarrier(class ABP_EventRegionBarrier_C** Barrier);
	void ExitBarrier(class ABP_EventRegionBarrier_C** Barrier);
	void PlayBarrierFX(class ABP_EventRegionBarrier_C** Barrier);
	void MulticastPlayBarrierFX(class ABP_EventRegionBarrier_C** Barrier);
	void ServerPlayBarrierFX(class ABP_EventRegionBarrier_C** Barrier);
	void OnEnterBarrier(class ABP_DreamerEventRegionBarrier_C** Barrier);
	void OnExitBarrier(class ABP_DreamerEventRegionBarrier_C** Barrier);
	void Validate_DLC();
	void SurvivorBagUsed();
	void OnLocallyControlled();
	void Add_DLC_Item(TSoftObjectPtr<class UClass>* Item);
	void Server_Remove_DLC_Item(TSoftObjectPtr<class UClass>* Item);
	void Give_DLC();
	void Server_InitializeAccountCurrency(class UClass** ItemBP, int* Quantity);
	void SetPhase(int* NewPhase);
	void CheckAccountCurrency();
	void IPetADog();
	void Update_Achievement_Progress___Items(class UClass** Item_BP, int* Quantity, EItemNotifyReason* Reason);
	void Update_Achievement_Progress___Loot(int* Quantity);
	void Update_Achievement_Progress___Weapon_Mods(class UClass** NewModBP);
	void Update_Achievement_Progress___Armor_Sets();
	void Update_Achievement_Progress___Trait_Added();
	void Update_Achievement_Progress___Trait_Level();
	void Update_Achievement_Progress___Upgrade_Item(class UClass** Item_BP, int* Level);
	void Update_Achievement_Progress___Crafted_Item(class UClass** Item_BP);
	void Check_Dragon_Heart_Count();
	void Update_Achievement_Progress___Armor_Skin_Sets();
	void OnCheckHarsgaardRecorders(TSoftObjectPtr<class UObject>* NewItem);
	void OnChromaDamage(struct FDamageInfo* DamageInfo);
	void BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryPickupItem__DelegateSignature(class UClass** ItemBP, int* Quantity, int* Level, EItemNotifyReason* Reason);
	void BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryItemLeveledUp__DelegateSignature(int* ItemID);
	void TryUnlockWeaponTraits(int* ItemID);
	void BndEvt__Wounded_K2Node_ComponentBoundEvent_1_OnWoundedDelegate__DelegateSignature(struct FDamageInfo* Damage);
	void BndEvt__Wounded_K2Node_ComponentBoundEvent_4_OnRevivedDelegate__DelegateSignature(bool* bSelfRevive);
	void ListenForClientHits();
	void OnClientHitTarget(struct FDamageInfo* DamageInfo);
	void BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryPickupItem__DelegateSignature(class UClass** ItemBP, int* Quantity, int* Level, EItemNotifyReason* Reason);
	void BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_7_OnTraitDelegate__DelegateSignature(class UClass** Trait);
	void BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_8_OnTraitLevelChangedDelegate__DelegateSignature(class UClass** Trait, int* PreviousLevel);
	void OnSummonKilledTarget();
	void ListenForClientDamageTaken();
	void OnTakeDamage(struct FDamageInfo* DamageInfo);
	void ListenForClientStateChange();
	void OnClientStateChange(struct FName* StateName, struct FName* PreviousStateName);
	void RegisterStatusEffectApplied();
	void RegisterStatusEffectConsumableCleansed();
	void BndEvt__Wounded_K2Node_ComponentBoundEvent_0_WoundedStateDelegate__DelegateSignature(class UWoundedComponent** WoundedComponent, EWoundedState* State);
	void OnReviveFXStart();
	void OnReviveFXStop();
	void OnPingHeld();
	void ManualWeaponToggle();
	void DelaySetVisible(float* Delay);
	void BndEvt__Inventory_K2Node_ComponentBoundEvent_2_InventoryChangedDelegate__DelegateSignature();
	void OnEmoteNo();
	void OnEmoteYes();
	void OnEmoteWave();
	void OnEmoteCheer();
	void OnEmoteBeckon();
	void OnEmoteFail();
	void OnEmoteExhausted();
	void OnEmoteLaugh();
	void OnActivate();
	void OnUsed(class AEquipment** Item);
	void BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryAddItem__DelegateSignature(class UClass** ItemBP, int* Quantity);
	void Give_Liquid_Escape();
	void OnClientAddAccountCurrency(class UClass** ItemBP, int* Quantity);
	void UseCheckpoint(class AInteractive_Checkpoint_C** Checkpoint);
	void CheckpointBegin();
	void CheckpointEnd();
	void EventOnDialogResult(struct FName* Result);
	void OnFortifyFailed();
	void OnSpawnedAtCheckpoint(class AInteractive_Checkpoint_C** Checkpoint);
	void ClientSpawnedAtCheckpoint(class AInteractive_Checkpoint_C** Checkpoint);
	void DeferredCheckpointBegin();
	void TryBeginCheckpoint();
	void ServerFinishLoad();
	void ShowCheckpointMenu();
	void GodMode(bool* NewGodMode);
	void SetUntargetable(bool* NewUntargetable);
	void DebugDamageSelf(float* Amount, int* PowerOverride);
	void DebugResourceHack();
	void DebugGiveMaterials();
	void ServerUnequipMod(int* ItemID);
	void ServerEquipMod(int* ItemID, int* ModItemID);
	void AddCheckpointNotification(struct FName* NameID, float* TimeOverride);
	void RemoveCheckpointNotification(struct FName* NameID);
	void ClearAllCheckpointNotifications();
	void ServerZoneDoorFailedNotify(class ARemnantCharacter** Player, struct FName* NameID);
	void MulticastZoneDoorFailedNotify(class ARemnantCharacter** Player, struct FName* NameID);
	void LocalZoneDoorFailedNotify(class ARemnantCharacter** Player, struct FName* NameID);
	void ClientToServerApplyDamage(class AActor** CauseActor, float* Damage, float* DamageScalar, int* PowerOverride, class UClass** DamageType);
	void ApplyDamage_ClientAuthoritative(class AActor** CauseActor, float* Damage, float* DamageScalar, int* PowerOverride, class UClass** DamageType);
	void MarkHarsgaardRootGunObtained();
	void ReceiveBeginPlay();
	void OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Actor);
	void OnCameraOrientLeft();
	void OnCameraOrientRight();
	void OnWallEnter();
	void OnWallExit();
	void OnRespawnAfterDeath();
	void OnNotifyTakeDamage_Event_1(struct FDamageInfo* DamageInfo);
	void BndEvt__FallDamage_K2Node_ComponentBoundEvent_0_OnFallDamageDelegate__DelegateSignature(float* Damage);
	void BndEvt__FallDamage_K2Node_ComponentBoundEvent_1_OnFallDamageDelegate__DelegateSignature(float* Damage);
	void BndEvt__RemnantProgression_K2Node_ComponentBoundEvent_0_LevelUpDelegate__DelegateSignature();
	void OnTeleportOut();
	void OnTeleportIn();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void BndEvt__MiniMap_Remnant_K2Node_ComponentBoundEvent_0_LevelChangedEvent__DelegateSignature(int* NewLevel, int* PreviousLevel);
	void OnCrouchFoleyEnter();
	void OnCrouchFoleyExit();
	void OnAimFoleyEnter();
	void OnAimFoleyExit();
	void BndEvt__Wounded_K2Node_ComponentBoundEvent_3_WoundedComponentDelegate__DelegateSignature(class UWoundedComponent** WoundedComponent);
	void OnReplenishResources(bool* Health, bool* Ammo, bool* DragonHearts, bool* ModPower);
	void OnReplenishResourcesShard(bool* Health, bool* Ammo, bool* DragonHearts);
	void OnUpgradeItem_Event_1(class UClass** ItemBP, int* Level);
	void ClientHudPopScale(bool* Ammo, bool* DragonHeart);
	void PopAmmo();
	void OnFogWallEnter();
	void OnFogWallExit();
	void ApplyForceFeedback(class UForceFeedbackEffect** FF_Type);
	void ReceiveTick(float* DeltaSeconds);
	void OnPlayVapor();
	void Dodged(struct FName* EventName);
	void OnPerfectDodge();
	void PerfectDodgeTimer();
	void OnPerfectDodgeEnd();
	void ExecuteUbergraph_Character_Master_Player(int* EntryPoint);
	void OnMutedPing__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
