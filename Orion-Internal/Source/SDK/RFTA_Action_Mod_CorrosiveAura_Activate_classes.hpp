#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_CorrosiveAura_Activate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C
// 0x0028 (0x0320 - 0x02F8)
class UAction_Mod_CorrosiveAura_Activate_C : public UAction_Aura_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    VFX_Aura;                                                 // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFXAura;                                                  // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              OverlappingActors02;                                      // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C");
		return ptr;
	}


	void UpdateOverlaps02();
	void OnActionStart();
	void OnActionStop();
	void ApplyCorrosiveStacks();
	void OnBeginOverlap(class AActor** Actor);
	void ExecuteUbergraph_Action_Mod_CorrosiveAura_Activate(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
