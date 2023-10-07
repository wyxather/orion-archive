#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x9 (0x9 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetCursorPosition
struct UEquipmentMenuWidget_C_GetCursorPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CursorRight
struct UEquipmentMenuWidget_C_CursorRight_Params
{
public:
	bool                                         MenuDecide;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CursorLeft
struct UEquipmentMenuWidget_C_CursorLeft_Params
{
public:
	bool                                         MenuCancel;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.DecideMenu
struct UEquipmentMenuWidget_C_DecideMenu_Params
{
public:
	bool                                         NextState;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CancelMenu
struct UEquipmentMenuWidget_C_CancelMenu_Params
{
public:
	bool                                         ReturnState;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetMenuRelativePos
struct UEquipmentMenuWidget_C_GetMenuRelativePos_Params
{
public:
	struct FVector2D                             RelativePos;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x65 (0x65 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ApplyDuplicationSkipFlag
struct UEquipmentMenuWidget_C_ApplyDuplicationSkipFlag_Params
{
public:
	TArray<struct FEquipmentRecommendedCalcData> SelectedItem;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FEquipmentRecommendedCalcData> DuplicationList;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x148 (0x148 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Chara RecomenndedEquipment
struct UEquipmentMenuWidget_C_Chara_RecomenndedEquipment_Params
{
public:
	enum class EEQUIPMENT_RECOMENNDED_TYPE       RecomenndedType;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x17 (0x17 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UpdateNextEquipAilment
struct UEquipmentMenuWidget_C_UpdateNextEquipAilment_Params
{
public:
	class FName                                  BeforeEquipItemLabel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AfterItemLabel;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ChangeCategoryCallback
struct UEquipmentMenuWidget_C_ChangeCategoryCallback_Params
{
public:
	bool                                         IsPlus;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x254 (0x254 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.AddEquipmentList
struct UEquipmentMenuWidget_C_AddEquipmentList_Params
{
public:
	TArray<struct FEquipmentRecommendedData>     OutRecommendedEquipList;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  ItemId;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             ItemData;                                          // 0x18(0x120)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        ItemNum;                                           // 0x138(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnDecideAllEquipmentMenuCallback
struct UEquipmentMenuWidget_C_OnDecideAllEquipmentMenuCallback_Params
{
public:
	int32                                        Type;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnClosedGuestCharaDialog
struct UEquipmentMenuWidget_C_OnClosedGuestCharaDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Debug_GetStateInfoAsString
struct UEquipmentMenuWidget_C_Debug_GetStateInfoAsString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ChangeCharaPartMenuFromAllEquip
struct UEquipmentMenuWidget_C_ChangeCharaPartMenuFromAllEquip_Params
{
public:
	int32                                        PlayerID;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CategoryIndex;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectPart;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x95 (0x95 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetCharacterID
struct UEquipmentMenuWidget_C_GetCharacterID_Params
{
public:
	TArray<int32>                                CharaID;                                           // 0x0(0x10)(Parm, OutParm)
};

// 0xEB (0xEB - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.FixedEquipment
struct UEquipmentMenuWidget_C_FixedEquipment_Params
{
public:
	int32                                        EquipIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x134 (0x134 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CalcJobIncrement
struct UEquipmentMenuWidget_C_CalcJobIncrement_Params
{
public:
	struct FJobEvalautionValueData               Evalaution;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEquipmentRecommendedData             EquipParam;                                        // 0x38(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        Point;                                             // 0x6C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SelectedEquipmentData
struct UEquipmentMenuWidget_C_SelectedEquipmentData_Params
{
public:
	TArray<struct FEquipmentRecommendedCalcData> CalcData;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EEQUIPMENT_PART                   EquipPart;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1710[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharaID;                                           // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7D (0x7D - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CheckDuplication
struct UEquipmentMenuWidget_C_CheckDuplication_Params
{
public:
	TArray<struct FEquipmentRecommendedCalcData> CalcData;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  CheckLabel;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Duplication;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1713[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEquipmentRecommendedCalcData> Data;                                              // 0x20(0x10)(Parm, OutParm)
};

// 0xBC (0xBC - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CalcJobEvalaution
struct UEquipmentMenuWidget_C_CalcJobEvalaution_Params
{
public:
	struct FJobEvalautionValueData               Evalaution;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEquipmentRecommendedData             EquipParam;                                        // 0x38(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        EvalautionPoint;                                   // 0x6C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xCD8 (0xCD8 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.TmpSelectedBestEquipment
struct UEquipmentMenuWidget_C_TmpSelectedBestEquipment_Params
{
public:
	int32                                        CharaID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEQUIPMENT_PART                   EquipPart;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEquipmentCategory                EquipCategory;                                     // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1714[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EvalautionPoint;                                   // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  EquipLabel;                                        // 0xC(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanEquip;                                          // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.RecommendedCursor
struct UEquipmentMenuWidget_C_RecommendedCursor_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Recomennded Callback
struct UEquipmentMenuWidget_C_Recomennded_Callback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.RecommendedCancelCallback
struct UEquipmentMenuWidget_C_RecommendedCancelCallback_Params
{
public:
	int32                                        Type;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F9 (0x2F9 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CenterDecide
struct UEquipmentMenuWidget_C_CenterDecide_Params
{
public:
	int32                                        EquipmentPartIndex;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SetBarMode
struct UEquipmentMenuWidget_C_SetBarMode_Params
{
public:
	bool                                         IsBar;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.EquipRecommendedCinfirmCallback
struct UEquipmentMenuWidget_C_EquipRecommendedCinfirmCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.EquipRemoveAllCallback
struct UEquipmentMenuWidget_C_EquipRemoveAllCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.IsChangeStateCloseFinish
struct UEquipmentMenuWidget_C_IsChangeStateCloseFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.IsChangeStateOpenFinish
struct UEquipmentMenuWidget_C_IsChangeStateOpenFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Init
struct UEquipmentMenuWidget_C_Init_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xAD (0xAD - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SelectRecommendedAccessory
struct UEquipmentMenuWidget_C_SelectRecommendedAccessory_Params
{
public:
	enum class EEQUIPMENT_PART                   EquipPart;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_171F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEquipmentRecommendedData>     RecommendedList;                                   // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Result;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25E (0x25E - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SelectRecommendedArmor
struct UEquipmentMenuWidget_C_SelectRecommendedArmor_Params
{
public:
	enum class EEQUIPMENT_PART                   EquipPart;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1720[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEquipmentRecommendedData>     RecommendedList;                                   // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         SelectFromSameCategory;                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x548 (0x548 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.EquipItem_Local
struct UEquipmentMenuWidget_C_EquipItem_Local_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEQUIPMENT_PART                   EquipPart;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1722[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ItemLabel;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRemove;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25E (0x25E - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SelectRecommendedWeapon
struct UEquipmentMenuWidget_C_SelectRecommendedWeapon_Params
{
public:
	enum class EEQUIPMENT_PART                   EquipPart;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1724[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEquipmentRecommendedData>     RecommendedList;                                   // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Result;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D1 (0x2D1 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CategorizeEquipmentItems
struct UEquipmentMenuWidget_C_CategorizeEquipmentItems_Params
{
public:
	bool                                         RemoveFixedEquip;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x13 (0x13 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.IsClosingState
struct UEquipmentMenuWidget_C_IsClosingState_Params
{
public:
	int32                                        State;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CloseCenterList
struct UEquipmentMenuWidget_C_CloseCenterList_Params
{
public:
	bool                                         IsPlayNullCloseAnim;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9D (0x9D - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SetGuideUI
struct UEquipmentMenuWidget_C_SetGuideUI_Params
{
public:
	bool                                         NotUsePlus;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CategoryPosToCharacterId
struct UEquipmentMenuWidget_C_CategoryPosToCharacterId_Params
{
public:
	int32                                        CategoryCursorPos;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CharacterID;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Get Equip Effect Params Int Array_DEPRICATED
struct UEquipmentMenuWidget_C_Get_Equip_Effect_Params_Int_Array_DEPRICATED_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentWeaponLabel;                                // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1727[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Params;                                            // 0x10(0x10)(Parm, OutParm)
};

// 0x41A (0x41A - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetEquipItemData
struct UEquipmentMenuWidget_C_GetEquipItemData_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEQUIPMENT_PART                   EquipmentPart;                                     // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1728[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             ItemData;                                          // 0x8(0x120)(Parm, OutParm)
	struct FItemDataForMenu                      ItemDataForMenu;                                   // 0x128(0x18)(Parm, OutParm)
	bool                                         Success;                                           // 0x140(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x42C (0x42C - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CreateEquipItemList
struct UEquipmentMenuWidget_C_CreateEquipItemList_Params
{
public:
	enum class EEQUIPMENT_PART                   EquipmentPart;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1729[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharacterID;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C4 (0x4C4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CreateCategoryData
struct UEquipmentMenuWidget_C_CreateCategoryData_Params
{
public:
	TArray<struct FListWidgetCategory>           OutCategoryData;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA4 (0xA4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ListEvent_Right
struct UEquipmentMenuWidget_C_ListEvent_Right_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_172E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdxInAll;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x63 (0x63 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ListEvent_Center
struct UEquipmentMenuWidget_C_ListEvent_Center_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_172F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdxInAll;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.IsPlayingAnim
struct UEquipmentMenuWidget_C_IsPlayingAnim_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5CC (0x5CC - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CreateEquipPartList
struct UEquipmentMenuWidget_C_CreateEquipPartList_Params
{
public:
	TArray<struct FMJListWidgetItemData>         OutItemList;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FName>                          OutEquippedList;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA (0xA - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetCurrentState_Local
struct UEquipmentMenuWidget_C_GetCurrentState_Local_Params
{
public:
	enum class EEQUIPMENT_MENU_STATE             CurrentState;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnEndState_Local
struct UEquipmentMenuWidget_C_OnEndState_Local_Params
{
public:
	enum class EEQUIPMENT_MENU_STATE             CurrentState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEQUIPMENT_MENU_STATE             NextState;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnBeginState_Local
struct UEquipmentMenuWidget_C_OnBeginState_Local_Params
{
public:
	enum class EEQUIPMENT_MENU_STATE             PrevState;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEQUIPMENT_MENU_STATE             CurrentState;                                      // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x52 (0x52 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnUpdate_Local
struct UEquipmentMenuWidget_C_OnUpdate_Local_Params
{
public:
	enum class EEQUIPMENT_MENU_STATE             CurrentState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SetNextState_Local
struct UEquipmentMenuWidget_C_SetNextState_Local_Params
{
public:
	enum class EEQUIPMENT_MENU_STATE             NextState;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.IsRunning
struct UEquipmentMenuWidget_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Close Menu
struct UEquipmentMenuWidget_C_Close_Menu_Params
{
public:
	bool                                         IsPlayNullCloseAnim;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnRightAxisX
struct UEquipmentMenuWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnRightAxisY
struct UEquipmentMenuWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnLeftAxisX
struct UEquipmentMenuWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnLeftAxisY
struct UEquipmentMenuWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnGamePadAxisX
struct UEquipmentMenuWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnGamePadAxisY
struct UEquipmentMenuWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnListPaging
struct UEquipmentMenuWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.WorldMapSlowCursorX
struct UEquipmentMenuWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.WorldMapSlowCursorY
struct UEquipmentMenuWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.HelpScrollAxis
struct UEquipmentMenuWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetRightAxisX
struct UEquipmentMenuWidget_C_GetRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetRightAxisY
struct UEquipmentMenuWidget_C_GetRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetLeftAxisX
struct UEquipmentMenuWidget_C_GetLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetLeftAxisY
struct UEquipmentMenuWidget_C_GetLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetGamePadAxisX
struct UEquipmentMenuWidget_C_GetGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetGamePadAxisY
struct UEquipmentMenuWidget_C_GetGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SubMenu_WorldMapSlowCursorX
struct UEquipmentMenuWidget_C_SubMenu_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SubMenu_WorldMapSlowCursorY
struct UEquipmentMenuWidget_C_SubMenu_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnUpdateState
struct UEquipmentMenuWidget_C_OnUpdateState_Params
{
public:
	int32                                        CurrentState;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnBeginState
struct UEquipmentMenuWidget_C_OnBeginState_Params
{
public:
	int32                                        PrevState;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentState;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnEndState
struct UEquipmentMenuWidget_C_OnEndState_Params
{
public:
	int32                                        CurrentState;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NextState;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ExecuteUbergraph_EquipmentMenuWidget
struct UEquipmentMenuWidget_C_ExecuteUbergraph_EquipmentMenuWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


