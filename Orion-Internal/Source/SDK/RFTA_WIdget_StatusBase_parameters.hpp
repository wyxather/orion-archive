#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_WIdget_StatusBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WIdget_StatusBase.WIdget_StatusBase_C.Add Existing Actions
struct UWIdget_StatusBase_C_Add_Existing_Actions_Params
{
	class UActionComponent*                            Action_Component;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WIdget_StatusBase.WIdget_StatusBase_C.Get Action Component
struct UWIdget_StatusBase_C_Get_Action_Component_Params
{
	class UActionComponent*                            Action_Component;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WIdget_StatusBase.WIdget_StatusBase_C.On Action Added
struct UWIdget_StatusBase_C_On_Action_Added_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WIdget_StatusBase.WIdget_StatusBase_C.ExecuteUbergraph_WIdget_StatusBase
struct UWIdget_StatusBase_C_ExecuteUbergraph_WIdget_StatusBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
