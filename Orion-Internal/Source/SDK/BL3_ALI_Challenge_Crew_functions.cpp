// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_Challenge_Crew_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.PlayVO
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDialogTimeSlotReference Dialog                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  CompletedPlayer                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDialogConversation     Conversation                   (Parm, OutParm)

void UALI_Challenge_Crew_C::PlayVO(const struct FDialogTimeSlotReference& Dialog, class AActor* CompletedPlayer, struct FDialogConversation* Conversation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.PlayVO");

	UALI_Challenge_Crew_C_PlayVO_Params params;
	params.Dialog = Dialog;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Conversation != nullptr)
		*Conversation = params.Conversation;
}


// Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.ShowTutorialPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*           GameInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AOakPlayerController*    TargetPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_Challenge_Crew_C::ShowTutorialPopup(class UGameInstance* GameInstance, class AOakPlayerController* TargetPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.ShowTutorialPopup");

	UALI_Challenge_Crew_C_ShowTutorialPopup_Params params;
	params.GameInstance = GameInstance;
	params.TargetPlayer = TargetPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_Challenge_Crew_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.CompletedChallenge");

	UALI_Challenge_Crew_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.ExecuteUbergraph_ALI_Challenge_Crew
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_Challenge_Crew_C::ExecuteUbergraph_ALI_Challenge_Crew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.ExecuteUbergraph_ALI_Challenge_Crew");

	UALI_Challenge_Crew_C_ExecuteUbergraph_ALI_Challenge_Crew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
