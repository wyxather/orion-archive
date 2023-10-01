#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_DigiClone_Death_Digistruct_Out_Quick_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CE_DigiClone_Death_Digistruct_Out_Quick.BP_CE_DigiClone_Death_Digistruct_Out_Quick_C.OnBegin
struct UBP_CE_DigiClone_Death_Digistruct_Out_Quick_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_DigiClone_Death_Digistruct_Out_Quick.BP_CE_DigiClone_Death_Digistruct_Out_Quick_C.OnServerEnd
struct UBP_CE_DigiClone_Death_Digistruct_Out_Quick_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_DigiClone_Death_Digistruct_Out_Quick.BP_CE_DigiClone_Death_Digistruct_Out_Quick_C.ExecuteUbergraph_BP_CE_DigiClone_Death_Digistruct_Out_Quick
struct UBP_CE_DigiClone_Death_Digistruct_Out_Quick_C_ExecuteUbergraph_BP_CE_DigiClone_Death_Digistruct_Out_Quick_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
