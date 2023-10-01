#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_FastTravelStationObject_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FastTravelStationObject.FastTravelStationObject_C
// 0x0047 (0x06E8 - 0x06A1)
class AFastTravelStationObject_C : public AResurrectTravelStationObject_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x06A1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    NearbyPlayerFX_Deactivate;                                // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    NearbyPlayerFX_StartAndLoop;                              // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOutOfMapWaypointComponent*                  OutOfMapWaypoint1;                                        // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMinimapIconComponent*                    OakMinimapIconComponent;                                  // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            Usable;                                                   // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFastTravelStationComponent*                 FastTravelStation;                                        // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FastTravelStationObject.FastTravelStationObject_C");
		return ptr;
	}


	void SetLevelNameText(class UTravelStationData* Target);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_FastTravelStationObject(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void BndEvt__ActivationArea_K2Node_ComponentBoundEvent_0_AreaPlayerEvent__DelegateSignature_FastTravelStationObject(class AGbxPlayerController* Player);
	void BndEvt__ActivationArea_K2Node_ComponentBoundEvent_2_AreaPlayerEvent__DelegateSignature_FastTravelStationObject(class AGbxPlayerController* Player);
	void OnEnabled();
	void OnDisabled();
	void OnDisabling();
	void ExecuteUbergraph_FastTravelStationObject(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
