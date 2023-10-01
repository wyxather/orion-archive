#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Beastmaster_Enrage_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.FirePetSummonStarted
struct UA_Beastmaster_Enrage_Base_C_FirePetSummonStarted_Params
{
};

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetEnrageRiftActorClass
struct UA_Beastmaster_Enrage_Base_C_GetEnrageRiftActorClass_Params
{
	class UClass*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.InitRegisterProperties
struct UA_Beastmaster_Enrage_Base_C_InitRegisterProperties_Params
{
};

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetPetSpawnLoc
struct UA_Beastmaster_Enrage_Base_C_GetPetSpawnLoc_Params
{
	struct FVector                                     res;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetOwnerPet
struct UA_Beastmaster_Enrage_Base_C_GetOwnerPet_Params
{
	class AOakCharacter*                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.DoPreTeleportEffects
struct UA_Beastmaster_Enrage_Base_C_DoPreTeleportEffects_Params
{
};

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_Skill
struct UA_Beastmaster_Enrage_Base_C_Notify_Skill_Params
{
};

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_SkillEnd
struct UA_Beastmaster_Enrage_Base_C_Notify_SkillEnd_Params
{
};

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.OnBegin
struct UA_Beastmaster_Enrage_Base_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.OnEnd
struct UA_Beastmaster_Enrage_Base_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_Rumble
struct UA_Beastmaster_Enrage_Base_C_Notify_Rumble_Params
{
};

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_CS_Pitch
struct UA_Beastmaster_Enrage_Base_C_Notify_CS_Pitch_Params
{
};

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_CS_FoV
struct UA_Beastmaster_Enrage_Base_C_Notify_CS_FoV_Params
{
};

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.ExecuteUbergraph_A_Beastmaster_Enrage_Base
struct UA_Beastmaster_Enrage_Base_C_ExecuteUbergraph_A_Beastmaster_Enrage_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
