#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Melee_Gunner_Miss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Melee_Gunner_Miss.Action_Melee_Gunner_Miss_C
// 0x0008 (0x0240 - 0x0238)
class UAction_Melee_Gunner_Miss_C : public UAction_Melee_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Melee_Gunner_Miss.Action_Melee_Gunner_Miss_C");
		return ptr;
	}


	void HideMelee();
	void ExecuteUbergraph_Action_Melee_Gunner_Miss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
