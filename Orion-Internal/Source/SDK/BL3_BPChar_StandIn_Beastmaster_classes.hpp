#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_StandIn_Beastmaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_StandIn_Beastmaster.BPChar_StandIn_Beastmaster_C
// 0x0008 (0x2398 - 0x2390)
class ABPChar_StandIn_Beastmaster_C : public ABPChar_StandInPlayer_C
{
public:
	class UBeastmasterStandInComponent*                BeastmasterStandIn;                                       // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_StandIn_Beastmaster.BPChar_StandIn_Beastmaster_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
