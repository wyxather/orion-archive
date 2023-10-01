// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_NPC_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_NPC.Character_NPC_C.CanUseItem
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerGunfire** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ACharacter_NPC_C::CanUseItem(class APlayerControllerGunfire** PlayerController, class UClass** ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.CanUseItem");

	ACharacter_NPC_C_CanUseItem_Params params;
	params.PlayerController = PlayerController;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Character_NPC.Character_NPC_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_NPC_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.FilterIncomingDamage");

	ACharacter_NPC_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function Character_NPC.Character_NPC_C.IsBusy
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_NPC_C::IsBusy(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.IsBusy");

	ACharacter_NPC_C_IsBusy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_NPC.Character_NPC_C.EvaluatePlayerNearby
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::EvaluatePlayerNearby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.EvaluatePlayerNearby");

	ACharacter_NPC_C_EvaluatePlayerNearby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.AddRunAway
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::AddRunAway()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.AddRunAway");

	ACharacter_NPC_C_AddRunAway_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.RemoveRunAway
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::RemoveRunAway()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.RemoveRunAway");

	ACharacter_NPC_C_RemoveRunAway_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.AddCower
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::AddCower()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.AddCower");

	ACharacter_NPC_C_AddCower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.RemoveCower
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::RemoveCower()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.RemoveCower");

	ACharacter_NPC_C_RemoveCower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.AddScared
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::AddScared()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.AddScared");

	ACharacter_NPC_C_AddScared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.AddWounded
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::AddWounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.AddWounded");

	ACharacter_NPC_C_AddWounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.RemoveWounded
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::RemoveWounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.RemoveWounded");

	ACharacter_NPC_C_RemoveWounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.AddRunHome
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::AddRunHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.AddRunHome");

	ACharacter_NPC_C_AddRunHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.RemoveRunHome
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::RemoveRunHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.RemoveRunHome");

	ACharacter_NPC_C_RemoveRunHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.OnCollisionEnable
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::OnCollisionEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.OnCollisionEnable");

	ACharacter_NPC_C_OnCollisionEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.OnDisableCollision
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::OnDisableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.OnDisableCollision");

	ACharacter_NPC_C_OnDisableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.UI_Node_Wounded
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::UI_Node_Wounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.UI_Node_Wounded");

	ACharacter_NPC_C_UI_Node_Wounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.RemoveScared
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::RemoveScared()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.RemoveScared");

	ACharacter_NPC_C_RemoveScared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.UI_Node_Default
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::UI_Node_Default()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.UI_Node_Default");

	ACharacter_NPC_C_UI_Node_Default_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.UseItem
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerGunfire** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ACharacter_NPC_C::UseItem(class APlayerControllerGunfire** PlayerController, class UClass** ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.UseItem");

	ACharacter_NPC_C_UseItem_Params params;
	params.PlayerController = PlayerController;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.BndEvt__PlayerDetect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_NPC_C::BndEvt__PlayerDetect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.BndEvt__PlayerDetect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ACharacter_NPC_C_BndEvt__PlayerDetect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.BndEvt__PlayerDetect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ACharacter_NPC_C::BndEvt__PlayerDetect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.BndEvt__PlayerDetect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ACharacter_NPC_C_BndEvt__PlayerDetect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.OnDead_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_NPC_C::OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.OnDead_Event_1");

	ACharacter_NPC_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_51_InteractiveDelegate__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_NPC_C::BndEvt__StateMachine_K2Node_ComponentBoundEvent_51_InteractiveDelegate__DelegateSignature(struct FName* StateName, class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_51_InteractiveDelegate__DelegateSignature");

	ACharacter_NPC_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_51_InteractiveDelegate__DelegateSignature_Params params;
	params.StateName = StateName;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_NPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.ReceiveBeginPlay");

	ACharacter_NPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.UINodePlacement
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_NPC_C::UINodePlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.UINodePlacement");

	ACharacter_NPC_C_UINodePlacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_NPC.Character_NPC_C.ExecuteUbergraph_Character_NPC
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_NPC_C::ExecuteUbergraph_Character_NPC(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC.Character_NPC_C.ExecuteUbergraph_Character_NPC");

	ACharacter_NPC_C_ExecuteUbergraph_Character_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
