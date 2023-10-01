#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_NPC_Shared_Use_FastTravel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_NPC_Shared_Use_FastTravel.Action_NPC_Shared_Use_FastTravel_C
// 0x0010 (0x0228 - 0x0218)
class UAction_NPC_Shared_Use_FastTravel_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      NPC;                                                      // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_NPC_Shared_Use_FastTravel.Action_NPC_Shared_Use_FastTravel_C");
		return ptr;
	}


	void OnAnimEnd_6E3D29614FD0C524F1BB4FA94F7FD772();
	void OnEnd_6E3D29614FD0C524F1BB4FA94F7FD772(EGbxActionEndState EndState, class AActor* Actor);
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_NPC_Shared_Use_FastTravel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
