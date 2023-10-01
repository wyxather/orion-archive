#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPTiesThatBindSphere_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPTiesThatBindSphere.BPTiesThatBindSphere_C
// 0x0048 (0x0658 - 0x0610)
class ABPTiesThatBindSphere_C : public AOakPhaseWebSphere
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDataTableValueHandle                       Web_Sphere_Radius;                                        // 0x0620(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       Web_Duration;                                             // 0x0638(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AOakCharacter*                               InitialTarget;                                            // 0x0650(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPTiesThatBindSphere.BPTiesThatBindSphere_C");
		return ptr;
	}


	void GetBeamSourceSceneComponent(class USceneComponent** res);
	void GetBeamDataForLinkedTarget(class AOakCharacter** LinkedTarget, struct FOakPhaseWebSphereBeamData* outBeamData);
	void GetBeamSystem(class UParticleSystem** res);
	bool GetSharedDamageData(class AOakCharacter** LinkedTarget, float* Damage, class UClass** DamageSourceClass, struct FOakPhaseWebSphere_SharedDamageData* SharedDamageData);
	float GetMaxTime();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnWebTargetAdded(class AOakCharacter** Target);
	void OnGraspedTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ApplySapRefund(float* RawAccumulateDamage);
	void ExecuteUbergraph_BPTiesThatBindSphere(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
