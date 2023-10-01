#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_DigiClone_Release_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_DigiClone_Release.Action_DigiClone_Release_C.OnBegin
struct UAction_DigiClone_Release_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_DigiClone_Release.Action_DigiClone_Release_C.ExecuteUbergraph_Action_DigiClone_Release
struct UAction_DigiClone_Release_C_ExecuteUbergraph_Action_DigiClone_Release_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
