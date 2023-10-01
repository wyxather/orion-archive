#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_SM_ThatRingsABell_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C
// 0x0018 (0x0510 - 0x04F8)
class UALI_SM_ThatRingsABell_C : public UOakMission
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        SET_RingABell_ObjSetVar;                                  // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_RingABell_ObjVar;                                     // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C");
		return ptr;
	}


	void OnDialogSequenceFinished_5();
	void OnDialogSequenceFinished_4();
	void MCE_RingABell(class UObject* Context);
	void Obj_RingABell(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_RingABell(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MissionKickoff();
	void ExecuteUbergraph_ALI_SM_ThatRingsABell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
