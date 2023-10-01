#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_Salvage_ClapTrapPart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C
// 0x0100 (0x0650 - 0x0550)
class ABP_IO_Salvage_ClapTrapPart_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UGbxChildActorComponent*                     ChildActor;                                               // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FX_Used;                                                  // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            Usable;                                                   // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Gear;                                                     // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   GbxSkeletalMesh;                                          // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavBox;                                                   // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_CrewChallengeComponent_Salvage_C*        BP_CrewChallengeComponent_Salvage;                        // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMinimapIconComponent*                    OakMinimapIcon;                                           // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Gear_0E30030D4E912FBF9E42FB867115BC2C;         // 0x05B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Movement_0E30030D4E912FBF9E42FB867115BC2C;     // 0x05BC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_0E30030D4E912FBF9E42FB867115BC2C;   // 0x05C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGestaltPartListData*                        StartGestaltList;                                         // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGestaltPartListData*                        EndGestaltList;                                           // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    NewVar_1;                                                 // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               EndStatePreview;                                          // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05E9(0x0003) MISSED OFFSET
	struct FVector                                     GearPickupOffset;                                         // 0x05EC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSingleAnimationPlayData                    AnimData;                                                 // 0x05F8(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EnumState_ClaptrapSalvage>             ClaptrapState;                                            // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0611(0x0007) MISSED OFFSET
	class AGbxCharacter*                               UsedCharacter;                                            // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GearMoveTo;                                               // 0x0620(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x062C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ClaptrapUsed;                                             // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UGbxCondition*                               Cond_ClaptrapState_NewEnumerator0;                        // 0x0640(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_ClaptrapState_NewEnumerator2;                        // 0x0648(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IO_Salvage_ClapTrapPart.BP_IO_Salvage_ClapTrapPart_C");
		return ptr;
	}


	void ClaptrapFeedback(bool* NewParam);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__BP_CrewChallengeComponent_Salvage_K2Node_ComponentBoundEvent_2_ChallengePlayerEvent__DelegateSignature_BP_IO_Salvage_ClapTrapPart(class UChallengesComponent* PlayerChallenges);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_Salvage_ClapTrapPart(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void __UserState_ClaptrapState_1(bool bFromLoad);
	void __UserState_ClaptrapState_2(bool bFromLoad);
	void __UserState_ClaptrapState_3(bool bFromLoad);
	void ExecuteUbergraph_BP_IO_Salvage_ClapTrapPart(int EntryPoint);
	void ClaptrapUsed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
