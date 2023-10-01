#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPFiringComponent_TOR_Contained_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C
// 0x000C (0x098C - 0x0980)
class UBPFiringComponent_TOR_Contained_C : public UBPWeaponFireProjectileComponent_Torgue_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (Transient, DuplicateTransient)
	float                                              StackingBonus;                                            // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void NotifyReloadStarted_Event(class AWeapon* EventWeapon, bool bAutoReload);
	void K2_OnDeactivated();
	void ExecuteUbergraph_BPFiringComponent_TOR_Contained(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
