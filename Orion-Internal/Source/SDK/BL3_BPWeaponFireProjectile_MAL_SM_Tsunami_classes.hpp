#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_MAL_SM_Tsunami_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C
// 0x0009 (0x0961 - 0x0958)
class UBPWeaponFireProjectile_MAL_SM_Tsunami_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	bool                                               bNormalShot;                                              // 0x0960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void K2_OnActivated();
	void EvaluateShot();
	void ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_Tsunami(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
