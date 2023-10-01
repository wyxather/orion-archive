#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_SlaughterGameState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SlaughterGameState.BP_SlaughterGameState_C
// 0x0010 (0x0BF0 - 0x0BE0)
class ABP_SlaughterGameState_C : public ASlaughterGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BE0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SlaughterGameState.BP_SlaughterGameState_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnAllPlayersDied_Event_1();
	void OnNewRound_Event_1(int RoundNumber);
	void OnNewWave_Event_1(bool bBossWave, int CountdownDuration);
	void OnPlayerDied_Event_1(class AOakPlayerState* PlayerState);
	void OnRoundComplete_Event_1(int RoundNumber);
	void ExecuteUbergraph_BP_SlaughterGameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
