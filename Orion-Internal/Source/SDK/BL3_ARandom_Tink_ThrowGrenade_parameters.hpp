#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_Tink_ThrowGrenade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.OnEnd
struct UARandom_Tink_ThrowGrenade_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.SpawnGrenade
struct UARandom_Tink_ThrowGrenade_C_SpawnGrenade_Params
{
};

// Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.Throw
struct UARandom_Tink_ThrowGrenade_C_Throw_Params
{
};

// Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.PrimeExplosive
struct UARandom_Tink_ThrowGrenade_C_PrimeExplosive_Params
{
};

// Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.OnBegin
struct UARandom_Tink_ThrowGrenade_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.ExecuteUbergraph_ARandom_Tink_ThrowGrenade
struct UARandom_Tink_ThrowGrenade_C_ExecuteUbergraph_ARandom_Tink_ThrowGrenade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
