#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPSmartObject_NPC_Examine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPSmartObject_NPC_Examine.BPSmartObject_NPC_Examine_C
// 0x0010 (0x0478 - 0x0468)
class ABPSmartObject_NPC_Examine_C : public ASmartObject
{
public:
	class USocketComponent*                            LookAtSocket;                                             // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIUseSlotComponent*                         AIUseSlot;                                                // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPSmartObject_NPC_Examine.BPSmartObject_NPC_Examine_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
