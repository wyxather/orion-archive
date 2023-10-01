#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BPI_ModMinion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_ModMinion.BPI_ModMinion_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_ModMinion_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ModMinion.BPI_ModMinion_C");
		return ptr;
	}


	void GetMinionOwner(class AActor** Owner);
	void GetCauseDamageScalar(float* Scalar);
	void MinionHasDamageTag(bool* ExtraDamage, float* DamageScalar);
	void HasSoulEmberTrinket(bool* Out);
	void DestroyMinion();
	void IsValidMinion(bool* Out);
	void GetSpawnTime(float* Time);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
