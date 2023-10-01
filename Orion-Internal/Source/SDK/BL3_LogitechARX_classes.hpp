#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LogitechARX_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LogitechARX.LogitechARXConfig
// 0x0050 (0x0078 - 0x0028)
class ULogitechARXConfig : public UObject
{
public:
	class FString                                      BasePathToAssets;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class FString                                      IndexFile;                                                // 0x0038(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FText                                       AppletTitle;                                              // 0x0048(0x0028) (Edit, Config, GlobalConfig)
	struct FText                                       AppletFriendlyName;                                       // 0x0060(0x0028) (Edit, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LogitechARX.LogitechARXConfig");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
