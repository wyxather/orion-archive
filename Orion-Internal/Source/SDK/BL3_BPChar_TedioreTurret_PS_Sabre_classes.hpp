#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TedioreTurret_PS_Sabre_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C
// 0x0027 (0x2434 - 0x240D)
class ABPChar_TedioreTurret_PS_Sabre_C : public ABPChar_TedioreTurret_PS_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x240D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2410(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Shield;                                                // 0x2418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_Sabre_TurretShield;                                    // 0x2420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   ShieldBodySwitch;                                         // 0x2428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ShotCounter;                                              // 0x2430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Fired(class AWeapon* EventWeapon);
	void Reload2(bool* bAutoReload);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void ExecuteUbergraph_BPChar_TedioreTurret_PS_Sabre(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
