// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_PartyMember_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_PartyMember.Widget_PartyMember_C.OnRequestExpired
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_PartyMember_C::OnRequestExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnRequestExpired");

	UWidget_PartyMember_C_OnRequestExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.OnRequestPing
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionPing*            Ping                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWidget_PartyMember_C::OnRequestPing(class AActor** Character, struct FActionPing* Ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnRequestPing");

	UWidget_PartyMember_C_OnRequestPing_Params params;
	params.Character = Character;
	params.Ping = Ping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.Get_PlayerHealth_Visibility_2
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_PartyMember_C::Get_PlayerHealth_Visibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.Get_PlayerHealth_Visibility_2");

	UWidget_PartyMember_C_Get_PlayerHealth_Visibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PartyMember.Widget_PartyMember_C.Get_PlayerHealth_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_PartyMember_C::Get_PlayerHealth_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.Get_PlayerHealth_Visibility_1");

	UWidget_PartyMember_C_Get_PlayerHealth_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PartyMember.Widget_PartyMember_C.GetText_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_PartyMember_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.GetText_1");

	UWidget_PartyMember_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PartyMember.Widget_PartyMember_C.Get_PlayerName_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_PartyMember_C::Get_PlayerName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.Get_PlayerName_Text_1");

	UWidget_PartyMember_C_Get_PlayerName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PartyMember.Widget_PartyMember_C.Get_PlayerHealth_Percent_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWidget_PartyMember_C::Get_PlayerHealth_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.Get_PlayerHealth_Percent_1");

	UWidget_PartyMember_C_Get_PlayerHealth_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PartyMember.Widget_PartyMember_C.OnDead_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PartyMember_C::OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnDead_Event_1");

	UWidget_PartyMember_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.OnWoundedState_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWoundedComponent**      WoundedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EWoundedState*                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PartyMember_C::OnWoundedState_Event_1(class UWoundedComponent** WoundedComponent, EWoundedState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnWoundedState_Event_1");

	UWidget_PartyMember_C_OnWoundedState_Event_1_Params params;
	params.WoundedComponent = WoundedComponent;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.OnWounded
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PartyMember_C::OnWounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnWounded");

	UWidget_PartyMember_C_OnWounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.OnDead
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PartyMember_C::OnDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnDead");

	UWidget_PartyMember_C_OnDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.OnNormal
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PartyMember_C::OnNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnNormal");

	UWidget_PartyMember_C_OnNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.OnWoundedState_Event_2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWoundedComponent**      WoundedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EWoundedState*                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PartyMember_C::OnWoundedState_Event_2(class UWoundedComponent** WoundedComponent, EWoundedState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnWoundedState_Event_2");

	UWidget_PartyMember_C_OnWoundedState_Event_2_Params params;
	params.WoundedComponent = WoundedComponent;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.OnReviving
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PartyMember_C::OnReviving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnReviving");

	UWidget_PartyMember_C_OnReviving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.OnPawnChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PartyMember_C::OnPawnChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnPawnChanged_Event_1");

	UWidget_PartyMember_C_OnPawnChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.OnTalkingChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_PartyMember_C::OnTalkingChanged_Event_1(bool* IsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnTalkingChanged_Event_1");

	UWidget_PartyMember_C_OnTalkingChanged_Event_1_Params params;
	params.IsTalking = IsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.OnPlayerNameChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PartyMember_C::OnPlayerNameChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnPlayerNameChanged_Event_1");

	UWidget_PartyMember_C_OnPlayerNameChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.OnChatRestrictionChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PartyMember_C::OnChatRestrictionChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnChatRestrictionChanged_Event_1");

	UWidget_PartyMember_C_OnChatRestrictionChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.InitCharacter
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PartyMember_C::InitCharacter(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.InitCharacter");

	UWidget_PartyMember_C_InitCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_PartyMember_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.Construct");

	UWidget_PartyMember_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.LocalPlayerTargetChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PartyMember_C::LocalPlayerTargetChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.LocalPlayerTargetChanged");

	UWidget_PartyMember_C_LocalPlayerTargetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.RefreshName
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PartyMember_C::RefreshName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.RefreshName");

	UWidget_PartyMember_C_RefreshName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyMember.Widget_PartyMember_C.ExecuteUbergraph_Widget_PartyMember
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PartyMember_C::ExecuteUbergraph_Widget_PartyMember(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.ExecuteUbergraph_Widget_PartyMember");

	UWidget_PartyMember_C_ExecuteUbergraph_Widget_PartyMember_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
