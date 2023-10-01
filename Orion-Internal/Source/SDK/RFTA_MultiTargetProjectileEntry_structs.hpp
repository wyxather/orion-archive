#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct MultiTargetProjectileEntry.MultiTargetProjectileEntry
// 0x0014
struct FMultiTargetProjectileEntry
{
	class AActor*                                      CurrentTargetActor_7_26963AAC4B4146F268DB7FBBB64CB16B;    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARangedWeapon_Mod_Action_MultiTarget_C*      Mod_9_72BE64DD45026C16CC7FF4A65D5C9A6A;                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ProjectileIndex_23_0DF0541C4C0FE591E57794B0A51CC662;      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
