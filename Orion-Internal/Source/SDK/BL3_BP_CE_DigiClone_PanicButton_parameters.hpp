#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_DigiClone_PanicButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.GetAssociatedPlayer
struct UBP_CE_DigiClone_PanicButton_C_GetAssociatedPlayer_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.ShouldSimulateRelease
struct UBP_CE_DigiClone_PanicButton_C_ShouldSimulateRelease_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnServerBegin
struct UBP_CE_DigiClone_PanicButton_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnServerEnd
struct UBP_CE_DigiClone_PanicButton_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnEnd
struct UBP_CE_DigiClone_PanicButton_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnBegin
struct UBP_CE_DigiClone_PanicButton_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnShouldSimulateEnd
struct UBP_CE_DigiClone_PanicButton_C_OnShouldSimulateEnd_Params
{
};

// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.ExecuteUbergraph_BP_CE_DigiClone_PanicButton
struct UBP_CE_DigiClone_PanicButton_C_ExecuteUbergraph_BP_CE_DigiClone_PanicButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
