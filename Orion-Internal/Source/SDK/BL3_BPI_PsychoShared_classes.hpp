#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_PsychoShared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_PsychoShared.BPI_PsychoShared_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_PsychoShared_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PsychoShared.BPI_PsychoShared_C");
		return ptr;
	}


	void PsychoLoot_Flee_Beam(bool Start);
	void PsychoShared_Anointed_Death();
	void PsychoShared_StolenProjFinished();
	void PsychoShared_GetVariant(TEnumAsByte<Enum_PsychoVariants>* PsychoVariant);
	void PsychoShared_TargetChanged(class AActor* TargetActor);
	void PsychoShared_FireBreath(TEnumAsByte<Enum_PsychoShared_FireBreathFunctions> FireBreath_Function);
	void PsychoShared_FacePlant(const struct FDamageReactionEventSummary& Damage_Summary);
	void PsychoShared_MaskBreak(const struct FDamageReactionEventSummary& Damage_Summary);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
