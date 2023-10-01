#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CoherentRenderingPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CoherentRenderingPlugin.CoherentRenderingSettings
// 0x0018 (0x0040 - 0x0028)
class UCoherentRenderingSettings : public UObject
{
public:
	ECoherentRenderingSettingsSeverity                 RenderingLogSeverity;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ShowWarningsOnScreen;                                     // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	class FString                                      DeveloperOptions;                                         // 0x0030(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentRenderingPlugin.CoherentRenderingSettings");
		return ptr;
	}

};


// Class CoherentRenderingPlugin.CohTextureUserWrapData
// 0x0050 (0x0078 - 0x0028)
class UCohTextureUserWrapData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET
	class UTexture*                                    Texture;                                                  // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentRenderingPlugin.CohTextureUserWrapData");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
