#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Weapon_SwarmerMissile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_SwarmerMissile.BP_Weapon_SwarmerMissile_C
// 0x0008 (0x09C8 - 0x09C0)
class ABP_Weapon_SwarmerMissile_C : public AOakWeaponVehicleByDataAsset
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_SwarmerMissile.BP_Weapon_SwarmerMissile_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EnableHoming();
	void DisableHoming();
	void ExecuteUbergraph_BP_Weapon_SwarmerMissile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
