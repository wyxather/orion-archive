#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x21 (0x21 - 0x0)
// Function LibAccessor_SaveGame.LibAccessor_SaveGame_C.GetSaveDataManager
struct ULibAccessor_SaveGame_C_GetSaveDataManager_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSSaveDataManagerBP_C*                SaveDataManager;                                   // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function LibAccessor_SaveGame.LibAccessor_SaveGame_C.GetSaveData
struct ULibAccessor_SaveGame_C_GetSaveData_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSSaveGameBP_C*                       KSSaveGame;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


