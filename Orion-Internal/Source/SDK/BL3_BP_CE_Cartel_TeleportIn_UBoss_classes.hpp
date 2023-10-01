#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Cartel_TeleportIn_UBoss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CE_Cartel_TeleportIn_UBoss.BP_CE_Cartel_TeleportIn_UBoss_C
// 0x0000 (0x0160 - 0x0160)
class UBP_CE_Cartel_TeleportIn_UBoss_C : public UBP_CE_Cartel_TeleportIn_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_Cartel_TeleportIn_UBoss.BP_CE_Cartel_TeleportIn_UBoss_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
