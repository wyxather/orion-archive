#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_DAL_Soulrender_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C
// 0x00D8 (0x0A30 - 0x0958)
class UBPWeaponFireProjectileComponent_DAL_Soulrender_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	struct FEnvQueryParams                             Query;                                                    // 0x0960(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      HomingTarget;                                             // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter*                               InventoryAbility_Character;                               // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       QueryOwner;                                               // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void NotifyUsed_Event();
	void K2_OnActivated();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_DAL_Soulrender(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
