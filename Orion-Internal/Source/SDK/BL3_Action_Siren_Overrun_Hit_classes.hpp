#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Siren_Overrun_Hit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C
// 0x0008 (0x0240 - 0x0238)
class UAction_Siren_Overrun_Hit_C : public UActionParent_Siren_SkillArms_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C");
		return ptr;
	}


	void AN_BlitzHit();
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnBeginBringUpWeapon(class AActor** Actor);
	void OnServerBegin(class AActor** Actor);
	void AN_PerformBlitzFeedback_Hit();
	void ExecuteUbergraph_Action_Siren_Overrun_Hit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
