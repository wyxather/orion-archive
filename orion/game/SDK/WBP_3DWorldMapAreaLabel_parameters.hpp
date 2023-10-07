#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xA9 (0xA9 - 0x0)
// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.SetEncounterLevel
struct UWBP_3DWorldMapAreaLabel_C_SetEncounterLevel_Params
{
public:
	int32                                        LevelId;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.Override Map Name And Encounter Level If Flag Enable
struct UWBP_3DWorldMapAreaLabel_C_Override_Map_Name_And_Encounter_Level_If_Flag_Enable_Params
{
public:
	TArray<struct FWorldMapNameOverride>         WorldMapTable;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4C (0x4C - 0x0)
// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.GetOverlapArea
struct UWBP_3DWorldMapAreaLabel_C_GetOverlapArea_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.SetPosition
struct UWBP_3DWorldMapAreaLabel_C_SetPosition_Params
{
public:
	struct FVector2D                             InPosition;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.IsOpen
struct UWBP_3DWorldMapAreaLabel_C_IsOpen_Params
{
public:
	bool                                         IsOpen;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9C (0x9C - 0x0)
// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.SetTextData
struct UWBP_3DWorldMapAreaLabel_C_SetTextData_Params
{
public:
	struct FWorldMapTable                        WorldMapTable;                                     // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x11 (0x11 - 0x0)
// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.Close Area UI if Needed
struct UWBP_3DWorldMapAreaLabel_C_Close_Area_UI_if_Needed_Params
{
public:
	bool                                         Fast;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsPlayedAnim;                                      // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA1 (0xA1 - 0x0)
// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.Open Area UI if Needed
struct UWBP_3DWorldMapAreaLabel_C_Open_Area_UI_if_Needed_Params
{
public:
	struct FWorldMapTable                        WorldMapTable;                                     // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Unreached;                                         // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Fast;                                              // 0x91(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsPlayedAnim;                                      // 0x92(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function WBP_3DWorldMapAreaLabel.WBP_3DWorldMapAreaLabel_C.ExecuteUbergraph_WBP_3DWorldMapAreaLabel
struct UWBP_3DWorldMapAreaLabel_C_ExecuteUbergraph_WBP_3DWorldMapAreaLabel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


