#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_DOT_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_DOT.Action_DOT_C
// 0x002A (0x02ED - 0x02C3)
class UAction_DOT_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x02C3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      DamageType;                                               // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Frequency;                                                // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                   // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              DamagePerTick;                                            // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ImmunityTag;                                              // 0x02E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoLevelScaling;                                           // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_DOT.Action_DOT_C");
		return ptr;
	}


	void ShouldDoDamageScaling(bool* Out);
	void CanDoDamage(bool* Out);
	void GetLevelScalar(float* Scalar);
	void GetDamageScalar(float* Out);
	void IsImmune(bool* Out);
	void DoDamage();
	void SetDamage(float* TotalDamage, bool* ApplyLevelScaling);
	void OnActionStart();
	void OnDOT();
	void OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause);
	void OnActionStop();
	void ExecuteUbergraph_Action_DOT(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
