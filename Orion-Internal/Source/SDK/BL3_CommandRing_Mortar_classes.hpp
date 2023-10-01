#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CommandRing_Mortar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CommandRing_Mortar.CommandRing_Mortar_C
// 0x0028 (0x04D8 - 0x04B0)
class ACommandRing_Mortar_C : public ACommandRing
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_VLA_Mortar_Command_Ring_Target;                        // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxTrajectometerComponent*                  GbxTrajectometer;                                         // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CommandRing_Mortar.CommandRing_Mortar_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar(const struct FHitResult& HitResult);
	void ExecuteUbergraph_CommandRing_Mortar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
