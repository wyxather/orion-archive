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

// UserDefinedStruct Mod_MultiTarget_PendingTarget.Mod_MultiTarget_PendingTarget
// 0x0018
struct FMod_MultiTarget_PendingTarget
{
	class AActor*                                      Target_7_5158E1D744C1D1492821D29A10661FF9;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              Projectiles_6_0EA03AB44B6FABDA9AC03C834E45C02A;           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
