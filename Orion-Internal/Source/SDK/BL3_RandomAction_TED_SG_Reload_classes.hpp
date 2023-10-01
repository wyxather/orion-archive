#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_RandomAction_TED_SG_Reload_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RandomAction_TED_SG_Reload.RandomAction_TED_SG_Reload_C
// 0x0000 (0x0070 - 0x0070)
class URandomAction_TED_SG_Reload_C : public UGbxAction_RandomContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RandomAction_TED_SG_Reload.RandomAction_TED_SG_Reload_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
