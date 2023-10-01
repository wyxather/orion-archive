#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_FL_HoldAndThrow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FL_HoldAndThrow.FL_HoldAndThrow_C.HNT_Throw
struct UFL_HoldAndThrow_C_HNT_Throw_Params
{
	class AActor*                                      Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FL_HoldAndThrow.FL_HoldAndThrow_C.HNT_Drop
struct UFL_HoldAndThrow_C_HNT_Drop_Params
{
	class AActor*                                      Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FL_HoldAndThrow.FL_HoldAndThrow_C.HNT_Prime
struct UFL_HoldAndThrow_C_HNT_Prime_Params
{
	class AActor*                                      Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
