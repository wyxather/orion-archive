#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_HangingMeshProperties.Struct_HangingMeshProperties
// 0x0068
struct FStruct_HangingMeshProperties
{
	class UStaticMesh*                                 Mesh_5_6C28BC1F4FC70895F2E9AF9DE830DE26;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaterialOverride_8_E61931B54ECAA2B81458BDBA204CB519;      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeshCount_34_3D28F5A846D7A9D5B93BA6AD4A72B34F;            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomMask_37_D81F4F1440FCB5C16D64798EDB11857D;           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetLocalSpace_11_679F916D4948487E90EA96963449DB2C;     // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ClipDistance_14_0ED0BC4A43430729686BCAB8BE7953EF;         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetAlongSpline_31_8BBDB4CB4B210FC5BCB09B886E311B76;    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Jitter_29_5519E9E24AED5FA659A758946F6387E6;               // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InitialRotation_24_44D102554E241665CC8B2AAAA0F1A1EB;      // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RandomRotation_17_3D84501B47CFD6CE4C620A9429D7CD4E;       // 0x003C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     InitialScale_25_B2D02F94461821A9DE66FB8C34B60ABF;         // 0x0048(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RandomScale_26_52070B4E43CFB28A70E2AEB41AE6896B;          // 0x0054(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class UCurveFloat*                                 ScaleCurve_40_96B8D0574686BE5EA42002838E5C5774;           // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
