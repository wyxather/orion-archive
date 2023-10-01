// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_Salvage_ClapTrapPart_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.ClaptrapFeedback
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Salvage_ClapTrapPart_C::ClaptrapFeedback(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.ClaptrapFeedback");

	ABP_IO_Salvage_ClapTrapPart_C_ClaptrapFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_IO_Salvage_ClapTrapPart_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.UserConstructionScript");

	ABP_IO_Salvage_ClapTrapPart_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_IO_Salvage_ClapTrapPart_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.Timeline_0__FinishedFunc");

	ABP_IO_Salvage_ClapTrapPart_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_IO_Salvage_ClapTrapPart_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.Timeline_0__UpdateFunc");

	ABP_IO_Salvage_ClapTrapPart_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.BndEvt__BP_CrewChallengeComponent_Salvage_K2Node_ComponentBoundEvent_2_ChallengePlayerEvent__DelegateSignature_BP_IO_Salvage_ClapTrapPart
// (BlueprintEvent)
// Parameters:
// class UChallengesComponent*    PlayerChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_IO_Salvage_ClapTrapPart_C::BndEvt__BP_CrewChallengeComponent_Salvage_K2Node_ComponentBoundEvent_2_ChallengePlayerEvent__DelegateSignature_BP_IO_Salvage_ClapTrapPart(class UChallengesComponent* PlayerChallenges)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.BndEvt__BP_CrewChallengeComponent_Salvage_K2Node_ComponentBoundEvent_2_ChallengePlayerEvent__DelegateSignature_BP_IO_Salvage_ClapTrapPart");

	ABP_IO_Salvage_ClapTrapPart_C_BndEvt__BP_CrewChallengeComponent_Salvage_K2Node_ComponentBoundEvent_2_ChallengePlayerEvent__DelegateSignature_BP_IO_Salvage_ClapTrapPart_Params params;
	params.PlayerChallenges = PlayerChallenges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_Salvage_ClapTrapPart
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_IO_Salvage_ClapTrapPart_C::BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_Salvage_ClapTrapPart(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_Salvage_ClapTrapPart");

	ABP_IO_Salvage_ClapTrapPart_C_BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_Salvage_ClapTrapPart_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.__UserState_ClaptrapState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Salvage_ClapTrapPart_C::__UserState_ClaptrapState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.__UserState_ClaptrapState_1");

	ABP_IO_Salvage_ClapTrapPart_C___UserState_ClaptrapState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.__UserState_ClaptrapState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Salvage_ClapTrapPart_C::__UserState_ClaptrapState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.__UserState_ClaptrapState_2");

	ABP_IO_Salvage_ClapTrapPart_C___UserState_ClaptrapState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.__UserState_ClaptrapState_3
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Salvage_ClapTrapPart_C::__UserState_ClaptrapState_3(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.__UserState_ClaptrapState_3");

	ABP_IO_Salvage_ClapTrapPart_C___UserState_ClaptrapState_3_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.ExecuteUbergraph_BP_IO_Salvage_ClapTrapPart
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_Salvage_ClapTrapPart_C::ExecuteUbergraph_BP_IO_Salvage_ClapTrapPart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.ExecuteUbergraph_BP_IO_Salvage_ClapTrapPart");

	ABP_IO_Salvage_ClapTrapPart_C_ExecuteUbergraph_BP_IO_Salvage_ClapTrapPart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.ClaptrapUsed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_IO_Salvage_ClapTrapPart_C::ClaptrapUsed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C.ClaptrapUsed__DelegateSignature");

	ABP_IO_Salvage_ClapTrapPart_C_ClaptrapUsed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
