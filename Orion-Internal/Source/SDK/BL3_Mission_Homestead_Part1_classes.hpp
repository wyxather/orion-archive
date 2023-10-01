#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Homestead_Part1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_Homestead_Part1.Mission_Homestead_Part1_C
// 0x0068 (0x0578 - 0x0510)
class UMission_Homestead_Part1_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_SeeMa_ObjSetVar;                                      // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_SeeMa_ObjVar;                                         // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GetParts_ObjSetVar;                                   // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ReturnPartsToMa_ObjSetVar;                            // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReturnPartsToMa_ObjVar;                               // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_RepairHomestead_ObjSetVar;                            // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_WindTurbineCore_ObjVar;                               // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PlaceWindTurbineCore_ObjVar;                          // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PlaceFuseOnGate_ObjVar;                               // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TurnInToMa_ObjSetVar;                                 // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReturnToMaAtEnd_ObjVar;                               // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Fuse_ObjVar;                                          // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Homestead_Part1.Mission_Homestead_Part1_C");
		return ptr;
	}


	void OnDialogSequenceFinished_17();
	void OnDialogSequenceFinished_16();
	void OnDialogSequenceFinished_15();
	void OnDialogSequenceFinished_14();
	void OnDialogSequenceFinished_13();
	void OnDialogSequenceFinished_12();
	void OnDialogSequenceFinished_11();
	void OnDialogSequenceFinished_10();
	void Set_SeeMa(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_SeeMa(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_GetParts(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_ReturnPartsToMa(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ReturnPartsToMa(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_RepairHomestead(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void ME_PlayerReturnedToMa(class UObject* Context);
	void Obj_WindTurbineCore(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_PlaceFuseOnGate(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_PlaceWindTurbineCore(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_PlayerPlacedWindTurbineCore(class UObject* Context);
	void ME_PlayerPlacedFuse(class UObject* Context);
	void Set_TurnInToMa(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ReturnToMaAtEnd(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_PlayerTurnedInToMa(class UObject* Context);
	void ME_PlayerTalkedToMaAfterPoster(class UObject* Context);
	void ME_PlayerGotFuse(class UObject* Context);
	void Obj_Fuse(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_PlayerGotWindTurbine(class UObject* Context);
	void ME_PlayerApproachedFuse_POI(class UObject* Context);
	void ME_PlayerApproachedCore_POI(class UObject* Context);
	void ExecuteUbergraph_Mission_Homestead_Part1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
