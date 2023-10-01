#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_RedirectDrone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C
// 0x00C0 (0x0338 - 0x0278)
class UAction_Operative_RedirectDrone_C : public UOakAction_Anim_ActionAbility_GRMLN
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (Transient, DuplicateTransient)
	struct FEnvQueryParams                             FindInstantTargetQuery;                                   // 0x0280(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C");
		return ptr;
	}


	void AN_RedirectDrone();
	void OnServerBegin(class AActor** Actor);
	void AN_PerformRedirectFeedback();
	void ExecuteUbergraph_Action_Operative_RedirectDrone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
