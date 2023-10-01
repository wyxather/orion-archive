// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPF_AudioFunctionLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPF_AudioFunctionLibrary.BPF_AudioFunctionLibrary_C.GetDistanceFromEmitterToListener
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseAudioComponent*    AudioComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RTPCValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_AudioFunctionLibrary_C::STATIC_GetDistanceFromEmitterToListener(class UWwiseAudioComponent* AudioComponent, class UObject* __WorldContext, float* RTPCValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_AudioFunctionLibrary.BPF_AudioFunctionLibrary_C.GetDistanceFromEmitterToListener");

	UBPF_AudioFunctionLibrary_C_GetDistanceFromEmitterToListener_Params params;
	params.AudioComponent = AudioComponent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RTPCValue != nullptr)
		*RTPCValue = params.RTPCValue;
}


// Function BPF_AudioFunctionLibrary.BPF_AudioFunctionLibrary_C.SetRandomVariation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseAudioComponent*    TargetWwiseComponent           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_AudioFunctionLibrary_C::STATIC_SetRandomVariation(class UWwiseAudioComponent* TargetWwiseComponent, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_AudioFunctionLibrary.BPF_AudioFunctionLibrary_C.SetRandomVariation");

	UBPF_AudioFunctionLibrary_C_SetRandomVariation_Params params;
	params.TargetWwiseComponent = TargetWwiseComponent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_AudioFunctionLibrary.BPF_AudioFunctionLibrary_C.GetDistanceBetweenVectors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Vector_1                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Vector_2                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_AudioFunctionLibrary_C::STATIC_GetDistanceBetweenVectors(const struct FVector& Vector_1, const struct FVector& Vector_2, class UObject* __WorldContext, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_AudioFunctionLibrary.BPF_AudioFunctionLibrary_C.GetDistanceBetweenVectors");

	UBPF_AudioFunctionLibrary_C_GetDistanceBetweenVectors_Params params;
	params.Vector_1 = Vector_1;
	params.Vector_2 = Vector_2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
