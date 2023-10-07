#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x278 - 0x220)
// BlueprintGeneratedClass BP_UltimateRiverTool.BP_UltimateRiverTool_C
class ABP_UltimateRiverTool_C : public AActor
{
public:
	class USplineComponent*                      MainSpline;                                        // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSplineObject>                 SplineObjects;                                     // 0x230(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        CalcTangentScale;                                  // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseSplineObjects;                                  // 0x244(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ECollisionEnabled                 Collision;                                         // 0x245(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1359[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    RiverMaterial;                                     // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RiverWidth;                                        // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RiverMeshSmoothness;                               // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           RiverMesh;                                         // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MaterialOverrideInstance;                          // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tiling_Scale_X;                                    // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tiling_Scale_Y;                                    // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GlobalScale;                                       // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_UltimateRiverTool_C* GetDefaultObj();

	void PathDeform(class USplineComponent* Spline, const struct FVector& CoorinatesIn, float Distance, struct FVector* _CoordinatesOut);
	void GenerateSplineMesh_Cycle(enum class ECollisionEnabled Collision, bool CastShadow, class UMaterialInterface* Material, class USplineComponent* TargetSpline, float SplineStartOffset, const struct FVector& Offset, const struct FVector& Scale, float TangetScale, float Spacing, const struct FRotator& Rotation, class UStaticMesh* StaticMesh);
	void GenerateSplineMesh(enum class ECollisionEnabled Collision, bool CastShadow, class UMaterialInterface* Material, class USplineComponent* TargetSpline, float SplineStartOffset, const struct FVector& Offset, const struct FVector& Scale, float TangetScale, float Spacing, const struct FRotator& Rotation, class UStaticMesh* StaticMesh, class USplineComponent* PathDeform, float PathDeformDistance, bool IsTriggerVolume, int32 TranslucentSortPriority);
	void UserConstructionScript();
};

}


