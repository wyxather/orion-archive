#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_Digiclone_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.AN_ShowDevice
struct UAction_Operative_Digiclone_Base_C_AN_ShowDevice_Params
{
};

// Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.AN_HideDevice
struct UAction_Operative_Digiclone_Base_C_AN_HideDevice_Params
{
};

// Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.OnEnd
struct UAction_Operative_Digiclone_Base_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.OnBeginBringUpWeapon
struct UAction_Operative_Digiclone_Base_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.ExecuteUbergraph_Action_Operative_Digiclone_Base
struct UAction_Operative_Digiclone_Base_C_ExecuteUbergraph_Action_Operative_Digiclone_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
