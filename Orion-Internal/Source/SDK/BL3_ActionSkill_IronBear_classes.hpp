#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_IronBear_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionSkill_IronBear.ActionSkill_IronBear_C
// 0x0008 (0x0280 - 0x0278)
class UActionSkill_IronBear_C : public UOakActionAbility_IronBear
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_IronBear.ActionSkill_IronBear_C");
		return ptr;
	}


	class FString GetActionSkillWidgetKeyframe();
	EGbxAbilityState CalculateAbilityState();
	class UClass* GetIronBearClass();
	struct FRotator GetIronBearSpawnRotation();
	struct FVector GetIronBearSpawnLocation();
	float GetCooldownRestartPercent();
	bool ShouldAbortActivation(unsigned char* OutAbortCode);
	void GetCameraYaw(float* res);
	void StartSummoningIronCub();
	void ExecuteUbergraph_ActionSkill_IronBear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
