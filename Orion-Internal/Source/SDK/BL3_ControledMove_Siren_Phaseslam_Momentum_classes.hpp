#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControledMove_Siren_Phaseslam_Momentum_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControledMove_Siren_Phaseslam_Momentum.ControledMove_Siren_Phaseslam_Momentum_C
// 0x0000 (0x08A8 - 0x08A8)
class UControledMove_Siren_Phaseslam_Momentum_C : public UOakControlledMove
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControledMove_Siren_Phaseslam_Momentum.ControledMove_Siren_Phaseslam_Momentum_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
