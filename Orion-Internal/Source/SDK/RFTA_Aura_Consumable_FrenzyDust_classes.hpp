#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Aura_Consumable_FrenzyDust_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C
// 0x0018 (0x03A0 - 0x0388)
class AAura_Consumable_FrenzyDust_C : public ABP_Aura_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Consumable_Frenzy_Dust_End_SC;                            // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_Ambient;                                              // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void DoAction(class ACharacterGunfire** TargetCharacter, class UActionComponent** ActionComp);
	void FadeOut(float* FadeTime);
	void StopAura();
	void ExecuteUbergraph_Aura_Consumable_FrenzyDust(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
