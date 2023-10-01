#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_Operative_DigiClone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.StartSeperationAnxietyNova
struct UInterface_Operative_DigiClone_C_StartSeperationAnxietyNova_Params
{
	struct FVector                                     Loc;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.NotifyPanicButtonTriggered
struct UInterface_Operative_DigiClone_C_NotifyPanicButtonTriggered_Params
{
};

// Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.GetDigiCloneReference
struct UInterface_Operative_DigiClone_C_GetDigiCloneReference_Params
{
	class AActor*                                      Digiclone;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.Is DigiClone Active
struct UInterface_Operative_DigiClone_C_Is_DigiClone_Active_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
