// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Player_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Player.BPChar_Player_C.GetTransfusionSpawnEndLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  SourceActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 res                            (Parm, OutParm, IsPlainOldData)

void ABPChar_Player_C::GetTransfusionSpawnEndLocation(class AActor* SourceActor, struct FVector* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.GetTransfusionSpawnEndLocation");

	ABPChar_Player_C_GetTransfusionSpawnEndLocation_Params params;
	params.SourceActor = SourceActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPChar_Player.BPChar_Player_C.GetLevelUpFXAttachComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         res                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Player_C::GetLevelUpFXAttachComponent(class USceneComponent** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.GetLevelUpFXAttachComponent");

	ABPChar_Player_C_GetLevelUpFXAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPChar_Player.BPChar_Player_C.PlayLevelUpFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_Player_C::PlayLevelUpFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.PlayLevelUpFX");

	ABPChar_Player_C_PlayLevelUpFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.GroundSlamEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Player_C::GroundSlamEnd(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.GroundSlamEnd");

	ABPChar_Player_C_GroundSlamEnd_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.BackupFriendlyTargeting
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Player_C::BackupFriendlyTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.BackupFriendlyTargeting");

	ABPChar_Player_C_BackupFriendlyTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.GetHeadMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           HeadMesh                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Player_C::GetHeadMesh(class USkeletalMesh** HeadMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.GetHeadMesh");

	ABPChar_Player_C_GetHeadMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HeadMesh != nullptr)
		*HeadMesh = params.HeadMesh;
}


// Function BPChar_Player.BPChar_Player_C.ClearTargetingTimers
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Player_C::ClearTargetingTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.ClearTargetingTimers");

	ABPChar_Player_C_ClearTargetingTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.PreInventoryItemPickupCheck
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor**                 PickupActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UsedByInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AInventoryItemPickup**   WorldPickupActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPChar_Player_C::PreInventoryItemPickupCheck(class AActor** PickupActor, int* Quantity, bool* UsedByInstigator, class AInventoryItemPickup** WorldPickupActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.PreInventoryItemPickupCheck");

	ABPChar_Player_C_PreInventoryItemPickupCheck_Params params;
	params.PickupActor = PickupActor;
	params.Quantity = Quantity;
	params.UsedByInstigator = UsedByInstigator;
	params.WorldPickupActor = WorldPickupActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPChar_Player.BPChar_Player_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Player_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.UserConstructionScript");

	ABPChar_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.Player_HealthDepleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Player_C::Player_HealthDepleted(class AOakCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.Player_HealthDepleted");

	ABPChar_Player_C_Player_HealthDepleted_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.Enemy_OnPhaseLockStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Player_C::Enemy_OnPhaseLockStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.Enemy_OnPhaseLockStart");

	ABPChar_Player_C_Enemy_OnPhaseLockStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.Enemy_OnPhaseLockStop
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Player_C::Enemy_OnPhaseLockStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.Enemy_OnPhaseLockStop");

	ABPChar_Player_C_Enemy_OnPhaseLockStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.Enemy_OnThoughtLockStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Player_C::Enemy_OnThoughtLockStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.Enemy_OnThoughtLockStart");

	ABPChar_Player_C_Enemy_OnThoughtLockStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.Enemy_OnThoughtLockStop
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Player_C::Enemy_OnThoughtLockStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.Enemy_OnThoughtLockStop");

	ABPChar_Player_C_Enemy_OnThoughtLockStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.SetMissionDebugText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TextSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           FacePlayer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Player_C::SetMissionDebugText(const struct FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.SetMissionDebugText");

	ABPChar_Player_C_SetMissionDebugText_Params params;
	params.Text = Text;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.TextColor = TextColor;
	params.FacePlayer = FacePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.OnInventoryEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InventoryActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotData*      SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Player_C::OnInventoryEquipped(class AActor* InventoryActor, class UInventorySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.OnInventoryEquipped");

	ABPChar_Player_C_OnInventoryEquipped_Params params;
	params.InventoryActor = InventoryActor;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.OnInventoryUnequipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InventoryActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotData*      SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Player_C::OnInventoryUnequipped(class AActor* InventoryActor, class UInventorySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.OnInventoryUnequipped");

	ABPChar_Player_C_OnInventoryUnequipped_Params params;
	params.InventoryActor = InventoryActor;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.OnInventoryPickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PickedUpActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Player_C::OnInventoryPickedUp(class AActor* PickedUpActor, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.OnInventoryPickedUp");

	ABPChar_Player_C_OnInventoryPickedUp_Params params;
	params.PickedUpActor = PickedUpActor;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.DoMelee
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Player_C::DoMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.DoMelee");

	ABPChar_Player_C_DoMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_Player_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.ReceiveBeginPlay");

	ABPChar_Player_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Player_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.ReceiveTick");

	ABPChar_Player_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.OnJumped
// (Event, Public, BlueprintEvent)

void ABPChar_Player_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.OnJumped");

	ABPChar_Player_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABPChar_Player_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.OnLanded");

	ABPChar_Player_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Player_C::BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player");

	ABPChar_Player_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.GroundSlam_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Player_C::GroundSlam_End(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.GroundSlam_End");

	ABPChar_Player_C_GroundSlam_End_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_SimplePlayerBalanceEvent__DelegateSignature_BPChar_Player
// (BlueprintEvent)

void ABPChar_Player_C::BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_SimplePlayerBalanceEvent__DelegateSignature_BPChar_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_SimplePlayerBalanceEvent__DelegateSignature_BPChar_Player");

	ABPChar_Player_C_BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_SimplePlayerBalanceEvent__DelegateSignature_BPChar_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABPChar_Player_C::BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player");

	ABPChar_Player_C_BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.Multikill Reset
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Player_C::Multikill_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.Multikill Reset");

	ABPChar_Player_C_Multikill_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.Player_LevelUp
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Old_XP_Level                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            New_XP_Level                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Player_C::Player_LevelUp(int Old_XP_Level, int New_XP_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.Player_LevelUp");

	ABPChar_Player_C_Player_LevelUp_Params params;
	params.Old_XP_Level = Old_XP_Level;
	params.New_XP_Level = New_XP_Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player
// (BlueprintEvent)
// Parameters:
// int                            OldExperienceLevel             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewExperienceLevel             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Player_C::BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player(int OldExperienceLevel, int NewExperienceLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player");

	ABPChar_Player_C_BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player_Params params;
	params.OldExperienceLevel = OldExperienceLevel;
	params.NewExperienceLevel = NewExperienceLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.Player_SpawnTransfusionProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  DataBlueprint__Override_       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType__Override_          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SourceActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer__Override_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Player_C::Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.Player_SpawnTransfusionProjectile");

	ABPChar_Player_C_Player_SpawnTransfusionProjectile_Params params;
	params.DataBlueprint__Override_ = DataBlueprint__Override_;
	params.DamageType__Override_ = DamageType__Override_;
	params.SourceActor = SourceActor;
	params.TargetActor = TargetActor;
	params.Damage = Damage;
	params.Causer__Override_ = Causer__Override_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.StartZeroG
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABPChar_Player_C::StartZeroG()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.StartZeroG");

	ABPChar_Player_C_StartZeroG_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.EndZeroG
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABPChar_Player_C::EndZeroG()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.EndZeroG");

	ABPChar_Player_C_EndZeroG_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.ServerStartZeroG
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABPChar_Player_C::ServerStartZeroG()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.ServerStartZeroG");

	ABPChar_Player_C_ServerStartZeroG_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.ExecuteUbergraph_BPChar_Player
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Player_C::ExecuteUbergraph_BPChar_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.ExecuteUbergraph_BPChar_Player");

	ABPChar_Player_C_ExecuteUbergraph_BPChar_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Player.BPChar_Player_C.GroundSlam__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Player_C::GroundSlam__DelegateSignature(float Distance, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Player.BPChar_Player_C.GroundSlam__DelegateSignature");

	ABPChar_Player_C_GroundSlam__DelegateSignature_Params params;
	params.Distance = Distance;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
