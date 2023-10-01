#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Priest_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.GetCharacter
struct ACharacter_Root_Priest_Projectile_C_GetCharacter_Params
{
	class ACharacterGunfire*                           AsCharacter_Gunfire;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.OnHitGround
struct ACharacter_Root_Priest_Projectile_C_OnHitGround_Params
{
	struct FHitResult*                                 Impact;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector*                                    GroundLocation;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.ExecuteUbergraph_Character_Root_Priest_Projectile
struct ACharacter_Root_Priest_Projectile_C_ExecuteUbergraph_Character_Root_Priest_Projectile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
