#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond11_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.DoReflectedDamage
struct UPassive_Beastmaster_Bond11_C_DoReflectedDamage_Params
{
};

// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.OnActivated
struct UPassive_Beastmaster_Bond11_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.RegisterDelegate
struct UPassive_Beastmaster_Bond11_C_RegisterDelegate_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.PetSpawned_Bond11
struct UPassive_Beastmaster_Bond11_C_PetSpawned_Bond11_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.PetReleased_Bond11
struct UPassive_Beastmaster_Bond11_C_PetReleased_Bond11_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.OnTakeAnyDamage_Pet_Bond11
struct UPassive_Beastmaster_Bond11_C_OnTakeAnyDamage_Pet_Bond11_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.UnregisterDelegate
struct UPassive_Beastmaster_Bond11_C_UnregisterDelegate_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.ExecuteUbergraph_Passive_Beastmaster_Bond11
struct UPassive_Beastmaster_Bond11_C_ExecuteUbergraph_Passive_Beastmaster_Bond11_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
