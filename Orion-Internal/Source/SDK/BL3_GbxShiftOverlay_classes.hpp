#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxShiftOverlay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxShiftOverlay.GbxShiftOverlay
// 0x0140 (0x0168 - 0x0028)
class UGbxShiftOverlay : public UObject
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0028(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxShiftOverlay.GbxShiftOverlay");
		return ptr;
	}

};


// Class GbxShiftOverlay.GbxShiftSaveGameInterface
// 0x0000 (0x0028 - 0x0028)
class UGbxShiftSaveGameInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxShiftOverlay.GbxShiftSaveGameInterface");
		return ptr;
	}

};


// Class GbxShiftOverlay.GbxShiftOverlaySettings
// 0x0028 (0x0050 - 0x0028)
class UGbxShiftOverlaySettings : public UObject
{
public:
	int                                                ZOrder;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoBlockOnMapLoad;                                      // 0x002C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoBlockOnMovie;                                        // 0x002D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoBlockOnCinematic;                                    // 0x002E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoBlockOnAppFocus;                                     // 0x002F(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                NotificationPadding;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              NotificationSizeX;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              NotificationSizeY;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                OverlayVirtualResX;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                OverlayVirtualResY;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              InputModeThreshold_Cursor;                                // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              InputModeThreshold_Analog;                                // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxShiftOverlay.GbxShiftOverlaySettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
