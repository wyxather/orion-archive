#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Siren_DoUntoOthers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Siren_DoUntoOthers.Action_Siren_DoUntoOthers_C
// 0x003C (0x0274 - 0x0238)
class UAction_Siren_DoUntoOthers_C : public UActionParent_Siren_SkillArms_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      HomingTarget;                                             // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Grade;                                                    // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	struct FDataTableValueHandle                       Damage_Per_Rank;                                          // 0x0250(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UOakActionAbilityAugmentData_PhaseTrance_Element* AttunedElement;                                           // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              DoUntoOther_Radius;                                       // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Siren_DoUntoOthers.Action_Siren_DoUntoOthers_C");
		return ptr;
	}


	void AN_FireProjectile();
	void ExecuteUbergraph_Action_Siren_DoUntoOthers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
