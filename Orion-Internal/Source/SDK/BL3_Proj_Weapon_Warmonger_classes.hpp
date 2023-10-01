#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_Warmonger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Weapon_Warmonger.Proj_Weapon_Warmonger_C
// 0x010A (0x0894 - 0x078A)
class AProj_Weapon_Warmonger_C : public AProj_Weapon_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UDrunkenRandomMovementComponent*             DrunkenRandomMovement;                                    // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Trail;                                                    // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEnvQueryParams                             Query;                                                    // 0x07A8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              TargetList;                                               // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      HomingTarget;                                             // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FTransform>                          FireTransforms;                                           // 0x0878(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     EndLocation;                                              // 0x0888(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Weapon_Warmonger.Proj_Weapon_Warmonger_C");
		return ptr;
	}


	void SplitVisuals();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Split();
	void ExecuteUbergraph_Proj_Weapon_Warmonger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
