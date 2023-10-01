// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ElementalEffectCollection_Railgun_Tracer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElementalEffectCollection_Railgun_Tracer.ElementalEffectCollection_Railgun_Tracer_C.GetParticleEffectAndWwiseEvent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                ContextObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ParticleEffect                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             WwiseEvent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UElementalEffectCollection_Railgun_Tracer_C::GetParticleEffectAndWwiseEvent(class UObject** ContextObject, class UParticleSystem** ParticleEffect, class UWwiseEvent** WwiseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementalEffectCollection_Railgun_Tracer.ElementalEffectCollection_Railgun_Tracer_C.GetParticleEffectAndWwiseEvent");

	UElementalEffectCollection_Railgun_Tracer_C_GetParticleEffectAndWwiseEvent_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParticleEffect != nullptr)
		*ParticleEffect = params.ParticleEffect;
	if (WwiseEvent != nullptr)
		*WwiseEvent = params.WwiseEvent;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
