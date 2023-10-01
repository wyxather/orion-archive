#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Ellie_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Ellie.BPChar_Ellie_C
// 0x0050 (0x25E0 - 0x2590)
class ABPChar_Ellie_C : public ABPChar_NonPlayerCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2590(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        DefaultAudioComponent;                                    // 0x2598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFaceFXComponent*                            FaceFX;                                                   // 0x25A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyMainComponent*                         FoleyMain;                                                // 0x25A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SetScaleOverTimeExit__Direction_C25001074289D71C75D69183BBFB6A36;// 0x25B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x25B1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          SetScaleOverTimeExit;                                     // 0x25B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SetScaleOverTimeEnter__Direction_E95033444EE14DBE589A85B37047BB59;// 0x25C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x25C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          SetScaleOverTimeEnter;                                    // 0x25C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LookAtDistance;                                           // 0x25D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NewVar_2;                                                 // 0x25D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxCondition*                               MissionAvailablePandorasNTMP;                             // 0x25D8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Ellie.BPChar_Ellie_C");
		return ptr;
	}


	void UserConstructionScript();
	void SetScaleOverTimeEnter__FinishedFunc();
	void SetScaleOverTimeEnter__UpdateFunc();
	void SetScaleOverTimeExit__FinishedFunc();
	void SetScaleOverTimeExit__UpdateFunc();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700(class AController** UserController, class UPrimitiveComponent** UsedComponent);
	void OnEnterVehicle(class UPawnAttachSlotComponent* PawnAttachSlotComponent);
	void ReceiveBeginPlay();
	void CustomEvent(class UPawnAttachSlotComponent* PawnAttachSlotComponent);
	void ExecuteUbergraph_BPChar_Ellie(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
