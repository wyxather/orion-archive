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

// UserDefinedStruct BPStruct_MeshWeighting.BPStruct_MeshWeighting
// 0x0018
struct FBPStruct_MeshWeighting
{
	class UStaticMesh*                                 Mesh_3_A426CA6042509EF468140F8A15F77B42;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weighting_5_E9C8FA4A423CF5396872E59B682DD2A2;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale_8_469EBBD64BF2B03E7E446AB2CA98A183;                 // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
