#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_EnforcerShared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_EnforcerShared.BPI_EnforcerShared_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_EnforcerShared_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_EnforcerShared.BPI_EnforcerShared_C");
		return ptr;
	}


	void Enforcer_AllowButtStagger(bool AllowButtStagger);
	void Enforcer_AnointedJoe_ShieldDown();
	void Enforcer_AnointedJoe_SpawnAI();
	void Enforcer_TransformToGun();
	void Enforcer_Anointed_Death();
	void Enforcer_ForcedDirectionalStagger(const struct FDamageReactionEventSummary& DamageSummary);
	void Enforcer_GetType(TEnumAsByte<Enum_EnforcerVariants>* EnforcerType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
