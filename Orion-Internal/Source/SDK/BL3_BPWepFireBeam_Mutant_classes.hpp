#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWepFireBeam_Mutant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWepFireBeam_Mutant.BPWepFireBeam_Mutant_C
// 0x0008 (0x0940 - 0x0938)
class UBPWepFireBeam_Mutant_C : public UWeaponFireBeamComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWepFireBeam_Mutant.BPWepFireBeam_Mutant_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPWepFireBeam_Mutant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
