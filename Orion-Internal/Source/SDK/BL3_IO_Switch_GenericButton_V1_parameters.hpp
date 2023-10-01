#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Switch_GenericButton_V1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.UserConstructionScript
struct AIO_Switch_GenericButton_V1_C_UserConstructionScript_Params
{
};

// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Animation__FinishedFunc
struct AIO_Switch_GenericButton_V1_C_Animation__FinishedFunc_Params
{
};

// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Animation__UpdateFunc
struct AIO_Switch_GenericButton_V1_C_Animation__UpdateFunc_Params
{
};

// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Timeline_0__FinishedFunc
struct AIO_Switch_GenericButton_V1_C_Timeline_0__FinishedFunc_Params
{
};

// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Timeline_0__UpdateFunc
struct AIO_Switch_GenericButton_V1_C_Timeline_0__UpdateFunc_Params
{
};

// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Timeline_1__FinishedFunc
struct AIO_Switch_GenericButton_V1_C_Timeline_1__FinishedFunc_Params
{
};

// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Timeline_1__UpdateFunc
struct AIO_Switch_GenericButton_V1_C_Timeline_1__UpdateFunc_Params
{
};

// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.ReceiveBeginPlay
struct AIO_Switch_GenericButton_V1_C_ReceiveBeginPlay_Params
{
};

// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.PlaySwitchMovement
struct AIO_Switch_GenericButton_V1_C_PlaySwitchMovement_Params
{
	TEnumAsByte<Enum_Switch_ReasonForMoving>*          Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.FailedUse
struct AIO_Switch_GenericButton_V1_C_FailedUse_Params
{
};

// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.ExecuteUbergraph_IO_Switch_GenericButton_V1
struct AIO_Switch_GenericButton_V1_C_ExecuteUbergraph_IO_Switch_GenericButton_V1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
