#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionGiver_Single_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionGiver_Single.IO_MissionGiver_Single_C
// 0x0048 (0x0598 - 0x0550)
class AIO_MissionGiver_Single_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UUsableComponent*                            Usable;                                                   // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMissionDirectorComponent*                OakMissionDirector;                                       // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      MissionToGive;                                            // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EnumState_MissionGiver>                MissionGiverState;                                        // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    MissionGiverSingle_PlacacrdTriggered;                     // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UGbxCondition*                               Cond_MissionGiverState_NewEnumerator1;                    // 0x0590(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionGiver_Single.IO_MissionGiver_Single_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__OakMissionDirector_K2Node_ComponentBoundEvent_2_MissionDirectorEnabled__DelegateSignature_IO_MissionUsable_GrowingPains_WaterPurifier();
	void BndEvt__OakMissionDirector_K2Node_ComponentBoundEvent_1_MissionDirectorDisabled__DelegateSignature_IO_MissionUsable_GrowingPains_WaterPurifier();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionGiver_Single(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void __UserState_MissionGiverState_1(bool bFromLoad);
	void __UserState_MissionGiverState_2(bool bFromLoad);
	void Play_Feedback_MissionsAvailable();
	void Play_Feedback_NoMissionsAvailable();
	void ExecuteUbergraph_IO_MissionGiver_Single(int EntryPoint);
	void MissionGiverSingle_PlacacrdTriggered__DelegateSignature(bool MissionAvailable, class UOakMissionDirectorComponent* MissionDirectorComponent, class AOakPlayerController* UserPlayerController);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
