// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_SplineDecorator_New_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.GetResampledSpline
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        NewParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SplineDecorator_New_C::GetResampledSpline(class USplineComponent** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.GetResampledSpline");

	ABP_SplineDecorator_New_C_GetResampledSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Check Overrides
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             Static_Mesh                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point_Offset                   (Parm, OutParm, IsPlainOldData)

void ABP_SplineDecorator_New_C::Check_Overrides(int Index, class UStaticMesh** Static_Mesh, struct FVector* Point_Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Check Overrides");

	ABP_SplineDecorator_New_C_Check_Overrides_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Static_Mesh != nullptr)
		*Static_Mesh = params.Static_Mesh;
	if (Point_Offset != nullptr)
		*Point_Offset = params.Point_Offset;
}


// Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Show Spline Point Index
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineDecorator_New_C::Show_Spline_Point_Index()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Show Spline Point Index");

	ABP_SplineDecorator_New_C_Show_Spline_Point_Index_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Place Decoration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_SplineDecoratorParams Spline_Decoration_Params       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SplineDecorator_New_C::Place_Decoration(const struct FStruct_SplineDecoratorParams& Spline_Decoration_Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Place Decoration");

	ABP_SplineDecorator_New_C_Place_Decoration_Params params;
	params.Spline_Decoration_Params = Spline_Decoration_Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Genereate Spline Mesh Segments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineDecorator_New_C::Genereate_Spline_Mesh_Segments()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Genereate Spline Mesh Segments");

	ABP_SplineDecorator_New_C_Genereate_Spline_Mesh_Segments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Resample Builder Spline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineDecorator_New_C::Resample_Builder_Spline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Resample Builder Spline");

	ABP_SplineDecorator_New_C_Resample_Builder_Spline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineDecorator_New_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.UserConstructionScript");

	ABP_SplineDecorator_New_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
