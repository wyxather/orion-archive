#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_FrozenMist_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_FrozenMist.Action_Mod_FrozenMist_C
// 0x0018 (0x0240 - 0x0228)
class UAction_Mod_FrozenMist_C : public UBP_ActionBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Radius;                                                   // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_FrozenMist.Action_Mod_FrozenMist_C");
		return ptr;
	}


	void GetDamageCause(class AActor** Out);
	void GetWeapon(class AActor** Out);
	void GetPlayerAsCause(class AActor** Cause);
	void GetDamage(float* Rate);
	void OnActionStart();
	void ExecuteUbergraph_Action_Mod_FrozenMist(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
