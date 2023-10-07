#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x7B (0x7B - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.AcquisitionAbility
struct UBP_WeaponMasterUtil_C_AcquisitionAbility_Params
{
public:
	class FName                                  LegendWeapon;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLearned;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F67[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AbilityLabel;                                      // 0x14(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x75 (0x75 - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.TryAcquisitionSupportAbility
struct UBP_WeaponMasterUtil_C_TryAcquisitionSupportAbility_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLearned;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F6C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AbilityLabel;                                      // 0xC(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AbilityIndex;                                      // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.GetWeaponMasterJobLicenseItemLabel
struct UBP_WeaponMasterUtil_C_GetWeaponMasterJobLicenseItemLabel_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ItemLabel;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.AcquisitionWeaponMasterJob
struct UBP_WeaponMasterUtil_C_AcquisitionWeaponMasterJob_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D1 (0x1D1 - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.BuyLegendWeapon
struct UBP_WeaponMasterUtil_C_BuyLegendWeapon_Params
{
public:
	TArray<class FName>                          Weapons;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.IsFirstSoldLegendWeapon
struct UBP_WeaponMasterUtil_C_IsFirstSoldLegendWeapon_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.HaveWeaponMasterJob
struct UBP_WeaponMasterUtil_C_HaveWeaponMasterJob_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.IsFirstTalk
struct UBP_WeaponMasterUtil_C_IsFirstTalk_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x17C (0x17C - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.MakeWeaponListTextForDialog
struct UBP_WeaponMasterUtil_C_MakeWeaponListTextForDialog_Params
{
public:
	TArray<class FName>                          Weapons;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x18(0x18)(Parm, OutParm)
};

// 0x2E9 (0x2E9 - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.GetLegendWeaponsInBackpack
struct UBP_WeaponMasterUtil_C_GetLegendWeaponsInBackpack_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          WeaponLabels;                                      // 0x8(0x10)(Parm, OutParm)
};

// 0x1FA (0x1FA - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.ConvertRustWeaponToLegendWeapon
struct UBP_WeaponMasterUtil_C_ConvertRustWeaponToLegendWeapon_Params
{
public:
	class FName                                  RustedWeapon;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LegendWeapon;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x210 (0x210 - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.GetSoldLegentWeapon
struct UBP_WeaponMasterUtil_C_GetSoldLegentWeapon_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSold;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F8D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SoldWeapons;                                       // 0x10(0x10)(Parm, OutParm)
	int32                                        TotalPrice;                                        // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.GetLegendWeaponFlagList
struct UBP_WeaponMasterUtil_C_GetLegendWeaponFlagList_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class FName>               FlagList;                                          // 0x8(0x50)(Parm, OutParm)
};

// 0x148 (0x148 - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.IsAllActiveLegendWeaponFlag
struct UBP_WeaponMasterUtil_C_IsAllActiveLegendWeaponFlag_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.IsHaveRustedWeapon
struct UBP_WeaponMasterUtil_C_IsHaveRustedWeapon_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2E8 (0x2E8 - 0x0)
// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.GetRustedWeaponsInBackpack
struct UBP_WeaponMasterUtil_C_GetRustedWeaponsInBackpack_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          WeaponLabels;                                      // 0x8(0x10)(Parm, OutParm)
};

}
}


