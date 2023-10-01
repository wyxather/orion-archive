#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_EEffectCol_Railgun_Tracer_Mod3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EEffectCol_Railgun_Tracer_Mod3.EEffectCol_Railgun_Tracer_Mod3_C.GetParticleEffectAndWwiseEvent
struct UEEffectCol_Railgun_Tracer_Mod3_C_GetParticleEffectAndWwiseEvent_Params
{
	class UObject**                                    ContextObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleEffect;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
