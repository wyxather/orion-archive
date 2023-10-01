#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_MissileBarrage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.AN_FireLeftShot
struct UAction_PetLoader_MissileBarrage_C_AN_FireLeftShot_Params
{
};

// Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.AN_FireRightShot
struct UAction_PetLoader_MissileBarrage_C_AN_FireRightShot_Params
{
};

// Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.OnServerBegin
struct UAction_PetLoader_MissileBarrage_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.ExecuteUbergraph_Action_PetLoader_MissileBarrage
struct UAction_PetLoader_MissileBarrage_C_ExecuteUbergraph_Action_PetLoader_MissileBarrage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
