#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BroadcastRadio_Channel_DataAsset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BroadcastRadio_Channel_DataAsset.BroadcastRadio_Channel_DataAsset_C
// 0x0010 (0x0040 - 0x0030)
class UBroadcastRadio_Channel_DataAsset_C : public UGbxDataAssetBlueprintable
{
public:
	TArray<class UWwiseEvent*>                         ChannelRadio;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BroadcastRadio_Channel_DataAsset.BroadcastRadio_Channel_DataAsset_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
