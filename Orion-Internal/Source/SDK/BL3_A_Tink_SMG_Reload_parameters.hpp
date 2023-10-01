#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tink_SMG_Reload_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Tink_SMG_Reload.A_Tink_SMG_Reload_C.OnBegin
struct UA_Tink_SMG_Reload_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Tink_SMG_Reload.A_Tink_SMG_Reload_C.ExecuteUbergraph_A_Tink_SMG_Reload
struct UA_Tink_SMG_Reload_C_ExecuteUbergraph_A_Tink_SMG_Reload_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
