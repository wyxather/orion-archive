#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x18 (0x18 - 0x0)
// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.CanAcquisionAbiliyToWeaponMaster
struct UEquipJobAbilityListHeaderWidget_C_CanAcquisionAbiliyToWeaponMaster_Params
{
public:
	bool                                         Acquisition;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xCB (0xCB - 0x0)
// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetExtraJobAbility
struct UEquipJobAbilityListHeaderWidget_C_SetExtraJobAbility_Params
{
public:
	struct FJobData                              TargetJob;                                         // 0x0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetCanAcquisitionAbility
struct UEquipJobAbilityListHeaderWidget_C_SetCanAcquisitionAbility_Params
{
public:
	bool                                         Acquisition;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE8 (0xE8 - 0x0)
// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetJobIcon
struct UEquipJobAbilityListHeaderWidget_C_SetJobIcon_Params
{
public:
	struct FJobData                              JobData;                                           // 0x0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetCharacterName
struct UEquipJobAbilityListHeaderWidget_C_SetCharacterName_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetHaveJP
struct UEquipJobAbilityListHeaderWidget_C_SetHaveJP_Params
{
public:
	int32                                        HaveJP;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4F0 (0x4F0 - 0x0)
// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetCharacterData
struct UEquipJobAbilityListHeaderWidget_C_SetCharacterData_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ShowSecondJob;                                     // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsGuestCharacter;                                  // 0xF1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetNextAcquisitionJP
struct UEquipJobAbilityListHeaderWidget_C_SetNextAcquisitionJP_Params
{
public:
	int32                                        AcquisitionJP;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.ExecuteUbergraph_EquipJobAbilityListHeaderWidget
struct UEquipJobAbilityListHeaderWidget_C_ExecuteUbergraph_EquipJobAbilityListHeaderWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


