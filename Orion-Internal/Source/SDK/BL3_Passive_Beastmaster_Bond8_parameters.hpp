#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond8_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond8.Passive_Beastmaster_Bond8_C.TransferDamageToPet
struct UPassive_Beastmaster_Bond8_C_TransferDamageToPet_Params
{
	float                                              NewDamageTaken;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond8.Passive_Beastmaster_Bond8_C.OnActivated
struct UPassive_Beastmaster_Bond8_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_Bond8.Passive_Beastmaster_Bond8_C.OnTakeAnyDamage_Bond8
struct UPassive_Beastmaster_Bond8_C_OnTakeAnyDamage_Bond8_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Beastmaster_Bond8.Passive_Beastmaster_Bond8_C.ExecuteUbergraph_Passive_Beastmaster_Bond8
struct UPassive_Beastmaster_Bond8_C_ExecuteUbergraph_Passive_Beastmaster_Bond8_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
