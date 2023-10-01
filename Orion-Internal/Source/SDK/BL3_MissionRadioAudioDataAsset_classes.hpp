#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionRadioAudioDataAsset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionRadioAudioDataAsset.MissionRadioAudioDataAsset_C
// 0x0010 (0x0040 - 0x0030)
class UMissionRadioAudioDataAsset_C : public UGbxDataAssetBlueprintable
{
public:
	TArray<struct FMissionRadio>                       MissionRadio;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionRadioAudioDataAsset.MissionRadioAudioDataAsset_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
