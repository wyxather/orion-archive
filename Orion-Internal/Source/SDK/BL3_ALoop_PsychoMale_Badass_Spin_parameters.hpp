#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALoop_PsychoMale_Badass_Spin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.OnBegin
struct UALoop_PsychoMale_Badass_Spin_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.OnEnd
struct UALoop_PsychoMale_Badass_Spin_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.OnStop
struct UALoop_PsychoMale_Badass_Spin_C_OnStop_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.Notify_SpinDamage
struct UALoop_PsychoMale_Badass_Spin_C_Notify_SpinDamage_Params
{
};

// Function ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C.ExecuteUbergraph_ALoop_PsychoMale_Badass_Spin
struct UALoop_PsychoMale_Badass_Spin_C_ExecuteUbergraph_ALoop_PsychoMale_Badass_Spin_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
