#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Salvage_Effect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Salvage_Effect.BP_Salvage_Effect_C
// 0x0048 (0x0598 - 0x0550)
class ABP_Salvage_Effect_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UTextRenderComponent*                        TextRender;                                               // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EnumState_ClaptrapSalvage>             ClaptrapState;                                            // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0571(0x0007) MISSED OFFSET
	class UChallengesComponent*                        myChallengeComponent;                                     // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      ClaptrapChallenge;                                        // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxCondition*                               Cond_ClaptrapState_NewEnumerator0;                        // 0x0588(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_ClaptrapState_NewEnumerator2;                        // 0x0590(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Salvage_Effect.BP_Salvage_Effect_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ChallengeCompleted(class UChallengesComponent* ChallengeComponent, class UClass* ChallengeClass);
	void EvaulateState();
	void __UserState_ClaptrapState_1(bool bFromLoad);
	void __UserState_ClaptrapState_2(bool bFromLoad);
	void ExecuteUbergraph_BP_Salvage_Effect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
