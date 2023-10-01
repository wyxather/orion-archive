// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VolumetricFog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VolumetricFog.BP_VolumetricFog_C.Set Properties
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_VolumetricFog_C::Set_Properties()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolumetricFog.BP_VolumetricFog_C.Set Properties");

	ABP_VolumetricFog_C_Set_Properties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VolumetricFog.BP_VolumetricFog_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VolumetricFog_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolumetricFog.BP_VolumetricFog_C.UserConstructionScript");

	ABP_VolumetricFog_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VolumetricFog.BP_VolumetricFog_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VolumetricFog_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolumetricFog.BP_VolumetricFog_C.ReceiveBeginPlay");

	ABP_VolumetricFog_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VolumetricFog.BP_VolumetricFog_C.ExecuteUbergraph_BP_VolumetricFog
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VolumetricFog_C::ExecuteUbergraph_BP_VolumetricFog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolumetricFog.BP_VolumetricFog_C.ExecuteUbergraph_BP_VolumetricFog");

	ABP_VolumetricFog_C_ExecuteUbergraph_BP_VolumetricFog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
