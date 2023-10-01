#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_TOR_SG_TheLob_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Weapon_TOR_SG_TheLob.Proj_Weapon_TOR_SG_TheLob_C
// 0x002A (0x07B4 - 0x078A)
class AProj_Weapon_TOR_SG_TheLob_C : public AProj_Weapon_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    TracerTrailFX;                                            // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              AttachedTargets;                                          // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              Dot_DamageScale;                                          // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Weapon_TOR_SG_TheLob.Proj_Weapon_TOR_SG_TheLob_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Proj_Weapon_TOR_SG_TheLob(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
