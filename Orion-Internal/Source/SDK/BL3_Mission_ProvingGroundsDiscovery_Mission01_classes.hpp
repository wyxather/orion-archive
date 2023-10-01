#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_ProvingGroundsDiscovery_Mission01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C
// 0x0038 (0x0548 - 0x0510)
class UMission_ProvingGroundsDiscovery_Mission01_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        SET_UseDropPod_OnSanctuary_ObjSetVar;                     // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_UseDropPod_ObjVar;                                    // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Navigate_NewPlanet_ObjVar;                            // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Navigate_NewPlanet_ObjSetVar;                         // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReNavigate_NewPlanet_ObjVar;                          // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ArriveAtMap_ObjSetVar;                                // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C");
		return ptr;
	}


	void Set_Navigate_NewPlanet(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Advance_Navigate_NewPlanet(class UObject* Context);
	void Obj_Navigate_NewPlanet(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_ReNavigate_NewPlanet(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Navigate_NewPlanet(class UObject* Context);
	void AdvanceTo_ArriveAtMap(class UObject* Context);
	void Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_UseDropPod_OnSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_ArriveAtMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _OBJ_UseDropPod_Objective__PROXY();
	void ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
