#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Rakk_PhoenixFakeDeath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AHitReact_Rakk_PhoenixFakeDeath.AHitReact_Rakk_PhoenixFakeDeath_C.OnBegin
struct UAHitReact_Rakk_PhoenixFakeDeath_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AHitReact_Rakk_PhoenixFakeDeath.AHitReact_Rakk_PhoenixFakeDeath_C.ModeChanged
struct UAHitReact_Rakk_PhoenixFakeDeath_C_ModeChanged_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AHitReact_Rakk_PhoenixFakeDeath.AHitReact_Rakk_PhoenixFakeDeath_C.ExecuteUbergraph_AHitReact_Rakk_PhoenixFakeDeath
struct UAHitReact_Rakk_PhoenixFakeDeath_C_ExecuteUbergraph_AHitReact_Rakk_PhoenixFakeDeath_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
