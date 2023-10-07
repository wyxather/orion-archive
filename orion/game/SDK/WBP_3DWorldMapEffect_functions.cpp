#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_3DWorldMapEffect.WBP_3DWorldMapEffect_C
// (None)

class UClass* UWBP_3DWorldMapEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_3DWorldMapEffect_C");

	return Clss;
}


// WBP_3DWorldMapEffect_C WBP_3DWorldMapEffect.Default__WBP_3DWorldMapEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_3DWorldMapEffect_C* UWBP_3DWorldMapEffect_C::GetDefaultObj()
{
	static class UWBP_3DWorldMapEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_3DWorldMapEffect_C*>(UWBP_3DWorldMapEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_3DWorldMapEffect.WBP_3DWorldMapEffect_C.GetDynamicMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMaterialInstanceDynamic* UWBP_3DWorldMapEffect_C::GetDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapEffect_C", "GetDynamicMaterial");

	Params::UWBP_3DWorldMapEffect_C_GetDynamicMaterial_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


