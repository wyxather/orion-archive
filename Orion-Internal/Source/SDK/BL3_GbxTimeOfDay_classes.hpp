#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxTimeOfDay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxTimeOfDay.MaterialExpressionTimeOfDay
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionTimeOfDay : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTimeOfDay.MaterialExpressionTimeOfDay");
		return ptr;
	}

};


// Class GbxTimeOfDay.TimeOfDayActor
// 0x0078 (0x04D0 - 0x0458)
class ATimeOfDayActor : public AActor
{
public:
	class UTimeOfDayComponent*                         TimeOfDayComponent;                                       // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLightComponent;                                // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkyLightComponent*                          SkyLightComponent;                                        // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAtmosphericFogComponent*                    AtmosphericFogComponent;                                  // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UExponentialHeightFogComponent*              ExponentialHeightFogComponent;                            // 0x0478(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0480(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessComponent;                                     // 0x0488(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<class ALight*>                              ControlledLightActors;                                    // 0x0490(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FControlledLight>                    ControlledLights;                                         // 0x04A0(0x0010) (Edit, ZeroConstructor)
	float                                              StartTime;                                                // 0x04B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	struct FName                                       StartLayer;                                               // 0x04B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<TWeakObjectPtr<class UObject>>              EventListeners;                                           // 0x04C0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayActor");
		return ptr;
	}


	class UDirectionalLightComponent* GetDirectionalLightComponent();
	void EnumerateLayerNames(TArray<struct FName>* OutLayerNames);
	void AddEventListener(class UObject* InListener);
};


// Class GbxTimeOfDay.TimeOfDayBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimeOfDayBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayBlueprintLibrary");
		return ptr;
	}


	void STATIC_TransitionUpOneLayer(class UObject* WorldContextObject, float TransitionDuration);
	void STATIC_TransitionToLayer(class UObject* WorldContextObject, const class FString& ToLayer, float TransitionDuration);
	void STATIC_TransitionDownOneLayer(class UObject* WorldContextObject, float TransitionDuration);
	void STATIC_StartTimeOfDay(class UObject* WorldContextObject);
	void STATIC_SetTimeOfDay(class UObject* WorldContextObject, float NewTimeOfDay);
	void STATIC_PauseTimeOfDay(class UObject* WorldContextObject);
	ETimeOfDayState STATIC_GetTimeOfDayState(class UObject* WorldContextObject);
	float STATIC_GetTimeOfDay(class UObject* WorldContextObject);
	void STATIC_AddTimeOfDayListener(class UObject* WorldContextObject, class UObject* InListener);
};


// Class GbxTimeOfDay.TimeOfDayComponent
// 0x00E0 (0x03B0 - 0x02D0)
class UTimeOfDayComponent : public USceneComponent
{
public:
	struct FTimeOfDayCycleInstanceData                 TimeOfDayCycleInstanceData;                               // 0x02D0(0x00A0) (Edit)
	class UTimeOfDayCycleInstance*                     TimeOfDayCycleInstance;                                   // 0x0370(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TimeOfDay;                                                // 0x0378(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	uint32_t                                           CycleCount;                                               // 0x037C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurrentLayerName;                                         // 0x0380(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	float                                              TransitionTimeLeft;                                       // 0x0388(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              LastEvaluatedTime;                                        // 0x038C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CinematicTimeOfDay;                                       // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCinematicTimeOfDay;                                   // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0395(0x000B) MISSED OFFSET
	bool                                               bShouldTick;                                              // 0x03A0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x03A1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayComponent");
		return ptr;
	}


	void SetUseCinematicTimeOfDay(bool InUseCinematicTimeOfDay);
	void SetCinematicTimeOfDay(float InCinematicTimeOfDay);
};


// Class GbxTimeOfDay.TimeOfDayCycle
// 0x0018 (0x0040 - 0x0028)
class UTimeOfDayCycle : public UObject
{
public:
	class UMaterialParameterCollection*                ParameterCollection;                                      // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  TimeOfDayAudioParameter;                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CycleLength;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayCycle");
		return ptr;
	}

};


// Class GbxTimeOfDay.TimeOfDayCycleInstance
// 0x0030 (0x0058 - 0x0028)
class UTimeOfDayCycleInstance : public UObject
{
public:
	class UTimeOfDayCycle*                             ParentCycle;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCycleLength;                                     // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              OverrideCycleLength;                                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FLayerParameterCurves>               ParameterLayerCurves;                                     // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FLayerPropertyCurves>                PropertyLayerCurves;                                      // 0x0048(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayCycleInstance");
		return ptr;
	}

};


// Class GbxTimeOfDay.TimeOfDayKeyBase
// 0x0010 (0x0038 - 0x0028)
class UTimeOfDayKeyBase : public UObject
{
public:
	class UTimeOfDayLayer*                             ParentLayer;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              KeyTime;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	ETimeOfDayKeyType                                  KeyType;                                                  // 0x0035(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayKeyBase");
		return ptr;
	}

};


// Class GbxTimeOfDay.TimeOfDayEventKey
// 0x0010 (0x0048 - 0x0038)
class UTimeOfDayEventKey : public UTimeOfDayKeyBase
{
public:
	struct FName                                       EventName;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ETimeOfDayState                                    State;                                                    // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayEventKey");
		return ptr;
	}

};


// Class GbxTimeOfDay.TimeOfDayLayer
// 0x0078 (0x00A0 - 0x0028)
class UTimeOfDayLayer : public UObject
{
public:
	class UTimeOfDayCycle*                             ParentCycle;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      LayerOverrideName;                                        // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UTimeOfDayKeyBase*>                   Keys;                                                     // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FCollectionScalarParameter>          OverrideScalarParameters;                                 // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FCollectionVectorParameter>          OverrideVectorParameters;                                 // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FCollectionScalarParameter>          OverrideScalarProperties;                                 // 0x0070(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FCollectionVectorParameter>          OverrideVectorProperties;                                 // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FTODCollectionVector4Parameter>      OverrideVector4Properties;                                // 0x0090(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayLayer");
		return ptr;
	}

};


// Class GbxTimeOfDay.TimeOfDayPropertyKey
// 0x0050 (0x0088 - 0x0038)
class UTimeOfDayPropertyKey : public UTimeOfDayKeyBase
{
public:
	TArray<struct FCollectionScalarParameter>          OverrideScalarParameters;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FCollectionVectorParameter>          OverrideVectorParameters;                                 // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FCollectionScalarParameter>          OverrideScalarProperties;                                 // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FCollectionVectorParameter>          OverrideVectorProperties;                                 // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FTODCollectionVector4Parameter>      OverrideVector4Properties;                                // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayPropertyKey");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
