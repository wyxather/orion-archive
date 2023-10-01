#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_MendersAura_Aura_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mod_MendersAura_Aura.Mod_MendersAura_Aura_C
// 0x0014 (0x039C - 0x0388)
class AMod_MendersAura_Aura_C : public ABP_Aura_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Ambient;                                                  // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealthRegen;                                              // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_MendersAura_Aura.Mod_MendersAura_Aura_C");
		return ptr;
	}


	void CanDoAction(class ACharacterGunfire** Character, bool* Out);
	void ReceiveBeginPlay();
	void DoAction(class ACharacterGunfire** TargetCharacter, class UActionComponent** ActionComp);
	void StopAction(class ACharacterGunfire** Character);
	void FadeOut(float* FadeTime);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Mod_MendersAura_Aura(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
