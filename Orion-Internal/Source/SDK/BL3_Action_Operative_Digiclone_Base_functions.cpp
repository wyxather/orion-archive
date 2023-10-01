// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_Digiclone_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.AN_ShowDevice
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_Digiclone_Base_C::AN_ShowDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.AN_ShowDevice");

	UAction_Operative_Digiclone_Base_C_AN_ShowDevice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.AN_HideDevice
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_Digiclone_Base_C::AN_HideDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.AN_HideDevice");

	UAction_Operative_Digiclone_Base_C_AN_HideDevice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_Digiclone_Base_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.OnEnd");

	UAction_Operative_Digiclone_Base_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_Digiclone_Base_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.OnBeginBringUpWeapon");

	UAction_Operative_Digiclone_Base_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.ExecuteUbergraph_Action_Operative_Digiclone_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_Digiclone_Base_C::ExecuteUbergraph_Action_Operative_Digiclone_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.ExecuteUbergraph_Action_Operative_Digiclone_Base");

	UAction_Operative_Digiclone_Base_C_ExecuteUbergraph_Action_Operative_Digiclone_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
