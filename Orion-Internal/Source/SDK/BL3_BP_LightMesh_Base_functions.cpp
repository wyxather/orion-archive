// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_LightMesh_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LightMesh_Base.BP_LightMesh_Base_C.SetPointLight_LightFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPointLightComponent*    Point_Light                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_LightMesh_Base_C::SetPointLight_LightFunction(class UPointLightComponent* Point_Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightMesh_Base.BP_LightMesh_Base_C.SetPointLight_LightFunction");

	ABP_LightMesh_Base_C_SetPointLight_LightFunction_Params params;
	params.Point_Light = Point_Light;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightMesh_Base.BP_LightMesh_Base_C.SetSpotLight_LightFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpotLightComponent*     Spot_Light                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_LightMesh_Base_C::SetSpotLight_LightFunction(class USpotLightComponent* Spot_Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightMesh_Base.BP_LightMesh_Base_C.SetSpotLight_LightFunction");

	ABP_LightMesh_Base_C_SetSpotLight_LightFunction_Params params;
	params.Spot_Light = Spot_Light;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightMesh_Base.BP_LightMesh_Base_C.SetSpotLight_Variables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpotLightComponent*     Spot_Light                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_LightMesh_Base_C::SetSpotLight_Variables(class USpotLightComponent* Spot_Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightMesh_Base.BP_LightMesh_Base_C.SetSpotLight_Variables");

	ABP_LightMesh_Base_C_SetSpotLight_Variables_Params params;
	params.Spot_Light = Spot_Light;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightMesh_Base.BP_LightMesh_Base_C.SetPointLight_Variables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPointLightComponent*    PointLight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_LightMesh_Base_C::SetPointLight_Variables(class UPointLightComponent* PointLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightMesh_Base.BP_LightMesh_Base_C.SetPointLight_Variables");

	ABP_LightMesh_Base_C_SetPointLight_Variables_Params params;
	params.PointLight = PointLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightMesh_Base.BP_LightMesh_Base_C.Create Bulb Material Instances
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LightMesh_Base_C::Create_Bulb_Material_Instances()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightMesh_Base.BP_LightMesh_Base_C.Create Bulb Material Instances");

	ABP_LightMesh_Base_C_Create_Bulb_Material_Instances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightMesh_Base.BP_LightMesh_Base_C.Create Light Dynamic Material Instance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ElementIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightMesh_Base_C::Create_Light_Dynamic_Material_Instance(int ElementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightMesh_Base.BP_LightMesh_Base_C.Create Light Dynamic Material Instance");

	ABP_LightMesh_Base_C_Create_Light_Dynamic_Material_Instance_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightMesh_Base.BP_LightMesh_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LightMesh_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightMesh_Base.BP_LightMesh_Base_C.UserConstructionScript");

	ABP_LightMesh_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
