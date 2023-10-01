#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Death_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dialog_Death.Dialog_Death_C.fade
struct ADialog_Death_C_fade_Params
{
	EFadeDirection*                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Immediate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Dialog_Death.Dialog_Death_C.BeginSpectating
struct ADialog_Death_C_BeginSpectating_Params
{
};

// Function Dialog_Death.Dialog_Death_C.SetContext
struct ADialog_Death_C_SetContext_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Death.Dialog_Death_C.PostTravel
struct ADialog_Death_C_PostTravel_Params
{
};

// Function Dialog_Death.Dialog_Death_C.OnInvalidTarget
struct ADialog_Death_C_OnInvalidTarget_Params
{
};

// Function Dialog_Death.Dialog_Death_C.OnValidTarget
struct ADialog_Death_C_OnValidTarget_Params
{
};

// Function Dialog_Death.Dialog_Death_C.EnsureValidTarget
struct ADialog_Death_C_EnsureValidTarget_Params
{
};

// Function Dialog_Death.Dialog_Death_C.OnPushDialog
struct ADialog_Death_C_OnPushDialog_Params
{
	class AUIActor**                                   Next;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Death.Dialog_Death_C.OnPopDialog
struct ADialog_Death_C_OnPopDialog_Params
{
	class AUIActor**                                   Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Death.Dialog_Death_C.ExecuteUbergraph_Dialog_Death
struct ADialog_Death_C_ExecuteUbergraph_Dialog_Death_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
