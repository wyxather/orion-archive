#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_UnderwearTink_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_UnderwearTink.Mission_UnderwearTink_C
// 0x0020 (0x0530 - 0x0510)
class UMission_UnderwearTink_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_UnderTaker_ObjSetVar;                                 // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillUndertaker_ObjVar;                                // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           See_UnderwearTink_ObjVar;                                 // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_UnderwearTink.Mission_UnderwearTink_C");
		return ptr;
	}


	void OnDialogSequenceFinished_3();
	void Obj_KillUndertaker(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_UnderTaker(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_KilledTheUnderTaker(class UObject* Context);
	void MCE_BountyUndertakerSeen(class UObject* Context);
	void See_UnderwearTink(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ExecuteUbergraph_Mission_UnderwearTink(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
