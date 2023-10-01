#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_QuickChange_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_QuickChange.BP_QuickChange_C
// 0x00B0 (0x0710 - 0x0660)
class ABP_QuickChange_C : public AQuickChange
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               BoxComponent3;                                            // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BoxComponent2;                                            // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BoxComponent;                                             // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               UsableCollision;                                          // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TouchBox;                                                 // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMinimapIconComponent*                    OakMinimapIcon;                                           // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMissionIconComponent*                    OakMissionIcon;                                           // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABPChar_Player_C*>                    PlayersNearby;                                            // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnPickedSkin;                                             // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRenameSave;                                             // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSkillRespec;                                            // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickedHead;                                             // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickedEchoTheme;                                        // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeSkinColor;                                        // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_QuickChange.BP_QuickChange_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnSaveGameRenamed(struct FText* NewName);
	void OnPickedNewSkinColor(int* Index, struct FLinearColor* Color);
	void OnPickedNewSkin(class UOakCustomizationData** NewSkin);
	void OnPickedNewHead(class UOakCustomizationData** NewHead);
	void OnPickedNewECHOTheme(class UOakCustomizationData** NewECHOTheme);
	void OnRespec();
	void OnPlayerStopInteraction(class AOakPlayerController** Player);
	void ExecuteUbergraph_BP_QuickChange(int EntryPoint);
	void OnChangeSkinColor__DelegateSignature();
	void OnPickedEchoTheme__DelegateSignature();
	void OnPickedHead__DelegateSignature();
	void OnSkillRespec__DelegateSignature();
	void OnRenameSave__DelegateSignature();
	void OnPickedSkin__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
