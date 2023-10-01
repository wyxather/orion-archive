#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Slam_Barrage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C
// 0x0070 (0x0340 - 0x02D0)
class UAction_PhaseTrance_Slam_Barrage_C : public UAction_Phasetrance_Slam_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    SlamBlastFX;                                              // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FDataTableValueHandle                       SlamBlastRadius;                                          // 0x02E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       SlamReducedRadius;                                        // 0x02F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	EGbxActionEndState                                 EndReason;                                                // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0311(0x0007) MISSED OFFSET
	class ASplat*                                      Splat;                                                    // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BarrageBeamName;                                          // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableValueHandle                       BeamDamage;                                               // 0x0328(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C");
		return ptr;
	}


	void StopSlamLoopFeedback();
	void InnerStopBeam();
	void InnerStartBeam();
	void AN_StopBlastBeam();
	void AN_FireBlastProjectileDown();
	void Cleanup();
	void AN_DoSlam();
	void DoDamageAsync();
	void OnServerBegin(class AActor** Actor);
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void AN_StartBlastBeam();
	void AN_RemoveBeamEmitter();
	void OnBeginBringUpWeapon(class AActor** Actor);
	void AN_BeamRumble();
	void AN_SlamLoopRumble();
	void ExecuteUbergraph_Action_PhaseTrance_Slam_Barrage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
