#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_GravityCoreShot_AOE_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C
// 0x0024 (0x02C4 - 0x02A0)
class UAction_Mod_GravityCoreShot_AOE_C : public UAction_AOE_ForceImpulse_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     Location;                                                 // 0x02A8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Damage;                                                   // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                NumHits;                                                  // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BonusDamagePerHits;                                       // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MultiTargetAddedDamage;                                   // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C");
		return ptr;
	}


	void GetDamage(float* Damage);
	struct FVector Get_Socket_Location(struct FName* InSocketName);
	void OnActionStart();
	void PreprocessAOE(int* NumHits);
	void ExecuteUbergraph_Action_Mod_GravityCoreShot_AOE(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
