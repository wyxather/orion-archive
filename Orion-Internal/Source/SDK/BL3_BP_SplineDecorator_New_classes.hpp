#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_SplineDecorator_New_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SplineDecorator_New.BP_SplineDecorator_New_C
// 0x00E1 (0x0539 - 0x0458)
class ABP_SplineDecorator_New_C : public ADecorator
{
public:
	class USplineComponent*                            ResampledSpline;                                          // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            BuilderSpline;                                            // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Enable_Spline_Mesh;                                       // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	class UStaticMesh*                                 Spline_Mesh;                                              // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Spline_Material_Override;                                 // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     Collision_Type;                                           // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0489(0x0003) MISSED OFFSET
	float                                              Spline_Mesh_Segment_Length;                               // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Spline_Cap_Mesh;                                      // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	class UStaticMesh*                                 Spline_Mesh_Cap;                                          // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Global_Offset;                                            // 0x04A0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	TArray<struct FStruct_SplineDecoratorParams>       Spline_Decorations;                                       // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Spline_Mesh_Cap_Length;                                   // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x04C4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       Forward_Axis;                                             // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	struct FVector                                     Up_Vector;                                                // 0x04D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               Trace_Resample_Points;                                    // 0x04DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04DD(0x0003) MISSED OFFSET
	float                                              Resample_Radius;                                          // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       Draw_Debug_Type;                                          // 0x04E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET
	float                                              Initial_Roll;                                             // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Draw_Spline_Point_Indexes;                                // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04ED(0x0003) MISSED OFFSET
	struct FVector                                     Index_Text_Offset;                                        // 0x04F0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	TArray<struct FStruct_SplineDecoratorPointOverride> Point__Overrides;                                         // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FRandomStream                               Random_Stream;                                            // 0x0510(0x0008) (Edit, BlueprintVisible)
	struct FVector                                     Builder_Spline_Offset;                                    // 0x0518(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	TArray<class AActor*>                              Trace_Actors_To_Ignore;                                   // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               SetRollRotation;                                          // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SplineDecorator_New.BP_SplineDecorator_New_C");
		return ptr;
	}


	void GetResampledSpline(class USplineComponent** NewParam);
	void Check_Overrides(int Index, class UStaticMesh** Static_Mesh, struct FVector* Point_Offset);
	void Show_Spline_Point_Index();
	void Place_Decoration(const struct FStruct_SplineDecoratorParams& Spline_Decoration_Params);
	void Genereate_Spline_Mesh_Segments();
	void Resample_Builder_Spline();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
