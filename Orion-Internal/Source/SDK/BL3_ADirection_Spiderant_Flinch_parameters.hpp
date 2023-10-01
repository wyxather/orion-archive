#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ADirection_Spiderant_Flinch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ADirection_Spiderant_Flinch.ADirection_Spiderant_Flinch_C.OnBegin
struct UADirection_Spiderant_Flinch_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ADirection_Spiderant_Flinch.ADirection_Spiderant_Flinch_C.ExecuteUbergraph_ADirection_Spiderant_Flinch
struct UADirection_Spiderant_Flinch_C_ExecuteUbergraph_ADirection_Spiderant_Flinch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
