#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxTimeOfDay.ETimeOfDayState
enum class ETimeOfDayState : uint8_t
{
	None                           = 0,
	Morning                        = 1,
	Day                            = 2,
	Evening                        = 3,
	Night                          = 4,
	ETimeOfDayState_MAX            = 5
};


// Enum GbxTimeOfDay.ETimeOfDayKeyType
enum class ETimeOfDayKeyType : uint8_t
{
	None                           = 0,
	PropertyKey                    = 1,
	EventKey                       = 2,
	StateKey                       = 3,
	ETimeOfDayKeyType_MAX          = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxTimeOfDay.ControlledLight
// 0x0038
struct FControlledLight
{
	float                                              IntensityMultiplier;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class ALight*                                      LightActor;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct GbxTimeOfDay.FloatParamLayerCurve
// 0x0080
struct FFloatParamLayerCurve
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRichCurve                                  ValueCurve;                                               // 0x0008(0x0070)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct GbxTimeOfDay.VectorParamLayerCurve
// 0x01D8
struct FVectorParamLayerCurve
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRichCurve                                  ValueCurve[0x4];                                          // 0x0008(0x0070)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C8(0x0010) MISSED OFFSET
};

// ScriptStruct GbxTimeOfDay.LayerParameterCurves
// 0x0020
struct FLayerParameterCurves
{
	TArray<struct FFloatParamLayerCurve>               FloatParams;                                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FVectorParamLayerCurve>              VectorParams;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxTimeOfDay.PropertyLayerCurveBase
// 0x0018
struct FPropertyLayerCurveBase
{
	struct FName                                       ClassName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GbxTimeOfDay.FloatPropertyLayerCurve
// 0x0080 (0x0098 - 0x0018)
struct FFloatPropertyLayerCurve : public FPropertyLayerCurveBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FRichCurve                                  ValueCurve;                                               // 0x0020(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
};

// ScriptStruct GbxTimeOfDay.VectorPropertyLayerCurve
// 0x01D8 (0x01F0 - 0x0018)
struct FVectorPropertyLayerCurve : public FPropertyLayerCurveBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FRichCurve                                  ValueCurve[0x4];                                          // 0x0020(0x0070)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01E0(0x0010) MISSED OFFSET
};

// ScriptStruct GbxTimeOfDay.ColorPropertyLayerCurve
// 0x01D0 (0x01E8 - 0x0018)
struct FColorPropertyLayerCurve : public FPropertyLayerCurveBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FRichCurve                                  ValueCurve[0x4];                                          // 0x0020(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
};

// ScriptStruct GbxTimeOfDay.Vector4PropertyLayerCurve
// 0x01D8 (0x01F0 - 0x0018)
struct FVector4PropertyLayerCurve : public FPropertyLayerCurveBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FRichCurve                                  ValueCurve[0x4];                                          // 0x0020(0x0070)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01E0(0x0010) MISSED OFFSET
};

// ScriptStruct GbxTimeOfDay.LayerPropertyCurves
// 0x0040
struct FLayerPropertyCurves
{
	TArray<struct FFloatPropertyLayerCurve>            FloatProps;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FVectorPropertyLayerCurve>           VectorProps;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FColorPropertyLayerCurve>            ColorProps;                                               // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FVector4PropertyLayerCurve>          Vector4Props;                                             // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxTimeOfDay.TimeOfDayEvent
// 0x0028
struct FTimeOfDayEvent
{
	float                                              EventTime;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       EventName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	ETimeOfDayState                                    State;                                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0011(0x0017) MISSED OFFSET
};

// ScriptStruct GbxTimeOfDay.LayerCurveData
// 0x0078
struct FLayerCurveData
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLayerParameterCurves                       ParameterLayerCurves;                                     // 0x0008(0x0020)
	struct FLayerPropertyCurves                        PropertyLayerCurves;                                      // 0x0028(0x0040)
	TArray<struct FTimeOfDayEvent>                     LayerEvents;                                              // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxTimeOfDay.TimeOfDayCycleInstanceData
// 0x00A0
struct FTimeOfDayCycleInstanceData
{
	class UTimeOfDayCycle*                             ParentCycle;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCycleLength;                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              OverrideCycleLength;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLayerCurveData>                     LayerCurveData;                                           // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0020(0x0080) MISSED OFFSET
};

// ScriptStruct GbxTimeOfDay.TODCollectionVector4Parameter
// 0x0018 (0x0030 - 0x0018)
struct FTODCollectionVector4Parameter : public FCollectionParameterBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FVector4                                    DefaultValue;                                             // 0x0020(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct GbxTimeOfDay.TODCollectionParam
// 0x0018
struct FTODCollectionParam
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ID;                                                       // 0x0008(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct GbxTimeOfDay.TODVectorCollectionParam
// 0x0000 (0x0018 - 0x0018)
struct FTODVectorCollectionParam : public FTODCollectionParam
{

};

// ScriptStruct GbxTimeOfDay.TODScalarCollectionParam
// 0x0000 (0x0018 - 0x0018)
struct FTODScalarCollectionParam : public FTODCollectionParam
{

};

// ScriptStruct GbxTimeOfDay.PlanetCycleInfo
// 0x0010
struct FPlanetCycleInfo
{
	struct FName                                       PlanetName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CycleLength;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastCachedTime;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxTimeOfDay.TimeOfDaySaveGameData
// 0x0018
struct FTimeOfDaySaveGameData
{
	TArray<struct FPlanetCycleInfo>                    PlanetCycleInfo;                                          // 0x0000(0x0010) (ZeroConstructor)
	struct FName                                       PlanetCycle;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
