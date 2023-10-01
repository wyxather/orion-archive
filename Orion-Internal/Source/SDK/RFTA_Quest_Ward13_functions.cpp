// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Quest_Ward13_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Quest_Ward13.Quest_Ward13_C.IsFullGameAvailable
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FullGameAvailable              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Ward13_C::IsFullGameAvailable(bool* FullGameAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.IsFullGameAvailable");

	AQuest_Ward13_C_IsFullGameAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FullGameAvailable != nullptr)
		*FullGameAvailable = params.FullGameAvailable;
}


// Function Quest_Ward13.Quest_Ward13_C.ResetAce
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Ace                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::ResetAce(class AActor** Ace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.ResetAce");

	AQuest_Ward13_C_ResetAce_Params params;
	params.Ace = Ace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.Stop Action_PlayerInPlayerBase
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Stop_Action                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController**            Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::Stop_Action_PlayerInPlayerBase(bool* Stop_Action, class AController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.Stop Action_PlayerInPlayerBase");

	AQuest_Ward13_C_Stop_Action_PlayerInPlayerBase_Params params;
	params.Stop_Action = Stop_Action;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.Invoke Reset on Quest Entity
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantQuestEntity**    Entity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::Invoke_Reset_on_Quest_Entity(class URemnantQuestEntity** Entity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.Invoke Reset on Quest Entity");

	AQuest_Ward13_C_Invoke_Reset_on_Quest_Entity_Params params;
	params.Entity = Entity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.AddItemsToReggie
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantPlayerController** Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::AddItemsToReggie(class ARemnantPlayerController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.AddItemsToReggie");

	AQuest_Ward13_C_AddItemsToReggie_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.CheckAddItem
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantPlayerController** Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::CheckAddItem(class ARemnantPlayerController** Player, class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.CheckAddItem");

	AQuest_Ward13_C_CheckAddItem_Params params;
	params.Player = Player;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.Set PowerSource B3 Enabled
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AQuest_Ward13_C::Set_PowerSource_B3_Enabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.Set PowerSource B3 Enabled");

	AQuest_Ward13_C_Set_PowerSource_B3_Enabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.HagFree
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Ward13_C::HagFree()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.HagFree");

	AQuest_Ward13_C_HagFree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Zone_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void AQuest_Ward13_C::BndEvt__Zone_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.BndEvt__Zone_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature");

	AQuest_Ward13_C_BndEvt__Zone_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature");

	AQuest_Ward13_C_BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.BndEvt__PowerSource_Default_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::BndEvt__PowerSource_Default_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.BndEvt__PowerSource_Default_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature");

	AQuest_Ward13_C_BndEvt__PowerSource_Default_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.BndEvt__PowerSource_B3_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::BndEvt__PowerSource_B3_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.BndEvt__PowerSource_B3_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature");

	AQuest_Ward13_C_BndEvt__PowerSource_B3_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Fusebox_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::BndEvt__Fusebox_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.BndEvt__Fusebox_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature");

	AQuest_Ward13_C_BndEvt__Fusebox_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.KnowsRootMotherIdentity
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Ward13_C::KnowsRootMotherIdentity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.KnowsRootMotherIdentity");

	AQuest_Ward13_C_KnowsRootMotherIdentity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.OnTalkedToRootMother
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Ward13_C::OnTalkedToRootMother()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.OnTalkedToRootMother");

	AQuest_Ward13_C_OnTalkedToRootMother_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.RootMotherSpokeToFounder
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Ward13_C::RootMotherSpokeToFounder()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.RootMotherSpokeToFounder");

	AQuest_Ward13_C_RootMotherSpokeToFounder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Zone_K2Node_ComponentBoundEvent_4_QuestZonePlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantPlayerController** Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::BndEvt__Zone_K2Node_ComponentBoundEvent_4_QuestZonePlayerDelegate__DelegateSignature(class ARemnantPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.BndEvt__Zone_K2Node_ComponentBoundEvent_4_QuestZonePlayerDelegate__DelegateSignature");

	AQuest_Ward13_C_BndEvt__Zone_K2Node_ComponentBoundEvent_4_QuestZonePlayerDelegate__DelegateSignature_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Reggie_K2Node_ComponentBoundEvent_5_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::BndEvt__Reggie_K2Node_ComponentBoundEvent_5_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.BndEvt__Reggie_K2Node_ComponentBoundEvent_5_QuestActorDelegate__DelegateSignature");

	AQuest_Ward13_C_BndEvt__Reggie_K2Node_ComponentBoundEvent_5_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.OnResetMirror
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Ward13_C::OnResetMirror()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.OnResetMirror");

	AQuest_Ward13_C_OnResetMirror_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.FuseFailsafe
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Ward13_C::FuseFailsafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.FuseFailsafe");

	AQuest_Ward13_C_FuseFailsafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.StoryFinished
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Ward13_C::StoryFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.StoryFinished");

	AQuest_Ward13_C_StoryFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Ward13_Mirror_K2Node_ComponentBoundEvent_7_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::BndEvt__Ward13_Mirror_K2Node_ComponentBoundEvent_7_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.BndEvt__Ward13_Mirror_K2Node_ComponentBoundEvent_7_QuestActorDelegate__DelegateSignature");

	AQuest_Ward13_C_BndEvt__Ward13_Mirror_K2Node_ComponentBoundEvent_7_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Ward13_Terminal_K2Node_ComponentBoundEvent_8_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::BndEvt__Ward13_Terminal_K2Node_ComponentBoundEvent_8_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.BndEvt__Ward13_Terminal_K2Node_ComponentBoundEvent_8_QuestActorDelegate__DelegateSignature");

	AQuest_Ward13_C_BndEvt__Ward13_Terminal_K2Node_ComponentBoundEvent_8_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Ward13_Keybox_K2Node_ComponentBoundEvent_9_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::BndEvt__Ward13_Keybox_K2Node_ComponentBoundEvent_9_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.BndEvt__Ward13_Keybox_K2Node_ComponentBoundEvent_9_QuestActorDelegate__DelegateSignature");

	AQuest_Ward13_C_BndEvt__Ward13_Keybox_K2Node_ComponentBoundEvent_9_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Ace_K2Node_ComponentBoundEvent_10_QuestActorDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::BndEvt__Ace_K2Node_ComponentBoundEvent_10_QuestActorDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.BndEvt__Ace_K2Node_ComponentBoundEvent_10_QuestActorDelegate__DelegateSignature");

	AQuest_Ward13_C_BndEvt__Ace_K2Node_ComponentBoundEvent_10_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Zone_K2Node_ComponentBoundEvent_12_QuestZonePlayerDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class ARemnantPlayerController** Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::BndEvt__Zone_K2Node_ComponentBoundEvent_12_QuestZonePlayerDelegate__DelegateSignature(class ARemnantPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.BndEvt__Zone_K2Node_ComponentBoundEvent_12_QuestZonePlayerDelegate__DelegateSignature");

	AQuest_Ward13_C_BndEvt__Zone_K2Node_ComponentBoundEvent_12_QuestZonePlayerDelegate__DelegateSignature_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.NotifyFullGameNotLoaded
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Ward13_C::NotifyFullGameNotLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.NotifyFullGameNotLoaded");

	AQuest_Ward13_C_NotifyFullGameNotLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Ward13.Quest_Ward13_C.ExecuteUbergraph_Quest_Ward13
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Ward13_C::ExecuteUbergraph_Quest_Ward13(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Ward13.Quest_Ward13_C.ExecuteUbergraph_Quest_Ward13");

	AQuest_Ward13_C_ExecuteUbergraph_Quest_Ward13_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
