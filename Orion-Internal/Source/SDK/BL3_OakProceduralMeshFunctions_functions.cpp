// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakProceduralMeshFunctions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.GetCatenaryPoints
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 P1                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 P2                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Wire_Catenary                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Wire_Resolution                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Points                         (Parm, OutParm, ZeroConstructor)

void UOakProceduralMeshFunctions_C::STATIC_GetCatenaryPoints(const struct FVector& P1, const struct FVector& P2, float Wire_Catenary, float Wire_Resolution, class UObject* __WorldContext, TArray<struct FVector>* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.GetCatenaryPoints");

	UOakProceduralMeshFunctions_C_GetCatenaryPoints_Params params;
	params.P1 = P1;
	params.P2 = P2;
	params.Wire_Catenary = Wire_Catenary;
	params.Wire_Resolution = Wire_Resolution;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;
}


// Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.CalculateCatenary
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakProceduralMeshFunctions_C::STATIC_CalculateCatenary(float A, float X, class UObject* __WorldContext, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.CalculateCatenary");

	UOakProceduralMeshFunctions_C_CalculateCatenary_Params params;
	params.A = A;
	params.X = X;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.Sphere Strip
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Sides                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Sphere_Angle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               UV_Tile                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            Sub_UV_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bFlat                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Out_Verts                      (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Out_Faces                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Out_Normals                    (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       Out_UVs                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FLinearColor>    Out_Vertex_Color               (Parm, OutParm, ZeroConstructor)

void UOakProceduralMeshFunctions_C::STATIC_Sphere_Strip(float Width, float Radius, int Sides, const struct FRotator& Orientation, float Sphere_Angle, const struct FTransform& Transform, const struct FVector2D& UV_Tile, int Sub_UV_Index, const struct FLinearColor& Color, bool bFlat, class UObject* __WorldContext, TArray<struct FVector>* Out_Verts, TArray<int>* Out_Faces, TArray<struct FVector>* Out_Normals, TArray<struct FVector2D>* Out_UVs, TArray<struct FLinearColor>* Out_Vertex_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.Sphere Strip");

	UOakProceduralMeshFunctions_C_Sphere_Strip_Params params;
	params.Width = Width;
	params.Radius = Radius;
	params.Sides = Sides;
	params.Orientation = Orientation;
	params.Sphere_Angle = Sphere_Angle;
	params.Transform = Transform;
	params.UV_Tile = UV_Tile;
	params.Sub_UV_Index = Sub_UV_Index;
	params.Color = Color;
	params.bFlat = bFlat;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_Verts != nullptr)
		*Out_Verts = params.Out_Verts;
	if (Out_Faces != nullptr)
		*Out_Faces = params.Out_Faces;
	if (Out_Normals != nullptr)
		*Out_Normals = params.Out_Normals;
	if (Out_UVs != nullptr)
		*Out_UVs = params.Out_UVs;
	if (Out_Vertex_Color != nullptr)
		*Out_Vertex_Color = params.Out_Vertex_Color;
}


// Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.Make Quad
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Length_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Verticies                      (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Faces                          (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)

void UOakProceduralMeshFunctions_C::STATIC_Make_Quad(float Length_, float Width, const struct FTransform& Transform, class UObject* __WorldContext, TArray<struct FVector>* Verticies, TArray<int>* Faces, TArray<struct FVector>* Normals)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.Make Quad");

	UOakProceduralMeshFunctions_C_Make_Quad_Params params;
	params.Length_ = Length_;
	params.Width = Width;
	params.Transform = Transform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Verticies != nullptr)
		*Verticies = params.Verticies;
	if (Faces != nullptr)
		*Faces = params.Faces;
	if (Normals != nullptr)
		*Normals = params.Normals;
}


// Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.Loft Spline
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USplineComponent*        Spline                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Twist                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Base_Thickness                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Edge_Loops                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Sides                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               UVScale                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Taper_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Verticies                      (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (Parm, OutParm, ZeroConstructor)

void UOakProceduralMeshFunctions_C::STATIC_Loft_Spline(class USplineComponent* Spline, float Twist, float Base_Thickness, int Edge_Loops, int Sides, const struct FVector2D& UVScale, bool Taper_, class UObject* __WorldContext, TArray<struct FVector>* Verticies, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.Loft Spline");

	UOakProceduralMeshFunctions_C_Loft_Spline_Params params;
	params.Spline = Spline;
	params.Twist = Twist;
	params.Base_Thickness = Base_Thickness;
	params.Edge_Loops = Edge_Loops;
	params.Sides = Sides;
	params.UVScale = UVScale;
	params.Taper_ = Taper_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Verticies != nullptr)
		*Verticies = params.Verticies;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
}


// Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.Make Circular Vertex Array
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Sides                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Circle_Verts                   (Parm, OutParm, ZeroConstructor)

void UOakProceduralMeshFunctions_C::STATIC_Make_Circular_Vertex_Array(float Radius, int Sides, class UObject* __WorldContext, TArray<struct FVector>* Circle_Verts)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.Make Circular Vertex Array");

	UOakProceduralMeshFunctions_C_Make_Circular_Vertex_Array_Params params;
	params.Radius = Radius;
	params.Sides = Sides;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Circle_Verts != nullptr)
		*Circle_Verts = params.Circle_Verts;
}


// Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.FlatTube
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Inner_Radius                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Outer_Radius                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Sides                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Radial_Segments                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               UV_Scale                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       UV0                            (Parm, OutParm, ZeroConstructor)
// TArray<struct FLinearColor>    Vertex_Colors                  (Parm, OutParm, ZeroConstructor)

void UOakProceduralMeshFunctions_C::STATIC_FlatTube(float Inner_Radius, float Outer_Radius, int Sides, int Radial_Segments, const struct FVector2D& UV_Scale, class UObject* __WorldContext, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FLinearColor>* Vertex_Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.FlatTube");

	UOakProceduralMeshFunctions_C_FlatTube_Params params;
	params.Inner_Radius = Inner_Radius;
	params.Outer_Radius = Outer_Radius;
	params.Sides = Sides;
	params.Radial_Segments = Radial_Segments;
	params.UV_Scale = UV_Scale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UV0 != nullptr)
		*UV0 = params.UV0;
	if (Vertex_Colors != nullptr)
		*Vertex_Colors = params.Vertex_Colors;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
