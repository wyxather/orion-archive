#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Mod_Blizzard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C
// 0x000E (0x028C - 0x027E)
class UAction_AOE_Mod_Blizzard_C : public UAction_AOE_Attack_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x027E(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                NumFrostbiteStacks;                                       // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C");
		return ptr;
	}


	void GetFilterActor(class AActor** FilterActor);
	void AddFrostbiteStack(class ACharacterGunfire** Character);
	void TestDriftstone(class ACharacterGunfire** Character);
	void OnActionStart();
	void PostDamage(class AActor** Target, float* Falloff, float* DamageReceived);
	void ExecuteUbergraph_Action_AOE_Mod_Blizzard(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
