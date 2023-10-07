#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x20 (0x20 - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.CalcHpRatio
struct UBattleSelectPlayerStatus_C_CalcHpRatio_Params
{
public:
	float                                        Ratio;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.GetBoostGaugeLoopTime
struct UBattleSelectPlayerStatus_C_GetBoostGaugeLoopTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBC (0xBC - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.UpdateTextColor
struct UBattleSelectPlayerStatus_C_UpdateTextColor_Params
{
public:
	float                                        HPRatio;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MPRatio;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HPDecRatio;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.SetPotentialityVisibility
struct UBattleSelectPlayerStatus_C_SetPotentialityVisibility_Params
{
public:
	enum class ESlateVisibility                  Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.SetPositionOffset
struct UBattleSelectPlayerStatus_C_SetPositionOffset_Params
{
public:
	struct FVector2D                             InOffset;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.IsGuestCharacter
struct UBattleSelectPlayerStatus_C_IsGuestCharacter_Params
{
public:
	bool                                         IsGuest;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.UpdateIconLoop
struct UBattleSelectPlayerStatus_C_UpdateIconLoop_Params
{
public:
	float                                        IconLoopAlpha;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.AddNewDisease
struct UBattleSelectPlayerStatus_C_AddNewDisease_Params
{
public:
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.SetPlayerStatusVisible
struct UBattleSelectPlayerStatus_C_SetPlayerStatusVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x96 (0x96 - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.SetupDiseaseIcon
struct UBattleSelectPlayerStatus_C_SetupDiseaseIcon_Params
{
public:
	TArray<struct FExecDiseaseHandler>           DiseaseList;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UBuffIcon_C*>                   IconList;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                        StartIndex;                                        // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Instant;                                           // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19D (0x19D - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.SortDiseaseByCount
struct UBattleSelectPlayerStatus_C_SortDiseaseByCount_Params
{
public:
	TArray<struct FExecDiseaseHandler>           DiseaseList;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FExecDiseaseHandler>           Result;                                            // 0x10(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0xB9 (0xB9 - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.AddDiseaseIcon
struct UBattleSelectPlayerStatus_C_AddDiseaseIcon_Params
{
public:
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_243[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            IconTexture;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.Update
struct UBattleSelectPlayerStatus_C_Update_Params
{
public:
	bool                                         Status;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Boost;                                             // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9D (0x9D - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.InitPlayerStatus
struct UBattleSelectPlayerStatus_C_InitPlayerStatus_Params
{
public:
	class ABattlePlayerBP_C*                     Owner;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.ExecuteUbergraph_BattleSelectPlayerStatus
struct UBattleSelectPlayerStatus_C_ExecuteUbergraph_BattleSelectPlayerStatus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


