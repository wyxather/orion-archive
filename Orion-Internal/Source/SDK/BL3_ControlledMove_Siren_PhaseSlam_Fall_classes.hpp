#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Siren_PhaseSlam_Fall_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C
// 0x0008 (0x08B8 - 0x08B0)
class UControlledMove_Siren_PhaseSlam_Fall_C : public UOakControlledMove_ActionAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C");
		return ptr;
	}


	void GroundSlam_End(float Distance);
	void DoMelee();
	void ExecuteUbergraph_ControlledMove_Siren_PhaseSlam_Fall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
