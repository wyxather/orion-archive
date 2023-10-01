#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DA_IO_EchoLog_NonMission_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DA_IO_EchoLog_NonMission.DA_IO_EchoLog_NonMission_C
// 0x0010 (0x0040 - 0x0030)
class UDA_IO_EchoLog_NonMission_C : public UGbxDataAssetBlueprintable
{
public:
	class UItemPoolListInterface*                      EchoLogItemPool;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      EchoLogChallenge;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DA_IO_EchoLog_NonMission.DA_IO_EchoLog_NonMission_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
