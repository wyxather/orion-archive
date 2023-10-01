#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPFirstPersonConfig_Beastmaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPFirstPersonConfig_Beastmaster.BPFirstPersonConfig_Beastmaster_C
// 0x0000 (0x0478 - 0x0478)
class ABPFirstPersonConfig_Beastmaster_C : public ABPFirstPersonConfig_Player_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFirstPersonConfig_Beastmaster.BPFirstPersonConfig_Beastmaster_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
