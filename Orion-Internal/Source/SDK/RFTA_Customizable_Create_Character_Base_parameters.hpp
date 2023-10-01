#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Customizable_Create_Character_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Customizable_Create_Character_Base.Customizable_Create_Character_Base_C.ReceiveBeginPlay
struct ACustomizable_Create_Character_Base_C_ReceiveBeginPlay_Params
{
};

// Function Customizable_Create_Character_Base.Customizable_Create_Character_Base_C.OnShowHelmetApplied
struct ACustomizable_Create_Character_Base_C_OnShowHelmetApplied_Params
{
	class UUserSetting**                               AppliedSetting;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettingsGunfire**                   UserSettings;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Customizable_Create_Character_Base.Customizable_Create_Character_Base_C.SetDeceased
struct ACustomizable_Create_Character_Base_C_SetDeceased_Params
{
	bool*                                              IsDeceased;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Customizable_Create_Character_Base.Customizable_Create_Character_Base_C.ExecuteUbergraph_Customizable_Create_Character_Base
struct ACustomizable_Create_Character_Base_C_ExecuteUbergraph_Customizable_Create_Character_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
