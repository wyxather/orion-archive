#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PostProcessSettingsMaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PostProcessSettingsMaster.PostProcessSettingsMaster_C
// 0x0000 (0x0630 - 0x0630)
class UPostProcessSettingsMaster_C : public UPostProcessSettingsTemplate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PostProcessSettingsMaster.PostProcessSettingsMaster_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
