#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_SkagShared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_SkagShared.BPI_SkagShared_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_SkagShared_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SkagShared.BPI_SkagShared_C");
		return ptr;
	}


	void Skag_ElementalDeath();
	void Skag_SetBellyActorSpawnOption(class USpawnOptionData* NewBellyActorSpawnOption);
	void Skag_GetVariant(TEnumAsByte<Enum_SkagVariants>* SkagVariantType);
	void Skag_How_Interrupted();
	void Skag_Howl_Stop();
	void Skag_SetDefaultProjectile();
	void Skag_SetBadassBombProjectile();
	void Skag_Howl_Start();
	void Skag_GetElement(EOakElementalType* SkagElement);
	void Skag_Transform(EOakElementalType Element, bool IsForcedTransform);
	void Skag_VomitStop();
	void Skag_VomitStart();
	void Skag_StolenProjFinished();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
