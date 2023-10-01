// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_StaticMesh_Actor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Macro Overlay Parameters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material_Instance_Dynamic      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Array_Index                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* DefaultMaterial                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Dynamic_Material_Instance      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Material_ID_Out                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Default_Material_Out           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMesh_Actor_C::Set_Per_Element_Macro_Overlay_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic* DefaultMaterial, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Material_ID_Out, class UMaterialInstanceDynamic** Default_Material_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Macro Overlay Parameters");

	ABP_StaticMesh_Actor_C_Set_Per_Element_Macro_Overlay_Parameters_Params params;
	params.Material_Instance_Dynamic = Material_Instance_Dynamic;
	params.Array_Index = Array_Index;
	params.DefaultMaterial = DefaultMaterial;

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


// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Layer 4 Base Material Parameters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material_Instance_Dynamic      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Array_Index                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Default_Material_In            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Dynamic_Material_Instance      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Array_Index_Out                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Default_Material_Out           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMesh_Actor_C::Set_Per_Element_Layer_4_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic* Default_Material_In, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Array_Index_Out, class UMaterialInstanceDynamic** Default_Material_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Layer 4 Base Material Parameters");

	ABP_StaticMesh_Actor_C_Set_Per_Element_Layer_4_Base_Material_Parameters_Params params;
	params.Material_Instance_Dynamic = Material_Instance_Dynamic;
	params.Array_Index = Array_Index;
	params.Default_Material_In = Default_Material_In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamic_Material_Instance != nullptr)
		*Dynamic_Material_Instance = params.Dynamic_Material_Instance;
	if (Array_Index_Out != nullptr)
		*Array_Index_Out = params.Array_Index_Out;
	if (Default_Material_Out != nullptr)
		*Default_Material_Out = params.Default_Material_Out;
}


// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Layer 3 Base Material Parameters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material_Instance_Dynamic      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Array_Index                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Default_Material_In            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Dynamic_Material_Instance      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Array_Index_Out                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Default_Material_Out           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMesh_Actor_C::Set_Per_Element_Layer_3_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic* Default_Material_In, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Array_Index_Out, class UMaterialInstanceDynamic** Default_Material_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Layer 3 Base Material Parameters");

	ABP_StaticMesh_Actor_C_Set_Per_Element_Layer_3_Base_Material_Parameters_Params params;
	params.Material_Instance_Dynamic = Material_Instance_Dynamic;
	params.Array_Index = Array_Index;
	params.Default_Material_In = Default_Material_In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamic_Material_Instance != nullptr)
		*Dynamic_Material_Instance = params.Dynamic_Material_Instance;
	if (Array_Index_Out != nullptr)
		*Array_Index_Out = params.Array_Index_Out;
	if (Default_Material_Out != nullptr)
		*Default_Material_Out = params.Default_Material_Out;
}


// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Layer 2 Base Material Parameters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material_Instance_Dynamic      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Array_Index                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Default_Material_In            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Dynamic_Material_Instance      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Array_Index_Out                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Default_Material_Out           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMesh_Actor_C::Set_Per_Element_Layer_2_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic* Default_Material_In, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Array_Index_Out, class UMaterialInstanceDynamic** Default_Material_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Layer 2 Base Material Parameters");

	ABP_StaticMesh_Actor_C_Set_Per_Element_Layer_2_Base_Material_Parameters_Params params;
	params.Material_Instance_Dynamic = Material_Instance_Dynamic;
	params.Array_Index = Array_Index;
	params.Default_Material_In = Default_Material_In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamic_Material_Instance != nullptr)
		*Dynamic_Material_Instance = params.Dynamic_Material_Instance;
	if (Array_Index_Out != nullptr)
		*Array_Index_Out = params.Array_Index_Out;
	if (Default_Material_Out != nullptr)
		*Default_Material_Out = params.Default_Material_Out;
}


// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Level ColorScheme
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_StaticMesh_Actor_C::Set_Level_ColorScheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Level ColorScheme");

	ABP_StaticMesh_Actor_C_Set_Level_ColorScheme_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Create Dynamic Material Instance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material_Instance_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Element_Index                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    Static_Mesh_Component          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* Material_Instance_Dynamic      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Material_ID                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMesh_Actor_C::Create_Dynamic_Material_Instance(class UMaterialInterface* Material_Instance_Interface, int Element_Index, class UStaticMeshComponent* Static_Mesh_Component, class UMaterialInstanceDynamic** Material_Instance_Dynamic, int* Material_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Create Dynamic Material Instance");

	ABP_StaticMesh_Actor_C_Create_Dynamic_Material_Instance_Params params;
	params.Material_Instance_Interface = Material_Instance_Interface;
	params.Element_Index = Element_Index;
	params.Static_Mesh_Component = Static_Mesh_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material_Instance_Dynamic != nullptr)
		*Material_Instance_Dynamic = params.Material_Instance_Dynamic;
	if (Material_ID != nullptr)
		*Material_ID = params.Material_ID;
}


// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Base Material Parameters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material_Instance_Dynamic      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Array_Index                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Dynamic_Material_Instance      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Material_ID_Out                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Default_Material_Out           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMesh_Actor_C::Set_Per_Element_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Material_ID_Out, class UMaterialInstanceDynamic** Default_Material_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Base Material Parameters");

	ABP_StaticMesh_Actor_C_Set_Per_Element_Base_Material_Parameters_Params params;
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


// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Randomized Colorization
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material_Instance_Dynamic      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaterialID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Default_Material               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Material_Instance_Dynamic_Out  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Material_ID_Out                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Default_Material_Out           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMesh_Actor_C::Set_Randomized_Colorization(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int MaterialID, class UMaterialInstanceDynamic* Default_Material, class UMaterialInstanceDynamic** Material_Instance_Dynamic_Out, int* Material_ID_Out, class UMaterialInstanceDynamic** Default_Material_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Randomized Colorization");

	ABP_StaticMesh_Actor_C_Set_Randomized_Colorization_Params params;
	params.Material_Instance_Dynamic = Material_Instance_Dynamic;
	params.MaterialID = MaterialID;
	params.Default_Material = Default_Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material_Instance_Dynamic_Out != nullptr)
		*Material_Instance_Dynamic_Out = params.Material_Instance_Dynamic_Out;
	if (Material_ID_Out != nullptr)
		*Material_ID_Out = params.Material_ID_Out;
	if (Default_Material_Out != nullptr)
		*Default_Material_Out = params.Default_Material_Out;
}


// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Per Instance Master Material Parameters
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_StaticMesh_Actor_C::Per_Instance_Master_Material_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Per Instance Master Material Parameters");

	ABP_StaticMesh_Actor_C_Per_Instance_Master_Material_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_StaticMesh_Actor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.UserConstructionScript");

	ABP_StaticMesh_Actor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
