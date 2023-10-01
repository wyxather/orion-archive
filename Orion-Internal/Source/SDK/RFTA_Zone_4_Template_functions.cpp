// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Zone_4_Template_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Zone_4_Template.Quest_Intro_01_C.Set Group Vis
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>          Group                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuest_Intro_01_C::Set_Group_Vis(class UObject** Other, bool* Visible, TArray<class AActor*>* Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zone_4_Template.Quest_Intro_01_C.Set Group Vis");

	AQuest_Intro_01_C_Set_Group_Vis_Params params;
	params.Other = Other;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Group != nullptr)
		*Group = params.Group;
}


// Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerA_Show_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_01_C::BndEvt__TriggerA_Show_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerA_Show_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature");

	AQuest_Intro_01_C_BndEvt__TriggerA_Show_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerB_Hide_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_01_C::BndEvt__TriggerB_Hide_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerB_Hide_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature");

	AQuest_Intro_01_C_BndEvt__TriggerB_Hide_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerB_Show_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_01_C::BndEvt__TriggerB_Show_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerB_Show_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature");

	AQuest_Intro_01_C_BndEvt__TriggerB_Show_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerD_Hide_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_01_C::BndEvt__TriggerD_Hide_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerD_Hide_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature");

	AQuest_Intro_01_C_BndEvt__TriggerD_Hide_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerD_Show_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_01_C::BndEvt__TriggerD_Show_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerD_Show_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature");

	AQuest_Intro_01_C_BndEvt__TriggerD_Show_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerF_Hide_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_01_C::BndEvt__TriggerF_Hide_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerF_Hide_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature");

	AQuest_Intro_01_C_BndEvt__TriggerF_Hide_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerA_GeneralPlacementTest_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_01_C::BndEvt__TriggerA_GeneralPlacementTest_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerA_GeneralPlacementTest_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature");

	AQuest_Intro_01_C_BndEvt__TriggerA_GeneralPlacementTest_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zone_4_Template.Quest_Intro_01_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AQuest_Intro_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Zone_4_Template.Quest_Intro_01_C.ReceiveBeginPlay");

	AQuest_Intro_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zone_4_Template.Quest_Intro_01_C.Hide Lighting Groups - Start
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AQuest_Intro_01_C::Hide_Lighting_Groups___Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Zone_4_Template.Quest_Intro_01_C.Hide Lighting Groups - Start");

	AQuest_Intro_01_C_Hide_Lighting_Groups___Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerVolume8_3_K2Node_ActorBoundEvent_11_ActorBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_01_C::BndEvt__TriggerVolume8_3_K2Node_ActorBoundEvent_11_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerVolume8_3_K2Node_ActorBoundEvent_11_ActorBeginOverlapSignature__DelegateSignature");

	AQuest_Intro_01_C_BndEvt__TriggerVolume8_3_K2Node_ActorBoundEvent_11_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerVolume4_K2Node_ActorBoundEvent_12_ActorBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_01_C::BndEvt__TriggerVolume4_K2Node_ActorBoundEvent_12_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zone_4_Template.Quest_Intro_01_C.BndEvt__TriggerVolume4_K2Node_ActorBoundEvent_12_ActorBeginOverlapSignature__DelegateSignature");

	AQuest_Intro_01_C_BndEvt__TriggerVolume4_K2Node_ActorBoundEvent_12_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zone_4_Template.Quest_Intro_01_C.ExecuteUbergraph_Quest_Intro_01
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuest_Intro_01_C::ExecuteUbergraph_Quest_Intro_01(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zone_4_Template.Quest_Intro_01_C.ExecuteUbergraph_Quest_Intro_01");

	AQuest_Intro_01_C_ExecuteUbergraph_Quest_Intro_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
