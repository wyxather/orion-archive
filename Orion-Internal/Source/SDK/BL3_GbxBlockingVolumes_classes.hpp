#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxBlockingVolumes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxBlockingVolumes.GbxBlockingVolume
// 0x0010 (0x04A0 - 0x0490)
class AGbxBlockingVolume : public AVolume
{
public:
	bool                                               bAlwaysRender;                                            // 0x0490(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockRockets;                                            // 0x0491(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockProjectiles;                                        // 0x0492(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockTossed;                                             // 0x0493(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockEnemyPawns;                                         // 0x0494(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockEnemyVehicles;                                      // 0x0495(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockFriendlyPawns;                                      // 0x0496(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockPlayerVehicles;                                     // 0x0497(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockUsingThings;                                        // 0x0498(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowStandingOn;                                         // 0x0499(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockCamera;                                             // 0x049A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnemyPawnsPropEnabled;                                   // 0x049B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnemyVehiclesPropEnabled;                                // 0x049C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bFriendlyPawnsPropEnabled;                                // 0x049D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPlayerVehiclesPropEnabled;                               // 0x049E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x049F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxBlockingVolumes.GbxBlockingVolume");
		return ptr;
	}

};


// Class GbxBlockingVolumes.GbxBlockingVolumeUserSettings
// 0x0010 (0x0038 - 0x0028)
class UGbxBlockingVolumeUserSettings : public UObject
{
public:
	bool                                               bAlwaysRenderVolumes;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bNeverRenderVolumes;                                      // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              BlockingVolumeOpacity;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bInvertColors;                                            // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxBlockingVolumes.GbxBlockingVolumeUserSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
