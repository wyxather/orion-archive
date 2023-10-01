#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Mod_UnstableQuills_ProjectileExplosion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_AOE_Mod_UnstableQuills_ProjectileExplosion.Action_AOE_Mod_UnstableQuills_ProjectileExplosion_C
// 0x0010 (0x02B0 - 0x02A0)
class UAction_AOE_Mod_UnstableQuills_ProjectileExplosion_C : public UAction_AOE_ForceImpulse_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AMod_UnstableQuills_Projectile_C*            UnstableQuillsCause;                                      // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AOE_Mod_UnstableQuills_ProjectileExplosion.Action_AOE_Mod_UnstableQuills_ProjectileExplosion_C");
		return ptr;
	}


	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void GetDamage(float* Damage);
	void OnActionStart();
	void ExecuteUbergraph_Action_AOE_Mod_UnstableQuills_ProjectileExplosion(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
