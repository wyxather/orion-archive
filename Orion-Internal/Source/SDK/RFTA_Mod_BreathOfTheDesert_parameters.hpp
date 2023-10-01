#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_BreathOfTheDesert_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.ModifyDamage
struct AMod_BreathOfTheDesert_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.DoAction
struct AMod_BreathOfTheDesert_C_DoAction_Params
{
	class UActionComponent**                           ActionComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ActionID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.ModifyInspectInfo
struct AMod_BreathOfTheDesert_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.OnBeginUse
struct AMod_BreathOfTheDesert_C_OnBeginUse_Params
{
};

// Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.OnEndUse
struct AMod_BreathOfTheDesert_C_OnEndUse_Params
{
};

// Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.OnPreviewStart
struct AMod_BreathOfTheDesert_C_OnPreviewStart_Params
{
};

// Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.ExecuteUbergraph_Mod_BreathOfTheDesert
struct AMod_BreathOfTheDesert_C_ExecuteUbergraph_Mod_BreathOfTheDesert_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
