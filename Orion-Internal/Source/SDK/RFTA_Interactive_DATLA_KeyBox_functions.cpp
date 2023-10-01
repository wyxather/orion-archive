// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_DATLA_KeyBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.CanUseItem
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerGunfire** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AInteractive_DATLA_KeyBox_C::CanUseItem(class APlayerControllerGunfire** PlayerController, class UClass** ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.CanUseItem");

	AInteractive_DATLA_KeyBox_C_CanUseItem_Params params;
	params.PlayerController = PlayerController;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.Set DATLA
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractive_DATLA_C**   DATLA                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_DATLA_KeyBox_C::Set_DATLA(class AInteractive_DATLA_C** DATLA)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.Set DATLA");

	AInteractive_DATLA_KeyBox_C_Set_DATLA_Params params;
	params.DATLA = DATLA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.KeyLightEvents
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AInteractive_DATLA_KeyBox_C::KeyLightEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.KeyLightEvents");

	AInteractive_DATLA_KeyBox_C_KeyLightEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.Setup ItemSocket
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AInteractive_DATLA_KeyBox_C::Setup_ItemSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.Setup ItemSocket");

	AInteractive_DATLA_KeyBox_C_Setup_ItemSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.IsLocked
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           LockVar                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_DATLA_KeyBox_C::IsLocked(bool* LockVar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.IsLocked");

	AInteractive_DATLA_KeyBox_C_IsLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LockVar != nullptr)
		*LockVar = params.LockVar;
}


// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AInteractive_DATLA_KeyBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.ReceiveBeginPlay");

	AInteractive_DATLA_KeyBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.On Key Used
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_DATLA_KeyBox_C::On_Key_Used()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.On Key Used");

	AInteractive_DATLA_KeyBox_C_On_Key_Used_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.ExecuteUbergraph_Interactive_DATLA_KeyBox
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_DATLA_KeyBox_C::ExecuteUbergraph_Interactive_DATLA_KeyBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.ExecuteUbergraph_Interactive_DATLA_KeyBox");

	AInteractive_DATLA_KeyBox_C_ExecuteUbergraph_Interactive_DATLA_KeyBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
