#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakProceduralMeshFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.GetCatenaryPoints
struct UOakProceduralMeshFunctions_C_GetCatenaryPoints_Params
{
	struct FVector                                     P1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     P2;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Wire_Catenary;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Wire_Resolution;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Points;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.CalculateCatenary
struct UOakProceduralMeshFunctions_C_CalculateCatenary_Params
{
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.Sphere Strip
struct UOakProceduralMeshFunctions_C_Sphere_Strip_Params
{
	float                                              Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Sides;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Sphere_Angle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   UV_Tile;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                Sub_UV_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bFlat;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Out_Verts;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Out_Faces;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Out_Normals;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           Out_UVs;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FLinearColor>                        Out_Vertex_Color;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.Make Quad
struct UOakProceduralMeshFunctions_C_Make_Quad_Params
{
	float                                              Length_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Verticies;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Faces;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.Loft Spline
struct UOakProceduralMeshFunctions_C_Loft_Spline_Params
{
	class USplineComponent*                            Spline;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Twist;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Base_Thickness;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Edge_Loops;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Sides;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UVScale;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Taper_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Verticies;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           UVs;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.Make Circular Vertex Array
struct UOakProceduralMeshFunctions_C_Make_Circular_Vertex_Array_Params
{
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Sides;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Circle_Verts;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function OakProceduralMeshFunctions.OakProceduralMeshFunctions_C.FlatTube
struct UOakProceduralMeshFunctions_C_FlatTube_Params
{
	float                                              Inner_Radius;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Outer_Radius;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Sides;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Radial_Segments;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV_Scale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           UV0;                                                      // (Parm, OutParm, ZeroConstructor)
	TArray<struct FLinearColor>                        Vertex_Colors;                                            // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
