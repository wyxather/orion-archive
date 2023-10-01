#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Vaughn_Gesture_Kick_Light_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Vaughn_Gesture_Kick_Light.Action_Vaughn_Gesture_Kick_Light_C
// 0x0010 (0x0228 - 0x0218)
class UAction_Vaughn_Gesture_Kick_Light_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      SelfNPC;                                                  // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Vaughn_Gesture_Kick_Light.Action_Vaughn_Gesture_Kick_Light_C");
		return ptr;
	}


	void Notify_DoorKicked();
	void ExecuteUbergraph_Action_Vaughn_Gesture_Kick_Light(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
