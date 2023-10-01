#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Buff_Consumable_FrenzyDust_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C
// 0x000C (0x02E0 - 0x02D4)
class UAction_Buff_Consumable_FrenzyDust_C : public UAction_Buff_DurationMod_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C");
		return ptr;
	}


	void Get_Owning_Character(class AActor** Actor, class ACharacterGunfire** AsCharacter_Gunfire);
	void OnComputeStats();
	void OnActionStart();
	void OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause);
	void OnReapplyBuff();
	void ExecuteUbergraph_Action_Buff_Consumable_FrenzyDust(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
