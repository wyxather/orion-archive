#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_Nemesis_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C
// 0x0010 (0x0968 - 0x0958)
class UBPWeaponFireProjectileComponent_Nemesis_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      CachedElement;                                            // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C");
		return ptr;
	}


	void K2_OnActivated();
	void ElementalSwitch();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_Nemesis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
