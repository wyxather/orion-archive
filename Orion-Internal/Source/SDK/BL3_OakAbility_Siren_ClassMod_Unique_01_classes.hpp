#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Unique_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C
// 0x0120 (0x0218 - 0x00F8)
class UOakAbility_Siren_ClassMod_Unique_01_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Siren_Unique01;// 0x0100(0x0028)
	struct FEnvQueryParams                             FindTargets;                                              // 0x0128(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              TargetList;                                               // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      PhasetranceElement;                                       // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableValueHandle                       GraspDamagePerSecond;                                     // 0x0200(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C");
		return ptr;
	}


	void OnActivated();
	void SirenUnique01_GraspedTarget(class AGbxCharacter* GraspedTarget);
	void ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
