// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_EmergencyLight_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.SetLightColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ColorArrayIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::SetLightColor(int ColorArrayIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.SetLightColor");

	ABP_IO_EmergencyLight_C_SetLightColor_Params params;
	params.ColorArrayIndex = ColorArrayIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_IO_EmergencyLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.UserConstructionScript");

	ABP_IO_EmergencyLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_IO_EmergencyLight_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Timeline_0__FinishedFunc");

	ABP_IO_EmergencyLight_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_IO_EmergencyLight_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Timeline_0__UpdateFunc");

	ABP_IO_EmergencyLight_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Color_4
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::__UserState_State_Color_4(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Color_4");

	ABP_IO_EmergencyLight_C___UserState_State_Color_4_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Color_5
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::__UserState_State_Color_5(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Color_5");

	ABP_IO_EmergencyLight_C___UserState_State_Color_5_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_Color_01
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_EmergencyLight_C::Preview_Color_01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_Color_01");

	ABP_IO_EmergencyLight_C_Preview_Color_01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_Color_02
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_EmergencyLight_C::Preview_Color_02()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_Color_02");

	ABP_IO_EmergencyLight_C_Preview_Color_02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_Color_03
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_EmergencyLight_C::Preview_Color_03()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_Color_03");

	ABP_IO_EmergencyLight_C_Preview_Color_03_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_Color_04
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_EmergencyLight_C::Preview_Color_04()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_Color_04");

	ABP_IO_EmergencyLight_C_Preview_Color_04_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_Color_05
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_EmergencyLight_C::Preview_Color_05()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_Color_05");

	ABP_IO_EmergencyLight_C_Preview_Color_05_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Behavior_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::__UserState_State_Behavior_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Behavior_1");

	ABP_IO_EmergencyLight_C___UserState_State_Behavior_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Behavior_3
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::__UserState_State_Behavior_3(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Behavior_3");

	ABP_IO_EmergencyLight_C___UserState_State_Behavior_3_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Behavior_4
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::__UserState_State_Behavior_4(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Behavior_4");

	ABP_IO_EmergencyLight_C___UserState_State_Behavior_4_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_BehaviorNone
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_EmergencyLight_C::Preview_BehaviorNone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_BehaviorNone");

	ABP_IO_EmergencyLight_C_Preview_BehaviorNone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_BehaviorPulse
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_EmergencyLight_C::Preview_BehaviorPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_BehaviorPulse");

	ABP_IO_EmergencyLight_C_Preview_BehaviorPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_BehaviorPulseAndSpin
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_EmergencyLight_C::Preview_BehaviorPulseAndSpin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.Preview_BehaviorPulseAndSpin");

	ABP_IO_EmergencyLight_C_Preview_BehaviorPulseAndSpin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Behavior_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::__UserState_State_Behavior_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Behavior_2");

	ABP_IO_EmergencyLight_C___UserState_State_Behavior_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.PreviewBehavior_On-NoMovement
// (BlueprintCallable, BlueprintEvent)

void ABP_IO_EmergencyLight_C::PreviewBehavior_On_NoMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.PreviewBehavior_On-NoMovement");

	ABP_IO_EmergencyLight_C_PreviewBehavior_On_NoMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Color_3
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::__UserState_State_Color_3(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Color_3");

	ABP_IO_EmergencyLight_C___UserState_State_Color_3_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Color_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::__UserState_State_Color_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Color_2");

	ABP_IO_EmergencyLight_C___UserState_State_Color_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Color_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::__UserState_State_Color_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_Color_1");

	ABP_IO_EmergencyLight_C___UserState_State_Color_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_IO_EmergencyLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.ReceiveBeginPlay");

	ABP_IO_EmergencyLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_SirenAudio_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::__UserState_State_SirenAudio_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_SirenAudio_1");

	ABP_IO_EmergencyLight_C___UserState_State_SirenAudio_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_SirenAudio_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::__UserState_State_SirenAudio_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.__UserState_State_SirenAudio_2");

	ABP_IO_EmergencyLight_C___UserState_State_SirenAudio_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.SetColorState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Color_Array_Index              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::SetColorState(int Color_Array_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.SetColorState");

	ABP_IO_EmergencyLight_C_SetColorState_Params params;
	params.Color_Array_Index = Color_Array_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.SetEmergencyLightColorState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EnumState_EmergencyLight_Color> StateColorEnum                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::SetEmergencyLightColorState(TEnumAsByte<EnumState_EmergencyLight_Color> StateColorEnum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.SetEmergencyLightColorState");

	ABP_IO_EmergencyLight_C_SetEmergencyLightColorState_Params params;
	params.StateColorEnum = StateColorEnum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.ExecuteUbergraph_BP_IO_EmergencyLight
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_EmergencyLight_C::ExecuteUbergraph_BP_IO_EmergencyLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_EmergencyLight.BP_IO_EmergencyLight_C.ExecuteUbergraph_BP_IO_EmergencyLight");

	ABP_IO_EmergencyLight_C_ExecuteUbergraph_BP_IO_EmergencyLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
