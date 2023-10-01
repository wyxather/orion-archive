#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_ElectricBattery_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_ElectricBattery.IO_ElectricBattery_C.UserConstructionScript
struct AIO_ElectricBattery_C_UserConstructionScript_Params
{
};

// Function IO_ElectricBattery.IO_ElectricBattery_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_4_TakeAnyPipelineDamageDelegate__DelegateSignature_IO_Combat_Cauldron
struct AIO_ElectricBattery_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_4_TakeAnyPipelineDamageDelegate__DelegateSignature_IO_Combat_Cauldron_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IO_ElectricBattery.IO_ElectricBattery_C.ScriptedExplode
struct AIO_ElectricBattery_C_ScriptedExplode_Params
{
};

// Function IO_ElectricBattery.IO_ElectricBattery_C.ReceiveBeginPlay
struct AIO_ElectricBattery_C_ReceiveBeginPlay_Params
{
};

// Function IO_ElectricBattery.IO_ElectricBattery_C.__UserState_BatteryState_1
struct AIO_ElectricBattery_C___UserState_BatteryState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricBattery.IO_ElectricBattery_C.__UserState_BatteryState_2
struct AIO_ElectricBattery_C___UserState_BatteryState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricBattery.IO_ElectricBattery_C.ExecuteUbergraph_IO_ElectricBattery
struct AIO_ElectricBattery_C_ExecuteUbergraph_IO_ElectricBattery_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricBattery.IO_ElectricBattery_C.BatteryRecharged__DelegateSignature
struct AIO_ElectricBattery_C_BatteryRecharged__DelegateSignature_Params
{
};

// Function IO_ElectricBattery.IO_ElectricBattery_C.GeneratorExploded__DelegateSignature
struct AIO_ElectricBattery_C_GeneratorExploded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
