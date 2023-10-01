#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlanetMapData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlanetMapData.PlanetMapData_C
// 0x0080 (0x01A0 - 0x0120)
class UPlanetMapData_C : public UPlanetData
{
public:
	struct FTransform                                  Desired_Local_Transform;                                  // 0x0120(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Planet_Rotation;                                          // 0x0150(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Light_Direction;                                          // 0x015C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Sun_Light_Color;                                          // 0x0168(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Sun_Brightness;                                           // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_Radius;                                               // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Initial_Rotation;                                         // 0x0180(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    TriGrid_Rotation;                                         // 0x018C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                Seed;                                                     // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Seed2;                                                    // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlanetMapData.PlanetMapData_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
