#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCont_Player_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPCont_Player.BPCont_Player_C
// 0x0030 (0x1C98 - 0x1C68)
class ABPCont_Player_C : public AOakPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1C68(0x0008) (Transient, DuplicateTransient)
	class UBP_DevPerks_C*                              DeveloperPerks;                                           // 0x1C70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxPerceptionComponent*                     GbxPerception;                                            // 0x1C78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTargetingComponent*                         Targeting;                                                // 0x1C80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnJokeEulaClosed;                                         // 0x1C88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPCont_Player.BPCont_Player_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnJokeEULAClosedByPlayer();
	void ExecuteUbergraph_BPCont_Player(int EntryPoint);
	void OnJokeEulaClosed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
