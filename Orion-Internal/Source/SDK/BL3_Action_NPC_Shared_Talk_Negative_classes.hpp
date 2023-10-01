#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_NPC_Shared_Talk_Negative_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_NPC_Shared_Talk_Negative.Action_NPC_Shared_Talk_Negative_C
// 0x0008 (0x0220 - 0x0218)
class UAction_NPC_Shared_Talk_Negative_C : public UOakAction_Anim
{
public:
	class AActor*                                      SelfNPC;                                                  // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_NPC_Shared_Talk_Negative.Action_NPC_Shared_Talk_Negative_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
