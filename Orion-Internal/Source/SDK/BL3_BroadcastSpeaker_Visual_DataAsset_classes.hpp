#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BroadcastSpeaker_Visual_DataAsset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BroadcastSpeaker_Visual_DataAsset.BroadcastSpeaker_Visual_DataAsset_C
// 0x0000 (0x00B4 - 0x00B4)
class UBroadcastSpeaker_Visual_DataAsset_C : public UBroadcastRadio_Visual_DataAsset_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BroadcastSpeaker_Visual_DataAsset.BroadcastSpeaker_Visual_DataAsset_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
