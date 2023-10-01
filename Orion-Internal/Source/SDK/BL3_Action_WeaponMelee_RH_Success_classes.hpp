#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_WeaponMelee_RH_Success_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_WeaponMelee_RH_Success.Action_WeaponMelee_RH_Success_C
// 0x0008 (0x0228 - 0x0220)
class UAction_WeaponMelee_RH_Success_C : public UAction_WeaponMelee_Base_Success_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_WeaponMelee_RH_Success.Action_WeaponMelee_RH_Success_C");
		return ptr;
	}


	void PlayScreenParticle();
	void ExecuteUbergraph_Action_WeaponMelee_RH_Success(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
