// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_MiniMap_Display_RevealMap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Has MiniMap
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMiniMap_Display_RevealMap_C::Has_MiniMap(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Has MiniMap");

	AMiniMap_Display_RevealMap_C_Has_MiniMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Set Widget MiniMap Default Visibility
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AMiniMap_Display_RevealMap_C::Set_Widget_MiniMap_Default_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Set Widget MiniMap Default Visibility");

	AMiniMap_Display_RevealMap_C_Set_Widget_MiniMap_Default_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Init
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C** CharacterMasterPlayer          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMiniMap_Display_RevealMap_C::Init(class ACharacter_Master_Player_C** CharacterMasterPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Init");

	AMiniMap_Display_RevealMap_C_Init_Params params;
	params.CharacterMasterPlayer = CharacterMasterPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Init HUD
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AMiniMap_Display_RevealMap_C::Init_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Init HUD");

	AMiniMap_Display_RevealMap_C_Init_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AMiniMap_Display_RevealMap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.ReceiveBeginPlay");

	AMiniMap_Display_RevealMap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Map Initialized_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AMiniMap_Display_RevealMap_C::Map_Initialized_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Map Initialized_Event_1");

	AMiniMap_Display_RevealMap_C_Map_Initialized_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMiniMap_Display_RevealMap_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.ReceiveTick");

	AMiniMap_Display_RevealMap_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.FoW Initialized
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AMiniMap_Display_RevealMap_C::FoW_Initialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.FoW Initialized");

	AMiniMap_Display_RevealMap_C_FoW_Initialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.MapInitEventBound
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AMiniMap_Display_RevealMap_C::MapInitEventBound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.MapInitEventBound");

	AMiniMap_Display_RevealMap_C_MapInitEventBound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.SetMiniMapMode
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMiniMapMode*                  Mode                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMiniMap_Display_RevealMap_C::SetMiniMapMode(EMiniMapMode* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.SetMiniMapMode");

	AMiniMap_Display_RevealMap_C_SetMiniMapMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.ExecuteUbergraph_MiniMap_Display_RevealMap
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMiniMap_Display_RevealMap_C::ExecuteUbergraph_MiniMap_Display_RevealMap(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.ExecuteUbergraph_MiniMap_Display_RevealMap");

	AMiniMap_Display_RevealMap_C_ExecuteUbergraph_MiniMap_Display_RevealMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
