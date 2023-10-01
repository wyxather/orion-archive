#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_FaultyStar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAug_FaultyStar.ShieldAug_FaultyStar_C
// 0x0010 (0x02C0 - 0x02B0)
class UShieldAug_FaultyStar_C : public UShieldAugment_Damage
{
public:
	bool                                               hasMultipleNovas;                                         // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02B1(0x0007) MISSED OFFSET
	class UClass*                                      DamageSource;                                             // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_FaultyStar.ShieldAug_FaultyStar_C");
		return ptr;
	}


	void K2_NativeDelayCallback(class AShield** Shield, struct FName* DelayName, struct FAugmentData* StackData);
	void K2_OnDamageTaken(class AShield** Shield, class UDamageComponent** DamageReceiver, float* Damage, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class AController** InstigatedBy, class UDamageCauserComponent** DamageCauser, struct FReceivedDamageDetails* Details, struct FAugmentData* StackData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
