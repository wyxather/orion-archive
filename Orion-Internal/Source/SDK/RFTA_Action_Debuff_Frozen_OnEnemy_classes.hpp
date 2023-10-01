#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Debuff_Frozen_OnEnemy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Debuff_Frozen_OnEnemy.Action_Debuff_Frozen_OnEnemy_C
// 0x0015 (0x02D8 - 0x02C3)
class UAction_Debuff_Frozen_OnEnemy_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x02C3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TimeDilationEnemy;                                        // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              TimeDilationBoss;                                         // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Debuff_Frozen_OnEnemy.Action_Debuff_Frozen_OnEnemy_C");
		return ptr;
	}


	void Stop_FrozenFX();
	void Start_FrozenFX();
	void OnActionStop();
	void OnActionStart();
	void ExecuteUbergraph_Action_Debuff_Frozen_OnEnemy(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
