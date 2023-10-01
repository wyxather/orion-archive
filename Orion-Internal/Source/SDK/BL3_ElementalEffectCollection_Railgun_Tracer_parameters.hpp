#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ElementalEffectCollection_Railgun_Tracer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ElementalEffectCollection_Railgun_Tracer.ElementalEffectCollection_Railgun_Tracer_C.GetParticleEffectAndWwiseEvent
struct UElementalEffectCollection_Railgun_Tracer_C_GetParticleEffectAndWwiseEvent_Params
{
	class UObject**                                    ContextObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleEffect;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
