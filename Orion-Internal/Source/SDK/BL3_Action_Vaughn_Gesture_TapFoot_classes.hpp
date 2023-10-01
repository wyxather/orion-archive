#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Vaughn_Gesture_TapFoot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Vaughn_Gesture_TapFoot.Action_Vaughn_Gesture_TapFoot_C
// 0x0008 (0x0220 - 0x0218)
class UAction_Vaughn_Gesture_TapFoot_C : public UOakAction_Anim
{
public:
	class AActor*                                      SelfNPC;                                                  // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Vaughn_Gesture_TapFoot.Action_Vaughn_Gesture_TapFoot_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
