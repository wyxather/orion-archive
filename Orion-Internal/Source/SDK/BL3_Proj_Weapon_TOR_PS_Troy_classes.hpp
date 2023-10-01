#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_TOR_PS_Troy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C
// 0x002E (0x07B8 - 0x078A)
class AProj_Weapon_TOR_PS_Troy_C : public AProj_Weapon_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    TracerTrailFX;                                            // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      HomingTarget;                                             // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LightProjectile;                                          // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      FireID;                                                   // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07B1(0x0003) MISSED OFFSET
	float                                              Offset;                                                   // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SpawnChildren();
	void ExecuteUbergraph_Proj_Weapon_TOR_PS_Troy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
