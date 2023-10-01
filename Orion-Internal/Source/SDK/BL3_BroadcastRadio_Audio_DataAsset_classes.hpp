#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BroadcastRadio_Audio_DataAsset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BroadcastRadio_Audio_DataAsset.BroadcastRadio_Audio_DataAsset_C
// 0x0018 (0x0048 - 0x0030)
class UBroadcastRadio_Audio_DataAsset_C : public UGbxDataAssetBlueprintable
{
public:
	class UMissionRadioAudioDataAsset_C*               MissionRadio;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBroadcastRadio_Channel_DataAsset_C*         MusicChannel;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBroadcastRadio_Channel_DataAsset_C*         AdsChannel;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BroadcastRadio_Audio_DataAsset.BroadcastRadio_Audio_DataAsset_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
