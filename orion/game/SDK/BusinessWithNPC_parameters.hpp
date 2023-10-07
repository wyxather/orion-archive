#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xD8 (0xD8 - 0x0)
// Function BusinessWithNPC.BusinessWithNPC_C.OpenNotificationAnimal
struct UBusinessWithNPC_C_OpenNotificationAnimal_Params
{
public:
	struct FSpActMerchantResult                  SpActMerchantResult;                               // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bIsFast;                                           // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BusinessWithNPC.BusinessWithNPC_C.HideTemporaryInternal
struct UBusinessWithNPC_C_HideTemporaryInternal_Params
{
public:
	bool                                         IsHidden;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EWIDGET_TEMPORARY_HIDE_USER       HideUser;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function BusinessWithNPC.BusinessWithNPC_C.Tick
struct UBusinessWithNPC_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14E (0x14E - 0x0)
// Function BusinessWithNPC.BusinessWithNPC_C.SetupNotificationBody
struct UBusinessWithNPC_C_SetupNotificationBody_Params
{
public:
	struct FSpActMerchantResult                  SpActMerchantResult;                               // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function BusinessWithNPC.BusinessWithNPC_C.CloseNotification
struct UBusinessWithNPC_C_CloseNotification_Params
{
public:
	bool                                         bIsFast;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function BusinessWithNPC.BusinessWithNPC_C.OpenNotification
struct UBusinessWithNPC_C_OpenNotification_Params
{
public:
	struct FSpActMerchantResult                  SpActMerchantResult;                               // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bIsFast;                                           // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BusinessWithNPC.BusinessWithNPC_C.ExecuteUbergraph_BusinessWithNPC
struct UBusinessWithNPC_C_ExecuteUbergraph_BusinessWithNPC_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


