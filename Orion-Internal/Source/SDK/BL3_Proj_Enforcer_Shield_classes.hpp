#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Enforcer_Shield_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Enforcer_Shield.Proj_Enforcer_Shield_C
// 0x0010 (0x0728 - 0x0718)
class AProj_Enforcer_Shield_C : public AProj_AIShield_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (Transient, DuplicateTransient)
	class UOakDamageComponent*                         OakDamage;                                                // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Enforcer_Shield.Proj_Enforcer_Shield_C");
		return ptr;
	}


	void UserConstructionScript();
	void AIMelee_Drop(bool* RequestNewMeleeWeapon);
	void ExecuteUbergraph_Proj_Enforcer_Shield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
