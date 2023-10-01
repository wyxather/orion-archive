// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Screen_Actor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Screen_Actor.BP_Screen_Actor_C.ManageLight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Screen_Actor_C::ManageLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Screen_Actor.BP_Screen_Actor_C.ManageLight");

	ABP_Screen_Actor_C_ManageLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Screen_Actor.BP_Screen_Actor_C.Create Dynamic Screen Material Instance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DynamicScreenMaterialOut       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      DefaultScreenMaterialOut       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* DynamicLightMaterialOut        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Screen_Actor_C::Create_Dynamic_Screen_Material_Instance(class UMaterialInstanceDynamic** DynamicScreenMaterialOut, class UMaterialInterface** DefaultScreenMaterialOut, class UMaterialInstanceDynamic** DynamicLightMaterialOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Screen_Actor.BP_Screen_Actor_C.Create Dynamic Screen Material Instance");

	ABP_Screen_Actor_C_Create_Dynamic_Screen_Material_Instance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicScreenMaterialOut != nullptr)
		*DynamicScreenMaterialOut = params.DynamicScreenMaterialOut;
	if (DefaultScreenMaterialOut != nullptr)
		*DefaultScreenMaterialOut = params.DefaultScreenMaterialOut;
	if (DynamicLightMaterialOut != nullptr)
		*DynamicLightMaterialOut = params.DynamicLightMaterialOut;
}


// Function BP_Screen_Actor.BP_Screen_Actor_C.Set Per Element Screen Material Parameters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DynamicScreenMat               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      DefaultScreenMaterial          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* DynamicLightMat                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* DynamicMaterial                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Screen_Actor_C::Set_Per_Element_Screen_Material_Parameters(class UMaterialInstanceDynamic* DynamicScreenMat, class UMaterialInterface* DefaultScreenMaterial, class UMaterialInstanceDynamic* DynamicLightMat, class UMaterialInstanceDynamic** DynamicMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Screen_Actor.BP_Screen_Actor_C.Set Per Element Screen Material Parameters");

	ABP_Screen_Actor_C_Set_Per_Element_Screen_Material_Parameters_Params params;
	params.DynamicScreenMat = DynamicScreenMat;
	params.DefaultScreenMaterial = DefaultScreenMaterial;
	params.DynamicLightMat = DynamicLightMat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMaterial != nullptr)
		*DynamicMaterial = params.DynamicMaterial;
}


// Function BP_Screen_Actor.BP_Screen_Actor_C.Set Level ColorScheme
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Screen_Actor_C::Set_Level_ColorScheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Screen_Actor.BP_Screen_Actor_C.Set Level ColorScheme");

	ABP_Screen_Actor_C_Set_Level_ColorScheme_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Screen_Actor.BP_Screen_Actor_C.Set Per Element Base Material Parameters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material_Instance_Dynamic      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Array_Index                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Dynamic_Material_Instance      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Material_ID_Out                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Default_Material_Out           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Screen_Actor_C::Set_Per_Element_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Material_ID_Out, class UMaterialInstanceDynamic** Default_Material_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Screen_Actor.BP_Screen_Actor_C.Set Per Element Base Material Parameters");

	ABP_Screen_Actor_C_Set_Per_Element_Base_Material_Parameters_Params params;
	params.Material_Instance_Dynamic = Material_Instance_Dynamic;
	params.Array_Index = Array_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamic_Material_Instance != nullptr)
		*Dynamic_Material_Instance = params.Dynamic_Material_Instance;
	if (Material_ID_Out != nullptr)
		*Material_ID_Out = params.Material_ID_Out;
	if (Default_Material_Out != nullptr)
		*Default_Material_Out = params.Default_Material_Out;
}


// Function BP_Screen_Actor.BP_Screen_Actor_C.Per Instance Master Material Parameters
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Screen_Actor_C::Per_Instance_Master_Material_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Screen_Actor.BP_Screen_Actor_C.Per Instance Master Material Parameters");

	ABP_Screen_Actor_C_Per_Instance_Master_Material_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Screen_Actor.BP_Screen_Actor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Screen_Actor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Screen_Actor.BP_Screen_Actor_C.UserConstructionScript");

	ABP_Screen_Actor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
