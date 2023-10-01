#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Dodge_Ape_Bullet_IdleR_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dodge_Ape_Bullet_IdleR.Dodge_Ape_Bullet_IdleR_C.OnEnd
struct UDodge_Ape_Bullet_IdleR_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dodge_Ape_Bullet_IdleR.Dodge_Ape_Bullet_IdleR_C.ExecuteUbergraph_Dodge_Ape_Bullet_IdleR
struct UDodge_Ape_Bullet_IdleR_C_ExecuteUbergraph_Dodge_Ape_Bullet_IdleR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
