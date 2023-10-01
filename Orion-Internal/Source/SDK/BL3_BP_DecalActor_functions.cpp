// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_DecalActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DecalActor.BP_DecalActor_C.SetDefaultMaterialParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DecalActor_C::SetDefaultMaterialParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalActor.BP_DecalActor_C.SetDefaultMaterialParameters");

	ABP_DecalActor_C_SetDefaultMaterialParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DecalActor.BP_DecalActor_C.SetDecalScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DecalActor_C::SetDecalScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalActor.BP_DecalActor_C.SetDecalScale");

	ABP_DecalActor_C_SetDecalScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DecalActor.BP_DecalActor_C.CreateDynamicMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DecalActor_C::CreateDynamicMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalActor.BP_DecalActor_C.CreateDynamicMaterial");

	ABP_DecalActor_C_CreateDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DecalActor.BP_DecalActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DecalActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalActor.BP_DecalActor_C.UserConstructionScript");

	ABP_DecalActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DecalActor.BP_DecalActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DecalActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalActor.BP_DecalActor_C.ReceiveBeginPlay");

	ABP_DecalActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DecalActor.BP_DecalActor_C.ExecuteUbergraph_BP_DecalActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DecalActor_C::ExecuteUbergraph_BP_DecalActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalActor.BP_DecalActor_C.ExecuteUbergraph_BP_DecalActor");

	ABP_DecalActor_C_ExecuteUbergraph_BP_DecalActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
