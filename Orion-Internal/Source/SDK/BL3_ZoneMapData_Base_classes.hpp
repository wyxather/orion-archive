#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ZoneMapData_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ZoneMapData_Base.ZoneMapData_Base_C
// 0x0050 (0x0270 - 0x0220)
class UZoneMapData_Base_C : public UZoneMapData
{
public:
	TArray<struct FZoneMapSection>                     Zone_Map_Sections;                                        // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTransform                                  Planet_Transform;                                         // 0x0230(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Target_Yaw;                                               // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Target_Pitch;                                             // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Override_Target_Scale;                                    // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	float                                              Target_Scale;                                             // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ZoneMapData_Base.ZoneMapData_Base_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
