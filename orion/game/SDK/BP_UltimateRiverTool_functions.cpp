#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_UltimateRiverTool.BP_UltimateRiverTool_C
// (Actor)

class UClass* ABP_UltimateRiverTool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UltimateRiverTool_C");

	return Clss;
}


// BP_UltimateRiverTool_C BP_UltimateRiverTool.Default__BP_UltimateRiverTool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_UltimateRiverTool_C* ABP_UltimateRiverTool_C::GetDefaultObj()
{
	static class ABP_UltimateRiverTool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_UltimateRiverTool_C*>(ABP_UltimateRiverTool_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.PathDeform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*            Spline                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CoorinatesIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     _CoordinatesOut                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UltimateRiverTool_C::PathDeform(class USplineComponent* Spline, const struct FVector& CoorinatesIn, float Distance, struct FVector* _CoordinatesOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_UltimateRiverTool_C", "PathDeform");

	Params::ABP_UltimateRiverTool_C_PathDeform_Params Parms{};

	Parms.Spline = Spline;
	Parms.CoorinatesIn = CoorinatesIn;
	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (_CoordinatesOut != nullptr)
		*_CoordinatesOut = std::move(Parms._CoordinatesOut);

}


// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.GenerateSplineMesh_Cycle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECollisionEnabled       Collision                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CastShadow                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*            TargetSpline                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SplineStartOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TangetScale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Spacing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 StaticMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UltimateRiverTool_C::GenerateSplineMesh_Cycle(enum class ECollisionEnabled Collision, bool CastShadow, class UMaterialInterface* Material, class USplineComponent* TargetSpline, float SplineStartOffset, const struct FVector& Offset, const struct FVector& Scale, float TangetScale, float Spacing, const struct FRotator& Rotation, class UStaticMesh* StaticMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_UltimateRiverTool_C", "GenerateSplineMesh_Cycle");

	Params::ABP_UltimateRiverTool_C_GenerateSplineMesh_Cycle_Params Parms{};

	Parms.Collision = Collision;
	Parms.CastShadow = CastShadow;
	Parms.Material = Material;
	Parms.TargetSpline = TargetSpline;
	Parms.SplineStartOffset = SplineStartOffset;
	Parms.Offset = Offset;
	Parms.Scale = Scale;
	Parms.TangetScale = TangetScale;
	Parms.Spacing = Spacing;
	Parms.Rotation = Rotation;
	Parms.StaticMesh = StaticMesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.GenerateSplineMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECollisionEnabled       Collision                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CastShadow                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*            TargetSpline                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SplineStartOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TangetScale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Spacing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 StaticMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*            PathDeform                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PathDeformDistance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsTriggerVolume                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TranslucentSortPriority                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UltimateRiverTool_C::GenerateSplineMesh(enum class ECollisionEnabled Collision, bool CastShadow, class UMaterialInterface* Material, class USplineComponent* TargetSpline, float SplineStartOffset, const struct FVector& Offset, const struct FVector& Scale, float TangetScale, float Spacing, const struct FRotator& Rotation, class UStaticMesh* StaticMesh, class USplineComponent* PathDeform, float PathDeformDistance, bool IsTriggerVolume, int32 TranslucentSortPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_UltimateRiverTool_C", "GenerateSplineMesh");

	Params::ABP_UltimateRiverTool_C_GenerateSplineMesh_Params Parms{};

	Parms.Collision = Collision;
	Parms.CastShadow = CastShadow;
	Parms.Material = Material;
	Parms.TargetSpline = TargetSpline;
	Parms.SplineStartOffset = SplineStartOffset;
	Parms.Offset = Offset;
	Parms.Scale = Scale;
	Parms.TangetScale = TangetScale;
	Parms.Spacing = Spacing;
	Parms.Rotation = Rotation;
	Parms.StaticMesh = StaticMesh;
	Parms.PathDeform = PathDeform;
	Parms.PathDeformDistance = PathDeformDistance;
	Parms.IsTriggerVolume = IsTriggerVolume;
	Parms.TranslucentSortPriority = TranslucentSortPriority;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UltimateRiverTool.BP_UltimateRiverTool_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UltimateRiverTool_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_UltimateRiverTool_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


