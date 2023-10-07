#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x120 (0x120 - 0x0)
// Function LibAbilityAcquisition.LibAbilityAcquisition_C.GetUnOpenedSupportDetailText
struct ULibAbilityAcquisition_C_GetUnOpenedSupportDetailText_Params
{
public:
	class FName                                  AbilityName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityDetail;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Result;                                            // 0x18(0x18)(Parm, OutParm)
};

// 0x2A8 (0x2A8 - 0x0)
// Function LibAbilityAcquisition.LibAbilityAcquisition_C.GetNoRestrictWeaponHelpText
struct ULibAbilityAcquisition_C_GetNoRestrictWeaponHelpText_Params
{
public:
	class FText                                  AbilityDetail;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  ItemLabel;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Result;                                            // 0x28(0x18)(Parm, OutParm)
};

// 0x60 (0x60 - 0x0)
// Function LibAbilityAcquisition.LibAbilityAcquisition_C.GetAdvancedAbilityIcon
struct ULibAbilityAcquisition_C_GetAdvancedAbilityIcon_Params
{
public:
	enum class EABILITY_ICON_TYPE                AbilityIconType;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E1E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function LibAbilityAcquisition.LibAbilityAcquisition_C.GetAbilityIcon
struct ULibAbilityAcquisition_C_GetAbilityIcon_Params
{
public:
	enum class EABILITY_ICON_TYPE                AbilityIconType;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E22[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x200 (0x200 - 0x0)
// Function LibAbilityAcquisition.LibAbilityAcquisition_C.GetAbilityDetail
struct ULibAbilityAcquisition_C_GetAbilityDetail_Params
{
public:
	struct FAbilityDataBase                      ABILITY;                                           // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0xF0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ReturnValue;                                       // 0xF8(0x18)(Parm, OutParm, ReturnParm)
};

// 0x1CD (0x1CD - 0x0)
// Function LibAbilityAcquisition.LibAbilityAcquisition_C.GetAcquisitionJPCost
struct ULibAbilityAcquisition_C_GetAcquisitionJPCost_Params
{
public:
	struct FSavePlayerCharacterData              SaveCharacterData;                                 // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FJobData                              JobData;                                           // 0xF0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x1B8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        JPCost;                                            // 0x1C0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8A5 (0x8A5 - 0x0)
// Function LibAbilityAcquisition.LibAbilityAcquisition_C.CreateAcquisitionListItem
struct ULibAbilityAcquisition_C_CreateAcquisitionListItem_Params
{
public:
	int32                                        JobID;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E29[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x8(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CategoryId;                                        // 0xF8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E2A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UListWidgetJobAbilityWidget_C*         ListWidgetJobAbilityWidget;                        // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x108(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMJListWidgetItemData>         ListItem;                                          // 0x110(0x10)(Parm, OutParm)
	TArray<struct FJobLearnAbility>              JobLearnAbilityList;                               // 0x120(0x10)(Parm, OutParm)
	int32                                        AcquisitionCost;                                   // 0x130(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


