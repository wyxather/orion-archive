#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Aura_Mod_HiveShot_InsectCloud_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C
// 0x0074 (0x03FC - 0x0388)
class AAura_Mod_HiveShot_InsectCloud_C : public ABP_Aura_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ACharacterGunfire*>                   ValidOverlaps;                                            // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              DOTDamageScalar;                                          // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              SFXDelay;                                                 // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class ACharacterGunfire*, float>              CharacterToStackTimeRemaining;                            // 0x03A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              CorrodedStackFrequencyInSeconds;                          // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C");
		return ptr;
	}


	void AbrasiveAmuletAddCorrosiveStack(class ACharacterGunfire** Character);
	void DoActionToCharacter(class ACharacterGunfire** Character);
	void AddCorrodedStack(class ACharacterGunfire** Character);
	void CanDoAction(class ACharacterGunfire** Character, bool* Out);
	void UpdateValidOverlaps();
	void DoAction(class ACharacterGunfire** TargetCharacter, class UActionComponent** ActionComp);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void StopAction(class ACharacterGunfire** Character);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Aura_Mod_HiveShot_InsectCloud(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
