#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_Hotshot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_Hotshot.Mod_Hotshot_C.IsCurrentWeaponHot
struct AMod_Hotshot_C_IsCurrentWeaponHot_Params
{
	bool                                               IsHotShotWeapon;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_Hotshot.Mod_Hotshot_C.GetProcChance
struct AMod_Hotshot_C_GetProcChance_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_Hotshot.Mod_Hotshot_C.DoAction
struct AMod_Hotshot_C_DoAction_Params
{
	class UActionComponent**                           ActionComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ActionID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_Hotshot.Mod_Hotshot_C.ModifyInspectInfo
struct AMod_Hotshot_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_Hotshot.Mod_Hotshot_C.GetOnFireDamage
struct AMod_Hotshot_C_GetOnFireDamage_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_Hotshot.Mod_Hotshot_C.ApplyProc
struct AMod_Hotshot_C_ApplyProc_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function Mod_Hotshot.Mod_Hotshot_C.ShouldProc
struct AMod_Hotshot_C_ShouldProc_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_Hotshot.Mod_Hotshot_C.ModifyDamage
struct AMod_Hotshot_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_Hotshot.Mod_Hotshot_C.GetDamageType
struct AMod_Hotshot_C_GetDamageType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function Mod_Hotshot.Mod_Hotshot_C.NotifyHitTarget
struct AMod_Hotshot_C_NotifyHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Mod_Hotshot.Mod_Hotshot_C.ExecuteUbergraph_Mod_Hotshot
struct AMod_Hotshot_C_ExecuteUbergraph_Mod_Hotshot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
