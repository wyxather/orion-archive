#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_SplineDecoratorParams.Struct_SplineDecoratorParams
// 0x00AC
struct FStruct_SplineDecoratorParams
{
	class UStaticMesh*                                 StaticMesh_16_491502804799839482EAA2B04F91EFA6;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaterialOverride_88_34B731D84DE76B3715EE4DB5E9009997;     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Visible_62_09C34B6040C9EBBB7A66A0A163293C1E;              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TraceToSurface_51_8F227513457B6244E0040D861424919B;       // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	struct FVector                                     TraceVector_55_654949684D4D51471FD3D699C619A2A4;          // 0x0014(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               OrientToSurface_58_0F31CBF246665E81CD278B8DFF4CEB1E;      // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       MeshAlignmentAxis_65_5CD2C4774FB3AD692E6CC2A3F6EB0969;    // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              MeshSpacing_47_952ED3984DB99EEA203664A449A3FC89;          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlacementOffset_42_860172EF4A45BED8365444A73D32805A;      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Pinch_40_3512884F4410E64EE5885CBCB904A121;                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bias_84_21CBDAC749B161B64190E9933F839828;                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FlipBias_92_DBEC22354319A3CB07E8C9A7A7F92391;             // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FVector                                     OffsetWorldSpace_71_3EE72AA44564B4B1ED408CA1E460F92C;     // 0x0038(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Offset_30_4E363F694767267A1BF87EB0FEA7C860;               // 0x0044(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RandomOffset_32_1115A95C4EA7BBB9AC72B9BB6C6CB34F;         // 0x0050(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MinimumScale_2_97A575B542771D64A83C52B761DC9EC1;          // 0x005C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MaximumScale_4_A01764944CAB78D594F94CBC70C60953;          // 0x0068(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TaperScale_82_A52F65844F6E8F1FCEB9C4B5B1AF913F;           // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FlipTaper_90_CD6E658D44C50EBB6A782794B29E80C0;            // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OrientToSpline_36_11467B2B4CEDF079CCF44893768802F9;       // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       SplineAlignmentAxis_67_3AA2AE6E4510FF59628CE1ADB283B5C0;  // 0x007A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x007B(0x0001) MISSED OFFSET
	struct FRotator                                    InitialRotation_7_C67FE2334DA98961CE6D45BB994961B3;       // 0x007C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RandomRotationMin_43_A78BB4D947C5BE2BAD0A088B0D1CBF3C;    // 0x0088(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RandomRotationMax_46_81DE09714E7DC6051DF47D89ABEE581C;    // 0x0094(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CullDistanceStart_74_4B2C79B0409DFCC76A066C9E354AE21F;    // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CullDistanceEnd_76_33C954394DBFFE43F3EA1FB65D58F959;      // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomMask_79_BFD7F2064FC01E16CBD770994E6C4A59;           // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
