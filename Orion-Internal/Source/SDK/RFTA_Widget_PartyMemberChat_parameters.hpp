#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_PartyMemberChat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.Get_PlayerName_Text_1
struct UWidget_PartyMemberChat_C_Get_PlayerName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.OnTalkingChanged_Event_1
struct UWidget_PartyMemberChat_C_OnTalkingChanged_Event_1_Params
{
	bool*                                              IsTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.OnPlayerNameChanged_Event_1
struct UWidget_PartyMemberChat_C_OnPlayerNameChanged_Event_1_Params
{
};

// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.Construct
struct UWidget_PartyMemberChat_C_Construct_Params
{
};

// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.OnChatRestrictionChanged_Event_1
struct UWidget_PartyMemberChat_C_OnChatRestrictionChanged_Event_1_Params
{
};

// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.FinishFadeOut
struct UWidget_PartyMemberChat_C_FinishFadeOut_Params
{
};

// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.RefreshName
struct UWidget_PartyMemberChat_C_RefreshName_Params
{
};

// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.ExecuteUbergraph_Widget_PartyMemberChat
struct UWidget_PartyMemberChat_C_ExecuteUbergraph_Widget_PartyMemberChat_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
