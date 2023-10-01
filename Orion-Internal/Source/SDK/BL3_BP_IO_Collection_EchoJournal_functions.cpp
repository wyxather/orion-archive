// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_Collection_EchoJournal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_IO_Collection_EchoJournal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.UserConstructionScript");

	ABP_IO_Collection_EchoJournal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_IO_Collection_EchoJournal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.ReceiveBeginPlay");

	ABP_IO_Collection_EchoJournal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.BndEvt__BP_CrewChallengeComponent_Collection_K2Node_ComponentBoundEvent_1_ChallengePlayerEvent__DelegateSignature_BP_IO_Collection_EchoJournal
// (BlueprintEvent)
// Parameters:
// class UChallengesComponent*    PlayerChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_IO_Collection_EchoJournal_C::BndEvt__BP_CrewChallengeComponent_Collection_K2Node_ComponentBoundEvent_1_ChallengePlayerEvent__DelegateSignature_BP_IO_Collection_EchoJournal(class UChallengesComponent* PlayerChallenges)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.BndEvt__BP_CrewChallengeComponent_Collection_K2Node_ComponentBoundEvent_1_ChallengePlayerEvent__DelegateSignature_BP_IO_Collection_EchoJournal");

	ABP_IO_Collection_EchoJournal_C_BndEvt__BP_CrewChallengeComponent_Collection_K2Node_ComponentBoundEvent_1_ChallengePlayerEvent__DelegateSignature_BP_IO_Collection_EchoJournal_Params params;
	params.PlayerChallenges = PlayerChallenges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_Collection_EchoJournal
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_IO_Collection_EchoJournal_C::BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_Collection_EchoJournal(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_Collection_EchoJournal");

	ABP_IO_Collection_EchoJournal_C_BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_Collection_EchoJournal_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.EchoLogDone
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Collection_EchoJournal_C::EchoLogDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.EchoLogDone");

	ABP_IO_Collection_EchoJournal_C_EchoLogDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.__UserState_JournalState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Collection_EchoJournal_C::__UserState_JournalState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.__UserState_JournalState_2");

	ABP_IO_Collection_EchoJournal_C___UserState_JournalState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.__UserState_JournalState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Collection_EchoJournal_C::__UserState_JournalState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.__UserState_JournalState_1");

	ABP_IO_Collection_EchoJournal_C___UserState_JournalState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.PlayFeedback
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_Collection_EchoJournal_C::PlayFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.PlayFeedback");

	ABP_IO_Collection_EchoJournal_C_PlayFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.ExecuteUbergraph_BP_IO_Collection_EchoJournal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Collection_EchoJournal_C::ExecuteUbergraph_BP_IO_Collection_EchoJournal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C.ExecuteUbergraph_BP_IO_Collection_EchoJournal");

	ABP_IO_Collection_EchoJournal_C_ExecuteUbergraph_BP_IO_Collection_EchoJournal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
