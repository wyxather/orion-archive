// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GrenadeLauncherCollection_BaseClass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GrenadeLauncherCollection_BaseClass.GrenadeLauncherCollection_BaseClass_C.GetParticleEffect
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                ContextObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* UGrenadeLauncherCollection_BaseClass_C::GetParticleEffect(class UObject** ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeLauncherCollection_BaseClass.GrenadeLauncherCollection_BaseClass_C.GetParticleEffect");

	UGrenadeLauncherCollection_BaseClass_C_GetParticleEffect_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
