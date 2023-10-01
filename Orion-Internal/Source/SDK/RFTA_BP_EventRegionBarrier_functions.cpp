// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_EventRegionBarrier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UpdateBarrierActiveState
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventRegionBarrier_C::UpdateBarrierActiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UpdateBarrierActiveState");

	ABP_EventRegionBarrier_C_UpdateBarrierActiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnRep_HideBarrier
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_EventRegionBarrier_C::OnRep_HideBarrier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnRep_HideBarrier");

	ABP_EventRegionBarrier_C_OnRep_HideBarrier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.AlignToBarrier
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C** InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventRegionBarrier_C::AlignToBarrier(class ACharacter_Master_Player_C** InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.AlignToBarrier");

	ABP_EventRegionBarrier_C_AlignToBarrier_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.SetupCollisionNotVisited
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventRegionBarrier_C::SetupCollisionNotVisited()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.SetupCollisionNotVisited");

	ABP_EventRegionBarrier_C_SetupCollisionNotVisited_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.SetupCollisionVisited
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventRegionBarrier_C::SetupCollisionVisited()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.SetupCollisionVisited");

	ABP_EventRegionBarrier_C_SetupCollisionVisited_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.IsActorOutside
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventRegionBarrier_C::IsActorOutside(class AActor** Actor, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.IsActorOutside");

	ABP_EventRegionBarrier_C_IsActorOutside_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.IsActorInside
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventRegionBarrier_C::IsActorInside(class AActor** Actor, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.IsActorInside");

	ABP_EventRegionBarrier_C_IsActorInside_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UpdateFlash
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventRegionBarrier_C::UpdateFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UpdateFlash");

	ABP_EventRegionBarrier_C_UpdateFlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.SetHasVisited
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visited                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventRegionBarrier_C::SetHasVisited(bool* Visited)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.SetHasVisited");

	ABP_EventRegionBarrier_C_SetHasVisited_Params params;
	params.Visited = Visited;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ShowBarrier
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventRegionBarrier_C::ShowBarrier(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ShowBarrier");

	ABP_EventRegionBarrier_C_ShowBarrier_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UpdateBarrier
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventRegionBarrier_C::UpdateBarrier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UpdateBarrier");

	ABP_EventRegionBarrier_C_UpdateBarrier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UserConstructionScript
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EventRegionBarrier_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UserConstructionScript");

	ABP_EventRegionBarrier_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_EventRegionBarrier_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ReceiveBeginPlay");

	ABP_EventRegionBarrier_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnUpdateActiveState_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_EventRegionBarrier_C::OnUpdateActiveState_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnUpdateActiveState_Event_1");

	ABP_EventRegionBarrier_C_OnUpdateActiveState_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnShow
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_EventRegionBarrier_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnShow");

	ABP_EventRegionBarrier_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnHide
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_EventRegionBarrier_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnHide");

	ABP_EventRegionBarrier_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.Flash
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_EventRegionBarrier_C::Flash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.Flash");

	ABP_EventRegionBarrier_C_Flash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BeginWalkThroughBarrier
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C** Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventRegionBarrier_C::BeginWalkThroughBarrier(class ACharacter_Master_Player_C** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BeginWalkThroughBarrier");

	ABP_EventRegionBarrier_C_BeginWalkThroughBarrier_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventRegionBarrier_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ReceiveTick");

	ABP_EventRegionBarrier_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.HideBarrier
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_EventRegionBarrier_C::HideBarrier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.HideBarrier");

	ABP_EventRegionBarrier_C_HideBarrier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UnhideBarrier
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_EventRegionBarrier_C::UnhideBarrier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UnhideBarrier");

	ABP_EventRegionBarrier_C_UnhideBarrier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BndEvt__BarrierInsideTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventRegionBarrier_C::BndEvt__BarrierInsideTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BndEvt__BarrierInsideTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_EventRegionBarrier_C_BndEvt__BarrierInsideTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BndEvt__BarrierOutsideTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventRegionBarrier_C::BndEvt__BarrierOutsideTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BndEvt__BarrierOutsideTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	ABP_EventRegionBarrier_C_BndEvt__BarrierOutsideTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BndEvt__BarrierInsideTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_EventRegionBarrier_C::BndEvt__BarrierInsideTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BndEvt__BarrierInsideTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_EventRegionBarrier_C_BndEvt__BarrierInsideTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BndEvt__BarrierOutsideTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_EventRegionBarrier_C::BndEvt__BarrierOutsideTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BndEvt__BarrierOutsideTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_EventRegionBarrier_C_BndEvt__BarrierOutsideTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.EnterBarrier
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      RemnantCharacter               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventRegionBarrier_C::EnterBarrier(class ARemnantCharacter** RemnantCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.EnterBarrier");

	ABP_EventRegionBarrier_C_EnterBarrier_Params params;
	params.RemnantCharacter = RemnantCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ExitBarrier
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      RemnantCharacter               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventRegionBarrier_C::ExitBarrier(class ARemnantCharacter** RemnantCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ExitBarrier");

	ABP_EventRegionBarrier_C_ExitBarrier_Params params;
	params.RemnantCharacter = RemnantCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnStateChange_Event_1
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventRegionBarrier_C::OnStateChange_Event_1(struct FName* StateName, struct FName* PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnStateChange_Event_1");

	ABP_EventRegionBarrier_C_OnStateChange_Event_1_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ExecuteUbergraph_BP_EventRegionBarrier
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventRegionBarrier_C::ExecuteUbergraph_BP_EventRegionBarrier(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ExecuteUbergraph_BP_EventRegionBarrier");

	ABP_EventRegionBarrier_C_ExecuteUbergraph_BP_EventRegionBarrier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
