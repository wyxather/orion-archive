// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_EchoLog_NonMission_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EchoLog_NonMission.EchoLog_NonMission_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEchoLog_NonMission_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EchoLog_NonMission.EchoLog_NonMission_C.UserConstructionScript");

	AEchoLog_NonMission_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EchoLog_NonMission.EchoLog_NonMission_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEchoLog_NonMission_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EchoLog_NonMission.EchoLog_NonMission_C.ReceiveBeginPlay");

	AEchoLog_NonMission_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EchoLog_NonMission.EchoLog_NonMission_C.PickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WasPickedUpBy                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEchoLog_NonMission_C::PickedUp(class AActor* WasPickedUpBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function EchoLog_NonMission.EchoLog_NonMission_C.PickedUp");

	AEchoLog_NonMission_C_PickedUp_Params params;
	params.WasPickedUpBy = WasPickedUpBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EchoLog_NonMission.EchoLog_NonMission_C.__UserState_SpawnCondition_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEchoLog_NonMission_C::__UserState_SpawnCondition_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function EchoLog_NonMission.EchoLog_NonMission_C.__UserState_SpawnCondition_2");

	AEchoLog_NonMission_C___UserState_SpawnCondition_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EchoLog_NonMission.EchoLog_NonMission_C.ExecuteUbergraph_EchoLog_NonMission
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEchoLog_NonMission_C::ExecuteUbergraph_EchoLog_NonMission(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EchoLog_NonMission.EchoLog_NonMission_C.ExecuteUbergraph_EchoLog_NonMission");

	AEchoLog_NonMission_C_ExecuteUbergraph_EchoLog_NonMission_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
