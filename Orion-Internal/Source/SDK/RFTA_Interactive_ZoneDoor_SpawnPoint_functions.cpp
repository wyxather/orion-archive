// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_ZoneDoor_SpawnPoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interactive_ZoneDoor_SpawnPoint.Interactive_ZoneDoor_SpawnPoint_C.UpdateEnabled
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AInteractive_ZoneDoor_SpawnPoint_C::UpdateEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_SpawnPoint.Interactive_ZoneDoor_SpawnPoint_C.UpdateEnabled");

	AInteractive_ZoneDoor_SpawnPoint_C_UpdateEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_ZoneDoor_SpawnPoint.Interactive_ZoneDoor_SpawnPoint_C.BndEvt__PawnDetect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AInteractive_ZoneDoor_SpawnPoint_C::BndEvt__PawnDetect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_SpawnPoint.Interactive_ZoneDoor_SpawnPoint_C.BndEvt__PawnDetect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AInteractive_ZoneDoor_SpawnPoint_C_BndEvt__PawnDetect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Interactive_ZoneDoor_SpawnPoint.Interactive_ZoneDoor_SpawnPoint_C.BndEvt__PawnDetect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_ZoneDoor_SpawnPoint_C::BndEvt__PawnDetect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_SpawnPoint.Interactive_ZoneDoor_SpawnPoint_C.BndEvt__PawnDetect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AInteractive_ZoneDoor_SpawnPoint_C_BndEvt__PawnDetect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_ZoneDoor_SpawnPoint.Interactive_ZoneDoor_SpawnPoint_C.OnPreSpawn
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_ZoneDoor_SpawnPoint_C::OnPreSpawn(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_SpawnPoint.Interactive_ZoneDoor_SpawnPoint_C.OnPreSpawn");

	AInteractive_ZoneDoor_SpawnPoint_C_OnPreSpawn_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_ZoneDoor_SpawnPoint.Interactive_ZoneDoor_SpawnPoint_C.ExecuteUbergraph_Interactive_ZoneDoor_SpawnPoint
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_ZoneDoor_SpawnPoint_C::ExecuteUbergraph_Interactive_ZoneDoor_SpawnPoint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_SpawnPoint.Interactive_ZoneDoor_SpawnPoint_C.ExecuteUbergraph_Interactive_ZoneDoor_SpawnPoint");

	AInteractive_ZoneDoor_SpawnPoint_C_ExecuteUbergraph_Interactive_ZoneDoor_SpawnPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
