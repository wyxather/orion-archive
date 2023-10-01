#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Melee_Siren_DLCSkill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Melee_Siren_DLCSkill.Action_Melee_Siren_DLCSkill_C
// 0x0008 (0x0248 - 0x0240)
class UAction_Melee_Siren_DLCSkill_C : public UAction_Melee_Siren_Success_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Melee_Siren_DLCSkill.Action_Melee_Siren_DLCSkill_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_Melee_Siren_DLCSkill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
