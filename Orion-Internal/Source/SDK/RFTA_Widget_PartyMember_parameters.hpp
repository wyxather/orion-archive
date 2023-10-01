#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_PartyMember_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_PartyMember.Widget_PartyMember_C.OnRequestExpired
struct UWidget_PartyMember_C_OnRequestExpired_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnRequestPing
struct UWidget_PartyMember_C_OnRequestPing_Params
{
	class AActor**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionPing*                                Ping;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Widget_PartyMember.Widget_PartyMember_C.Get_PlayerHealth_Visibility_2
struct UWidget_PartyMember_C_Get_PlayerHealth_Visibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyMember.Widget_PartyMember_C.Get_PlayerHealth_Visibility_1
struct UWidget_PartyMember_C_Get_PlayerHealth_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyMember.Widget_PartyMember_C.GetText_1
struct UWidget_PartyMember_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_PartyMember.Widget_PartyMember_C.Get_PlayerName_Text_1
struct UWidget_PartyMember_C_Get_PlayerName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_PartyMember.Widget_PartyMember_C.Get_PlayerHealth_Percent_1
struct UWidget_PartyMember_C_Get_PlayerHealth_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnDead_Event_1
struct UWidget_PartyMember_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnWoundedState_Event_1
struct UWidget_PartyMember_C_OnWoundedState_Event_1_Params
{
	class UWoundedComponent**                          WoundedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWoundedState*                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnWounded
struct UWidget_PartyMember_C_OnWounded_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnDead
struct UWidget_PartyMember_C_OnDead_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnNormal
struct UWidget_PartyMember_C_OnNormal_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnWoundedState_Event_2
struct UWidget_PartyMember_C_OnWoundedState_Event_2_Params
{
	class UWoundedComponent**                          WoundedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWoundedState*                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnReviving
struct UWidget_PartyMember_C_OnReviving_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnPawnChanged_Event_1
struct UWidget_PartyMember_C_OnPawnChanged_Event_1_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnTalkingChanged_Event_1
struct UWidget_PartyMember_C_OnTalkingChanged_Event_1_Params
{
	bool*                                              IsTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnPlayerNameChanged_Event_1
struct UWidget_PartyMember_C_OnPlayerNameChanged_Event_1_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnChatRestrictionChanged_Event_1
struct UWidget_PartyMember_C_OnChatRestrictionChanged_Event_1_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.InitCharacter
struct UWidget_PartyMember_C_InitCharacter_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyMember.Widget_PartyMember_C.Construct
struct UWidget_PartyMember_C_Construct_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.LocalPlayerTargetChanged
struct UWidget_PartyMember_C_LocalPlayerTargetChanged_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.RefreshName
struct UWidget_PartyMember_C_RefreshName_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.ExecuteUbergraph_Widget_PartyMember
struct UWidget_PartyMember_C_ExecuteUbergraph_Widget_PartyMember_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
