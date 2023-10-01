#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_Torgue_RoisensThorns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C
// 0x000C (0x098C - 0x0980)
class UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C : public UBPWeaponFireProjectileComponent_Torgue_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (Transient, DuplicateTransient)
	float                                              SecondaryProjDamage_Scalar;                               // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void NotifyUseStarted_Event();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_RoisensThorns(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
