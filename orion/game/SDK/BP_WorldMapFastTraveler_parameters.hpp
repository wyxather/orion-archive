#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x39 (0x39 - 0x0)
// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.ResetBanMissionRecordFlag
struct ABP_WorldMapFastTraveler_C_ResetBanMissionRecordFlag_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1502[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xAC (0xAC - 0x0)
// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.IsPossibleFastTravel
struct ABP_WorldMapFastTraveler_C_IsPossibleFastTravel_Params
{
public:
	struct FWorldMapTable                        WorldMapData;                                      // 0x0(0x90)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xD9 (0xD9 - 0x0)
// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.ExecFastTravelIfPossible
struct ABP_WorldMapFastTraveler_C_ExecFastTravelIfPossible_Params
{
public:
	struct FWorldMapTable                        DestinationData;                                   // 0x0(0x90)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	FDelegateProperty_                           OnCloseConfirmDialog;                              // 0x90(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	FDelegateProperty_                           OnCloseFailedDialog;                               // 0xA0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	enum class EJudgeFastTravelAvailableResponse ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x121 (0x121 - 0x0)
// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.CanFastTravelSomeWhere
struct ABP_WorldMapFastTraveler_C_CanFastTravelSomeWhere_Params
{
public:
	TMap<class FName, class UWorldMapIconBase*>  Icons;                                             // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x223 (0x223 - 0x0)
// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.CanFastTravel
struct ABP_WorldMapFastTraveler_C_CanFastTravel_Params
{
public:
	struct FWorldMapTable                        WorldMapData;                                      // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EJudgeFastTravelAvailableResponse Response;                                          // 0x90(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1505[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x98(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x15C (0x15C - 0x0)
// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.Is Restriction By Main Story
struct ABP_WorldMapFastTraveler_C_Is_Restriction_By_Main_Story_Params
{
public:
	struct FWorldMapTable                        WorldMapTable;                                     // 0x0(0x90)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Restriction;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x379 (0x379 - 0x0)
// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.Is Restriction by Follow Field Command
struct ABP_WorldMapFastTraveler_C_Is_Restriction_by_Follow_Field_Command_Params
{
public:
	bool                                         Restriction;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xDD (0xDD - 0x0)
// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.OnStartFieldMainSequence
struct ABP_WorldMapFastTraveler_C_OnStartFieldMainSequence_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1508[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.OnClosedFailedDialog
struct ABP_WorldMapFastTraveler_C_OnClosedFailedDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.FastTravelRestrictionAtPrologue
struct ABP_WorldMapFastTraveler_C_FastTravelRestrictionAtPrologue_Params
{
public:
	struct FWorldMapTable                        WorldMapData;                                      // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Restriction;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE9 (0xE9 - 0x0)
// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.IsVisitedLevel
struct ABP_WorldMapFastTraveler_C_IsVisitedLevel_Params
{
public:
	struct FWorldMapTable                        WorldMapTable;                                     // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IsVisitedMap;                                      // 0x90(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.OnStartFastTravel
struct ABP_WorldMapFastTraveler_C_OnStartFastTravel_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.OnClosedConfrimDialog
struct ABP_WorldMapFastTraveler_C_OnClosedConfrimDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.ExecuteUbergraph_BP_WorldMapFastTraveler
struct ABP_WorldMapFastTraveler_C_ExecuteUbergraph_BP_WorldMapFastTraveler_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


