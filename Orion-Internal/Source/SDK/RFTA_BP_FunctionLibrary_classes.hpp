#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_FunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FunctionLibrary.BP_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FunctionLibrary.BP_FunctionLibrary_C");
		return ptr;
	}


	void STATIC_GetMinionDamageScalar(class UObject** Minion, class UObject** __WorldContext, float* Scalar, bool* IsValid);
	void STATIC_GetMinionOwner(class AActor** Minion, class UObject** __WorldContext, class AActor** Owner);
	void STATIC_ApplySoulEmberBuff(class ACharacterGunfire** Owner, class UObject** __WorldContext);
	void STATIC_GetMinionDamageMod(class UObject** Minion, class UObject** __WorldContext, float* Mod);
	void STATIC_GetMaxSummonsForMod(class UClass** Mod, class AActor** Owner, int* Bonus, class UObject** __WorldContext, int* Count);
	void STATIC_LimitMinions(int* MaxCount, class ACharacterGunfire** NewMinion, class UObject** __WorldContext);
	void STATIC_ScaleDamage(float* Damage, int* Level, class UObject** __WorldContext, float* Out);
	void STATIC_Update_Trigger_Objects(bool* State, class UObject** __WorldContext, TArray<class AActor*>* Trigger_Objects);
	bool STATIC_IsDemoFloor(class UObject** WorldContextObject, class UObject** __WorldContext);
	bool STATIC_IsDemo(class UObject** WorldContextObject, class UObject** __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
