#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_ShockOrb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C
// 0x0008 (0x0230 - 0x0228)
class UAction_PetLoader_ShockOrb_C : public UA_Pet_AttackCommand_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C");
		return ptr;
	}


	void AN_FireShockOrb();
	void AN_ChargeShockOrb();
	void ExecuteUbergraph_Action_PetLoader_ShockOrb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
