#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_ElectricGenerator_WallSwitch_Combat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.UserConstructionScript
struct AIO_ElectricGenerator_WallSwitch_Combat_C_UserConstructionScript_Params
{
};

// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.Timeline_Transition__FinishedFunc
struct AIO_ElectricGenerator_WallSwitch_Combat_C_Timeline_Transition__FinishedFunc_Params
{
};

// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.Timeline_Transition__UpdateFunc
struct AIO_ElectricGenerator_WallSwitch_Combat_C_Timeline_Transition__UpdateFunc_Params
{
};

// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.ElecticityPresentation
struct AIO_ElectricGenerator_WallSwitch_Combat_C_ElecticityPresentation_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.__UserState_ElectricState_2
struct AIO_ElectricGenerator_WallSwitch_Combat_C___UserState_ElectricState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.__UserState_ElectricState_1
struct AIO_ElectricGenerator_WallSwitch_Combat_C___UserState_ElectricState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.ReceiveBeginPlay
struct AIO_ElectricGenerator_WallSwitch_Combat_C_ReceiveBeginPlay_Params
{
};

// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_IO_ElectricGenerator_WallSwitch_Combat
struct AIO_ElectricGenerator_WallSwitch_Combat_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_IO_ElectricGenerator_WallSwitch_Combat_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.AudioHitSwitch
struct AIO_ElectricGenerator_WallSwitch_Combat_C_AudioHitSwitch_Params
{
};

// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.ExecuteUbergraph_IO_ElectricGenerator_WallSwitch_Combat
struct AIO_ElectricGenerator_WallSwitch_Combat_C_ExecuteUbergraph_IO_ElectricGenerator_WallSwitch_Combat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
