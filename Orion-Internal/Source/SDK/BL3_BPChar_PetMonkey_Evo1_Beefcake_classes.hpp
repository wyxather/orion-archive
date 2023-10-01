#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PetMonkey_Evo1_Beefcake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C
// 0x002E (0x2650 - 0x2622)
class ABPChar_PetMonkey_Evo1_Beefcake_C : public ABPChar_PetMonkey_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x2622(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2628(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_BeastMaster_Jabbermon_Poop;                            // 0x2630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             PoopOn;                                                   // 0x2638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   Switch_PoopFX;                                            // 0x2640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MeleeWeapon;                                              // 0x2648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PetJabbermon_ChangeMeleeVis(bool* NewWeapVisibility);
	void PetJabbermon_Poop_Show();
	void PetJabbermon_Poop_Hide();
	void ExecuteUbergraph_BPChar_PetMonkey_Evo1_Beefcake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
