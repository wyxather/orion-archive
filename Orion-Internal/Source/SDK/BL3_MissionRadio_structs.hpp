#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct MissionRadio.MissionRadio
// 0x0018
struct FMissionRadio
{
	class UWwiseEvent*                                 Audio_2_3F0ACAA8484CEE8E4FAF2FB155EE9610;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MissionEnableAudio_23_6E391E4C407518FE870E8CB1EF5EC4D9;   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MissionDisableAudio_24_1BFEF3B74874159B08265480DE396540;  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
