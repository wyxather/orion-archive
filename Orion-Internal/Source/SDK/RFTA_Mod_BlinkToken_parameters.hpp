#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_BlinkToken_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_BlinkToken.Mod_BlinkToken_C.CheckForFog
struct AMod_BlinkToken_C_CheckForFog_Params
{
	struct FVector*                                    Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewEnd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_BlinkToken.Mod_BlinkToken_C.ModifyDamage
struct AMod_BlinkToken_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_BlinkToken.Mod_BlinkToken_C.CalculateClientAimVector
struct AMod_BlinkToken_C_CalculateClientAimVector_Params
{
	struct FVector                                     AimOrigin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     AimEnd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Mod_BlinkToken.Mod_BlinkToken_C.FindGround
struct AMod_BlinkToken_C_FindGround_Params
{
	struct FVector*                                    CurrentPoint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             AboveDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             BelowDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     GroundPoint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HitGround;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_BlinkToken.Mod_BlinkToken_C.GetBlinkLocation
struct AMod_BlinkToken_C_GetBlinkLocation_Params
{
	bool*                                              AddLift;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_BlinkToken.Mod_BlinkToken_C.ClearIndicator
struct AMod_BlinkToken_C_ClearIndicator_Params
{
};

// Function Mod_BlinkToken.Mod_BlinkToken_C.UpdateIndicator
struct AMod_BlinkToken_C_UpdateIndicator_Params
{
};

// Function Mod_BlinkToken.Mod_BlinkToken_C.DoAction
struct AMod_BlinkToken_C_DoAction_Params
{
	class UActionComponent**                           ActionComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ActionID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_BlinkToken.Mod_BlinkToken_C.ModifyInspectInfo
struct AMod_BlinkToken_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_BlinkToken.Mod_BlinkToken_C.OnPreviewEnd
struct AMod_BlinkToken_C_OnPreviewEnd_Params
{
};

// Function Mod_BlinkToken.Mod_BlinkToken_C.PreviewLoop
struct AMod_BlinkToken_C_PreviewLoop_Params
{
};

// Function Mod_BlinkToken.Mod_BlinkToken_C.OnPreviewStart
struct AMod_BlinkToken_C_OnPreviewStart_Params
{
};

// Function Mod_BlinkToken.Mod_BlinkToken_C.ExecuteUbergraph_Mod_BlinkToken
struct AMod_BlinkToken_C_ExecuteUbergraph_Mod_BlinkToken_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
