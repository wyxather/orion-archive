#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_VLA_HW_Mongol_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C
// 0x0016 (0x07A0 - 0x078A)
class AProj_Weapon_VLA_HW_Mongol_C : public AProj_Weapon_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    TracerTrailFX;                                            // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ContinueFiring();
	void FireVolley();
	void ExecuteUbergraph_Proj_Weapon_VLA_HW_Mongol(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
