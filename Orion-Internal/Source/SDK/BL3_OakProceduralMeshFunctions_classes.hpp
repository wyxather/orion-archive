#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakProceduralMeshFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakProceduralMeshFunctions.OakProceduralMeshFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UOakProceduralMeshFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakProceduralMeshFunctions.OakProceduralMeshFunctions_C");
		return ptr;
	}


	void STATIC_GetCatenaryPoints(const struct FVector& P1, const struct FVector& P2, float Wire_Catenary, float Wire_Resolution, class UObject* __WorldContext, TArray<struct FVector>* Points);
	void STATIC_CalculateCatenary(float A, float X, class UObject* __WorldContext, float* Result);
	void STATIC_Sphere_Strip(float Width, float Radius, int Sides, const struct FRotator& Orientation, float Sphere_Angle, const struct FTransform& Transform, const struct FVector2D& UV_Tile, int Sub_UV_Index, const struct FLinearColor& Color, bool bFlat, class UObject* __WorldContext, TArray<struct FVector>* Out_Verts, TArray<int>* Out_Faces, TArray<struct FVector>* Out_Normals, TArray<struct FVector2D>* Out_UVs, TArray<struct FLinearColor>* Out_Vertex_Color);
	void STATIC_Make_Quad(float Length_, float Width, const struct FTransform& Transform, class UObject* __WorldContext, TArray<struct FVector>* Verticies, TArray<int>* Faces, TArray<struct FVector>* Normals);
	void STATIC_Loft_Spline(class USplineComponent* Spline, float Twist, float Base_Thickness, int Edge_Loops, int Sides, const struct FVector2D& UVScale, bool Taper_, class UObject* __WorldContext, TArray<struct FVector>* Verticies, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs);
	void STATIC_Make_Circular_Vertex_Array(float Radius, int Sides, class UObject* __WorldContext, TArray<struct FVector>* Circle_Verts);
	void STATIC_FlatTube(float Inner_Radius, float Outer_Radius, int Sides, int Radial_Segments, const struct FVector2D& UV_Scale, class UObject* __WorldContext, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FLinearColor>* Vertex_Colors);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
