#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxMixer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxMixer.GbxMixerSettings
// 0x0040 (0x0068 - 0x0028)
class UGbxMixerSettings : public UObject
{
public:
	class FString                                      AppClientID;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      RequiredAuthScope;                                        // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      MixplayProjectVersionID;                                  // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      BackendServiceURL;                                        // 0x0058(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMixer.GbxMixerSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
