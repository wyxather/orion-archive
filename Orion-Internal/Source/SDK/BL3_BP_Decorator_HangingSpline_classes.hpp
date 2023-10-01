#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Decorator_HangingSpline_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Decorator_HangingSpline.BP_Decorator_HangingSpline_C
// 0x00F0 (0x0548 - 0x0458)
class ABP_Decorator_HangingSpline_C : public ADecorator
{
public:
	class USplineComponent*                            Spline;                                                   // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Mesh_Tile;                                                // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Tension;                                                  // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Catenary_Resolution;                                      // 0x0478(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ResamplePoints;                                           // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start_Point;                                              // 0x0480(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     End_Point;                                                // 0x048C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class USplineComponent*                            Resample;                                                 // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInstancedStaticMeshComponent*               InstancedMesh;                                            // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FRandomStream                               Stream;                                                   // 0x04A8(0x0008) (Edit, BlueprintVisible)
	TArray<struct FStruct_HangingMeshProperties>       Hanging_Meshes;                                           // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInterface*                          Wire_Material;                                            // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Twist;                                                    // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Edge_Loops;                                               // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Sides;                                                    // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mesh_Scale;                                               // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV_Scale;                                                 // 0x04DC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     Collision;                                                // 0x04E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET
	TMap<class UInstancedStaticMeshComponent*, class UMaterialInstanceDynamic*> Instanced_Mesh_Materials;                                 // 0x04E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UInstancedStaticMeshComponent*>       InstancedMeshList;                                        // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Decorator_HangingSpline.BP_Decorator_HangingSpline_C");
		return ptr;
	}


	void GenerateCatenary();
	void PopulateInstances();
	void ConstructSplineMeshes();
	void ResampleSpline();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
