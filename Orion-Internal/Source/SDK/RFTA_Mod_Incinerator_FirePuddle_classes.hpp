#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_Incinerator_FirePuddle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C
// 0x0070 (0x03F8 - 0x0388)
class AMod_Incinerator_FirePuddle_C : public ABP_Aura_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             FX_Loop;                                                  // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LoopFadeOutDuration;                                      // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AddBurnStackLoopTime;                                     // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BurnDOTDamage;                                            // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              BurnDOTDuration;                                          // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<class ACharacterGunfire*, float>              CharacterToStackTimeRemaining;                            // 0x03A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C");
		return ptr;
	}


	void Add_Fire_Stack(class ACharacterGunfire** Character);
	void FX_Start();
	void FX_Stop();
	void ReceiveBeginPlay();
	void DoAction(class ACharacterGunfire** TargetCharacter, class UActionComponent** ActionComp);
	void MulticastFadeOut();
	void StopAction(class ACharacterGunfire** Character);
	void ReceiveTick(float* DeltaSeconds);
	void StopForCinematic(class APlayerControllerGunfire** Player, bool* bIsInCinematic);
	void ExecuteUbergraph_Mod_Incinerator_FirePuddle(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
