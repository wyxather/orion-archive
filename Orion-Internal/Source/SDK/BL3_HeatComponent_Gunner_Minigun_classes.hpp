#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_HeatComponent_Gunner_Minigun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C
// 0x0018 (0x0250 - 0x0238)
class UHeatComponent_Gunner_Minigun_C : public UWeaponHeatComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class AWeapon_Hardpoint_Minigun_C*                 Minigun;                                                  // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 OverHeatAudioEvent;                                       // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnStopOverheat();
	void OnStartOverheat();
	void ExecuteUbergraph_HeatComponent_Gunner_Minigun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
