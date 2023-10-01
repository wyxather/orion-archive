#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_VarkidDamageRibbon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_VarkidDamageRibbon.Proj_VarkidDamageRibbon_C
// 0x0090 (0x0770 - 0x06E0)
class AProj_VarkidDamageRibbon_C : public AOakAIBalancedProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProceduralMeshComponent*                    ProceduralMesh;                                           // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UElementalInteractionComponent*              ElementalInteraction;                                     // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Vert_AnchorA_World;                                       // 0x0708(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Vert_AnchorB_World;                                       // 0x0714(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RibbonWidth;                                              // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0724(0x0004) MISSED OFFSET
	TArray<struct FVector>                             VertArray;                                                // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        TriArray;                                                 // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              RibbonUpdateDelay;                                        // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrailingDistance;                                         // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisabledRibbonLifetime;                                   // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightOffset;                                             // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FWwiseLocationOverride>              AudioPositionArray;                                       // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_VarkidDamageRibbon.Proj_VarkidDamageRibbon_C");
		return ptr;
	}


	void CreateTriangle(int Int);
	void UpdateRibbon();
	void AddNewVertLoc();
	void UserConstructionScript();
	void HNT_Prime();
	void HNT_Drop();
	void HNT_Throw();
	void CE_RibbonMetronomeStart();
	void CE_RibbonMetronomeStop();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Proj_VarkidDamageRibbon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
