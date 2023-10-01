#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxFeedback_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxFeedback.GbxRumbleRemapping
// 0x0A50 (0x0A78 - 0x0028)
class UGbxRumbleRemapping : public UObject
{
public:
	struct FRemapByConsole                             WindowsMapping;                                           // 0x0028(0x0210) (Edit, Config)
	struct FRemapByConsole                             XBoxOneMapping;                                           // 0x0238(0x0210) (Edit, Config)
	struct FRemapByConsole                             PS4Mapping;                                               // 0x0448(0x0210) (Edit, Config)
	struct FRemapByConsole                             XBoxSeriesXMapping;                                       // 0x0658(0x0210) (Edit, Config)
	struct FRemapByConsole                             PS5Mapping;                                               // 0x0868(0x0210) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxFeedback.GbxRumbleRemapping");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
