#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Voice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Voice.Ability_Voice_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_Voice_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class APlayerController*                           PlayerController;                                         // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_SleepingGiant;// 0x0108(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Voice.Ability_Voice_C");
		return ptr;
	}


	void OnCausedDeath_CE(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnActivated();
	void ExecuteUbergraph_Ability_Voice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
