#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Cloud_Mod_FrozenMist_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C
// 0x0074 (0x03FC - 0x0388)
class ABP_Cloud_Mod_FrozenMist_C : public ABP_Aura_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              DoTDamage;                                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TMap<class ACharacterGunfire*, float>              CharacterToStackTimeRemaining;                            // 0x03A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UAudioComponent*                             FX_Loop;                                                  // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LoopFadeOutDuration;                                      // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C");
		return ptr;
	}


	void TestDriftstone(class ACharacterGunfire** Character);
	void StopActionOnCharacter(class ACharacterGunfire** Character);
	void DoActionToCharacter(class ACharacterGunfire** Character);
	void AddFrostbiteStack(class ACharacterGunfire** Character);
	void SFX_Start();
	void SFX_Stop();
	void ReceiveBeginPlay();
	void DoAction(class ACharacterGunfire** TargetCharacter, class UActionComponent** ActionComp);
	void StopAction(class ACharacterGunfire** Character);
	void MulticastFadeOut();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Cloud_Mod_FrozenMist(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
