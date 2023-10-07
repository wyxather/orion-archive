#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x76 (0x76 - 0x0)
// Function LibGameDataStorage.LibGameDataStorage_C.CreateMainMemberCharaFormArray
struct ULibGameDataStorage_C_CreateMainMemberCharaFormArray_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<uint8>                                CharaForm;                                         // 0x8(0x10)(Parm, OutParm)
};

// 0x1D0 (0x1D0 - 0x0)
// Function LibGameDataStorage.LibGameDataStorage_C.CreateMainMemberArrayForSaveData
struct ULibGameDataStorage_C_CreateMainMemberArrayForSaveData_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CharacterIDs;                                      // 0x8(0x10)(Parm, OutParm)
	TArray<int32>                                JobIDs;                                            // 0x18(0x10)(Parm, OutParm)
};

// 0x6C (0x6C - 0x0)
// Function LibGameDataStorage.LibGameDataStorage_C.UpdateSaveDataPlayerLocation
struct ULibGameDataStorage_C_UpdateSaveDataPlayerLocation_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function LibGameDataStorage.LibGameDataStorage_C.MakeMainMissionClearFlag
struct ULibGameDataStorage_C_MakeMainMissionClearFlag_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ClearFlag;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function LibGameDataStorage.LibGameDataStorage_C.GetCurrentPlayTime
struct ULibGameDataStorage_C_GetCurrentPlayTime_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayTime;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


