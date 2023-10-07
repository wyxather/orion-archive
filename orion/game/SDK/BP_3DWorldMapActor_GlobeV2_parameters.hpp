#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xB9 (0xB9 - 0x0)
// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.SetIsEnableMasksForPlayerSelect
struct ABP_3DWorldMapActor_GlobeV2_C_SetIsEnableMasksForPlayerSelect_Params
{
public:
	bool                                         IsEnable;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.SetIsDisplayedIslandLayer
struct ABP_3DWorldMapActor_GlobeV2_C_SetIsDisplayedIslandLayer_Params
{
public:
	enum class EWorldMapIslandLayerArea          MaskArea;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDisplayed;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.SetIsMaskedPrologueArea
struct ABP_3DWorldMapActor_GlobeV2_C_SetIsMaskedPrologueArea_Params
{
public:
	enum class EWorldMapPrologueMaskArea         MaskArea;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMasked;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.SetIsMaskedArea
struct ABP_3DWorldMapActor_GlobeV2_C_SetIsMaskedArea_Params
{
public:
	enum class EWorldMapMaskArea                 MaskArea;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMasked;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.SetIsEnableMask
struct ABP_3DWorldMapActor_GlobeV2_C_SetIsEnableMask_Params
{
public:
	bool                                         IsEnable;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.GetGlobeMeshComponent
struct ABP_3DWorldMapActor_GlobeV2_C_GetGlobeMeshComponent_Params
{
public:
	class UStaticMeshComponent*                  GlobeMesh;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.GetAllPivots
struct ABP_3DWorldMapActor_GlobeV2_C_GetAllPivots_Params
{
public:
	TArray<class UWorldMapPivotComponentBase*>   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

}
}


