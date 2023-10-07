#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x5C (0x5C - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetCharaTextureFromCharacterResource
struct UNPCStatusPartsWidget_C_SetCharaTextureFromCharacterResource_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             TargetTexture;                                     // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1C2 (0x1C2 - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetSessionSkill
struct UNPCStatusPartsWidget_C_SetSessionSkill_Params
{
public:
	class FName                                  SupporterLabel;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetSubTargetIcon
struct UNPCStatusPartsWidget_C_SetSubTargetIcon_Params
{
public:
	TArray<class FName>                          AdditionalTargetNpcLabels;                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EKSCharacterAction                ActionType;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   ActionDir;                                         // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetBusinessSkill
struct UNPCStatusPartsWidget_C_SetBusinessSkill_Params
{
public:
	int32                                        NPCID;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetRankText
struct UNPCStatusPartsWidget_C_SetRankText_Params
{
public:
	class FName                                  TextLabel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.HideRows
struct UNPCStatusPartsWidget_C_HideRows_Params
{
public:
	bool                                         HideRank;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HideAbility;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HideAbilityDetail;                                 // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HideLimit;                                         // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HideAdditionalSkill;                               // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x110 (0x110 - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetAbilityDetail
struct UNPCStatusPartsWidget_C_SetAbilityDetail_Params
{
public:
	bool                                         ShowAbilityDetail;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_126A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAbilityDataBase                      ABILITY;                                           // 0x8(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x29 (0x29 - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetSupportLimit
struct UNPCStatusPartsWidget_C_SetSupportLimit_Params
{
public:
	bool                                         ShowLimit;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_126C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SupportLimit;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C8 (0x1C8 - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.Set Ability
struct UNPCStatusPartsWidget_C_Set_Ability_Params
{
public:
	bool                                         LearnAbility;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1285[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAbilityDataBase                      ABILITY;                                           // 0x8(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EWEAPON_CATEGORY                  EnforcerWeapon;                                    // 0xF8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1286[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NameAbilityTextLabel;                              // 0xFC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowSp;                                            // 0x104(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1289[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ConsumeSp;                                         // 0x108(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowAbilityDetail;                                 // 0x10C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetRank
struct UNPCStatusPartsWidget_C_SetRank_Params
{
public:
	bool                                         ShowRank;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_128A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Rank;                                              // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetName
struct UNPCStatusPartsWidget_C_SetName_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1B8 (0x1B8 - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetIconWithAdditionalTargetNpcLables
struct UNPCStatusPartsWidget_C_SetIconWithAdditionalTargetNpcLables_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          AdditionalTargetNpcLabels;                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EKSCharacterAction                ActionType;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   ActionDir;                                         // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.Set Icon
struct UNPCStatusPartsWidget_C_Set_Icon_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                ActionType;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   ActionDir;                                         // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.Tick
struct UNPCStatusPartsWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.ExecuteUbergraph_NPCStatusPartsWidget
struct UNPCStatusPartsWidget_C_ExecuteUbergraph_NPCStatusPartsWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


