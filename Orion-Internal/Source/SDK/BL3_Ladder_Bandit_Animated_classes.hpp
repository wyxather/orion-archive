#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ladder_Bandit_Animated_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ladder_Bandit_Animated.Ladder_Bandit_Animated_C
// 0x003C (0x057C - 0x0540)
class ALadder_Bandit_Animated_C : public ALadder_Bandit_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LadderDown_Anim_LadderDown_CE4039584A463666B902E0AD58013D25;// 0x0550(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LadderDown_Anim__Direction_CE4039584A463666B902E0AD58013D25;// 0x0554(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0555(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LadderDown_Anim;                                          // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    LadderDownComplete;                                       // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector                                     StartingPosition;                                         // 0x0570(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ladder_Bandit_Animated.Ladder_Bandit_Animated_C");
		return ptr;
	}


	void UserConstructionScript();
	void LadderDown_Anim__FinishedFunc();
	void LadderDown_Anim__UpdateFunc();
	void LadderDown_Start();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Ladder_Bandit_Animated(int EntryPoint);
	void LadderDownComplete__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
