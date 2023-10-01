#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Operative_Digiclone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C
// 0x0018 (0x0598 - 0x0580)
class AStandIn_Operative_Digiclone_C : public AStandInAuxiliaryActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (Transient, DuplicateTransient)
	class UGbxSkeletalMeshComponent*                   HeadMesh;                                                 // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   BodyMesh;                                                 // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_Operative_Digiclone(class UGbxCustomizationData* Customization);
	void OnReceivedClonedWeaponAppearance(class USceneComponent** BaseComponent);
	void ExecuteUbergraph_StandIn_Operative_Digiclone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
