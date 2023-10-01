#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AudioMixerWwise_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AudioMixerWwise.AudioMixerWwiseSettings
// 0x0018 (0x0040 - 0x0028)
class UAudioMixerWwiseSettings : public UObject
{
public:
	struct FSoftObjectPath                             PassthroughEvent;                                         // 0x0028(0x0018) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixerWwise.AudioMixerWwiseSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
